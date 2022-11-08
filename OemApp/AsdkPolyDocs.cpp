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

// AsdkPolyDocs.cpp : Implementation of CAsdkPolyDocs
#include "stdafx.h"
#include "Oempolyapp_i.h"
#include "AsdkPolyDocs.h"
#include "AsdkPolyDoc.h"

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyDocs

STDMETHODIMP CAsdkPolyDocs::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAsdkPolyDocuments2
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

void CAsdkPolyDocs::FinalRelease()
{
    if (m_pAcadDocs)
        m_pAcadDocs->Release();
    if (m_pAsdkPolyApp)
        m_pAsdkPolyApp->Release();
}

HRESULT CAsdkPolyDocs::initNew(IAsdkPolyApplication2* pApp, IAcadDocuments* pDocs)
{
    if (!pApp || !pDocs) return E_UNEXPECTED;

    m_pAsdkPolyApp = pApp;
    m_pAsdkPolyApp->AddRef();
    m_pAcadDocs = pDocs;
    m_pAcadDocs->AddRef();
    return S_OK;
}

HRESULT CAsdkPolyDocs::CreateNew(IAcadDocument* pAcadDoc, IAsdkPolyDocument2** pDoc)
{
    *pDoc = NULL;
    IAsdkPolyDocument2* pAsdkPolyDoc = NULL;
    CComPtr<IClassFactory> pCF;
    HRESULT hr = DllGetClassObject(CLSID_AsdkPolyDocument, IID_IClassFactory, (LPVOID*)&pCF);
    if (FAILED(hr)) return hr;

    hr = pCF->CreateInstance(NULL, IID_IAsdkPolyDocument2, (LPVOID*)&pAsdkPolyDoc);
    if (FAILED(hr)) return hr;

    hr = ((CAsdkPolyDoc*)pAsdkPolyDoc)->initNew(m_pAsdkPolyApp, (IAcadDocument*)pAcadDoc);
    if (FAILED(hr))
    {
        pAsdkPolyDoc->Release();
        return hr;
    }
    *pDoc = pAsdkPolyDoc;
    return S_OK;
}

STDMETHODIMP CAsdkPolyDocs::Item(VARIANT index, IAsdkPolyDocument2** pItem)
{
    if (!m_pAcadDocs) return E_UNEXPECTED;

    CComPtr<IAcadDocument> pAcadDoc;
    HRESULT hr = m_pAcadDocs->Item(index, &pAcadDoc);
    if (FAILED(hr)) return hr;

    return CreateNew(pAcadDoc, pItem);
}

STDMETHODIMP CAsdkPolyDocs::get_Count(long* count)
{
    return !m_pAcadDocs ? E_UNEXPECTED : m_pAcadDocs->get_Count(count);
}

STDMETHODIMP CAsdkPolyDocs::get_Application(IAsdkPolyApplication2** pAppObj)
{
    if (!m_pAsdkPolyApp) return E_UNEXPECTED;

    *pAppObj = m_pAsdkPolyApp;
    (*pAppObj)->AddRef();
    return S_OK;
}

STDMETHODIMP CAsdkPolyDocs::Add(VARIANT TemplateName, IAsdkPolyDocument2** pDoc)
{
    if (!m_pAcadDocs) return E_UNEXPECTED;

    CComPtr<IAcadDocument> pAcadDoc;
    HRESULT hr = m_pAcadDocs->Add(TemplateName, &pAcadDoc);
    if (FAILED(hr)) return hr;

    return CreateNew(pAcadDoc, pDoc);
}

STDMETHODIMP CAsdkPolyDocs::Open(BSTR Name, VARIANT ReadOnly, VARIANT Password,
                                 IAsdkPolyDocument2** pDoc)
{
    if (!m_pAcadDocs) return E_UNEXPECTED;

    CComPtr<IAcadDocument> pAcadDoc;
    HRESULT hr = m_pAcadDocs->Open(Name, ReadOnly, Password, &pAcadDoc);
    if (FAILED(hr)) return hr;

    return CreateNew(pAcadDoc, pDoc);
}

STDMETHODIMP CAsdkPolyDocs::Close()
{
    if (!m_pAcadDocs) return E_UNEXPECTED;

    // Wasn't sure Documents::Close can be implemented correctly here.
    // Anyway, the logic below is the best simulation.
    return m_pAcadDocs->Close();
}
