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

// AsdkPolyApp.cpp : Implementation of CAsdkPolyApp
#include "stdafx.h"
#include "Oempolyapp_i.h"
#include "AsdkPolyApp.h"
#include "AsdkPolyState.h"
#include "AsdkPolyDocs.h"
#include "AsdkPolyDoc.h"


/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyApp

STDMETHODIMP CAsdkPolyApp::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAsdkPolyApplication2
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

void CAsdkPolyApp::FinalRelease()
{
    if (m_pAcadApp)
        m_pAcadApp->Release();
    if (m_pAsdkPolyState)
        m_pAsdkPolyState->Release();
    if (m_pAsdkPolyDocs)
        m_pAsdkPolyDocs->Release();
   
}

HRESULT CAsdkPolyApp::initAcadApp()
{
    HRESULT hr = S_OK;
    if (!m_pAcadApp)
    {
        LPDISPATCH pAppDisp = acedGetAcadWinApp()->GetIDispatch(FALSE);
        if (pAppDisp == NULL)
            return E_POINTER;

        hr = pAppDisp->QueryInterface(IID_IAcadApplication, (LPVOID*)&m_pAcadApp);
        if (FAILED(hr))
            m_pAcadApp = NULL;
    }
    return hr;
}





STDMETHODIMP CAsdkPolyApp::get_Name(BSTR* pAppName)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
        return m_pAcadApp->get_Name(pAppName);
    return hr;
}



STDMETHODIMP CAsdkPolyApp::get_Application(IAsdkPolyApplication2** pAppObj)
{
    *pAppObj = this;
    (*pAppObj)->AddRef();
    return S_OK;
}

STDMETHODIMP CAsdkPolyApp::get_ActiveDocument(IAsdkPolyDocument2** pActiveDoc)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
    {
        CComPtr<IAcadDocument> pAcadDoc;
        hr = m_pAcadApp->get_ActiveDocument(&pAcadDoc);
        if (FAILED(hr)) return hr;

        CComPtr<IAsdkPolyDocuments2> pAsdkPolyDocs;
        hr = get_Documents(&pAsdkPolyDocs);
        if (FAILED(hr)) return hr;

        return ((CAsdkPolyDocs*)(IAsdkPolyDocuments2*)pAsdkPolyDocs)->CreateNew(pAcadDoc, pActiveDoc);
    }
    return hr;
}

STDMETHODIMP CAsdkPolyApp::put_ActiveDocument(IAsdkPolyDocument2* pActiveDoc)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp && pActiveDoc)
        return m_pAcadApp->put_ActiveDocument(((CAsdkPolyDoc*)pActiveDoc)->getAcadDocument());
    return hr;
}





STDMETHODIMP CAsdkPolyApp::GetInterfaceObject(BSTR ProgID, IDispatch** pObj)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
        return m_pAcadApp->GetInterfaceObject(ProgID, pObj);
    return hr;
}
















STDMETHODIMP CAsdkPolyApp::get_Documents(IAsdkPolyDocuments2** pDocuments)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
    {
        if (!m_pAsdkPolyDocs)
        {
            CComPtr<IAcadDocuments> pAcadDocs;
            hr = m_pAcadApp->get_Documents(&pAcadDocs);
            if (FAILED(hr)) return hr;

            CComPtr<IClassFactory> pCF;
            hr = DllGetClassObject(CLSID_AsdkPolyDocuments, IID_IClassFactory, (LPVOID*)&pCF);
            if (FAILED(hr)) return hr;

            hr = pCF->CreateInstance(NULL, IID_IAsdkPolyDocuments2, (LPVOID*)&m_pAsdkPolyDocs);
            if (FAILED(hr)) return hr;

            hr = ((CAsdkPolyDocs*)m_pAsdkPolyDocs)->initNew(this, pAcadDocs);
            if (FAILED(hr))
            {
                m_pAsdkPolyDocs->Release();
                m_pAsdkPolyDocs = NULL;
                return hr;
            }
        }

        *pDocuments = m_pAsdkPolyDocs;
        (*pDocuments)->AddRef();
        return S_OK;
    }
    return hr;
}











STDMETHODIMP CAsdkPolyApp::ZoomAll(void)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
        return m_pAcadApp->ZoomAll();
    return hr;
}









STDMETHODIMP CAsdkPolyApp::GetAcadState(IAsdkPolyState** pVal)
{
    HRESULT hr = initAcadApp();
    if (m_pAcadApp)
    {
        if (!m_pAsdkPolyState)
        {
            CComPtr<IAcadState> pAcadState;
            hr = m_pAcadApp->GetAcadState(&pAcadState);
            if (FAILED(hr)) return hr;

            CComPtr<IClassFactory> pCF;
            hr = DllGetClassObject(CLSID_AsdkPolyState, IID_IClassFactory, (LPVOID*)&pCF);
            if (FAILED(hr)) return hr;

            hr = pCF->CreateInstance(NULL, IID_IAsdkPolyState, (LPVOID*)&m_pAsdkPolyState);
            if (FAILED(hr)) return hr;

            hr = ((CAsdkPolyState*)m_pAsdkPolyState)->initNew(this, pAcadState);
            if (FAILED(hr))
            {
                m_pAsdkPolyState->Release();
                m_pAsdkPolyState = NULL;
                return hr;
            }
        }

        *pVal = m_pAsdkPolyState;
        (*pVal)->AddRef();
        return S_OK;
    }
    return hr;
}

STDMETHODIMP CAsdkPolyApp::get_HWND(LONG_PTR * hWnd)
	{
	HRESULT hr = initAcadApp();
	if (m_pAcadApp)
		return m_pAcadApp->get_HWND(hWnd);
	return hr;
	}


