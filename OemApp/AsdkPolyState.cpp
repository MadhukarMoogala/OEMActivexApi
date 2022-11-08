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

// AsdkPolyState.cpp : Implementation of CAsdkPolyState
#include "stdafx.h"
#include "Oempolyapp_i.h"
#include "AsdkPolyState.h"

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyState

STDMETHODIMP CAsdkPolyState::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAsdkPolyState
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

void CAsdkPolyState::FinalRelease()
{
    if (m_pAcadState)
        m_pAcadState->Release();
    if (m_pAsdkPolyApp)
        m_pAsdkPolyApp->Release();
}

HRESULT CAsdkPolyState::initNew(IAsdkPolyApplication2* pApp, IAcadState* pState)
{
    if (!pApp || !pState) return E_UNEXPECTED;

    m_pAsdkPolyApp = pApp;
    m_pAsdkPolyApp->AddRef();
    m_pAcadState = pState;
    m_pAcadState->AddRef();
    return S_OK;
}

STDMETHODIMP CAsdkPolyState::get_Application(IAsdkPolyApplication2** pAppObj)
{
    if (!m_pAsdkPolyApp) return E_UNEXPECTED;

    *pAppObj = m_pAsdkPolyApp;
    (*pAppObj)->AddRef();
    return S_OK;
}

STDMETHODIMP CAsdkPolyState::get_IsQuiescent(VARIANT_BOOL* pState)
{
    return !m_pAcadState ? E_UNEXPECTED : m_pAcadState->get_IsQuiescent(pState);
}
