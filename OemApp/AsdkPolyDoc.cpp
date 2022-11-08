//
//////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2016 Autodesk, Inc.  All rights reserved.
//
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.   
//
//////////////////////////////////////////////////////////////////////////////

// AsdkPolyDoc.cpp : Implementation of CAsdkPolyDoc
#include "stdafx.h"
#include "Oempolyapp_i.h"
#include "AsdkPolyDoc.h"
#include "AsdkPolyDocs.h"
#include "AsdkPolyUtil.h"

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyDoc

STDMETHODIMP CAsdkPolyDoc::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAsdkPolyDocument2
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

void CAsdkPolyDoc::FinalRelease()
{
    if (m_pAcadDoc)
        m_pAcadDoc->Release();
    if (m_pAsdkPolyApp)
        m_pAsdkPolyApp->Release();
    
    if (m_pAsdkPolyUtil)
        m_pAsdkPolyUtil->Release();
}

HRESULT CAsdkPolyDoc::initNew(IAsdkPolyApplication2* pApp, IAcadDocument* pDoc)
{
    if (!pApp || !pDoc) return E_UNEXPECTED;

    m_pAsdkPolyApp = pApp;
    m_pAsdkPolyApp->AddRef();
    m_pAcadDoc = pDoc;
    m_pAcadDoc->AddRef();
    return S_OK;
}
STDMETHODIMP CAsdkPolyDoc::Open(BSTR FullName,
	VARIANT password, IAsdkPolyDocument2** pDocObj)
	{
	if (!m_pAcadDoc || !m_pAsdkPolyApp) return E_UNEXPECTED;

	CComPtr<IAcadDocument> pAcadDoc;
	HRESULT hr = m_pAcadDoc->Open(FullName, password, &pAcadDoc);
	if (FAILED(hr)) return hr;

	CComPtr<IAsdkPolyDocuments2> pAsdkPolyDocs;
	hr = m_pAsdkPolyApp->get_Documents(&pAsdkPolyDocs);
	if (FAILED(hr)) return hr;

	return ((CAsdkPolyDocs*)(IAsdkPolyDocuments2*)pAsdkPolyDocs)->CreateNew(pAcadDoc, pDocObj);
	}


