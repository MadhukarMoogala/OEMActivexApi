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

// AsdkPolyState.h : Declaration of the CAsdkPolyState

#ifndef __ASDKPOLYSTATE_H_
#define __ASDKPOLYSTATE_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyState
class ATL_NO_VTABLE CAsdkPolyState : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAsdkPolyState, &CLSID_AsdkPolyState>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAsdkPolyState, &IID_IAsdkPolyState, &LIBID_AsdkPoly2, 2>
{
public:
	CAsdkPolyState()
	{
        m_pAcadState = NULL;
        m_pAsdkPolyApp = NULL;
	}

    void FinalRelease();

DECLARE_REGISTRY_RESOURCEID(IDR_ASDKPOLYSTATE)
DECLARE_NOT_AGGREGATABLE(CAsdkPolyState)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAsdkPolyState)
	COM_INTERFACE_ENTRY(IAsdkPolyState)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAsdkPolyState
public:
    STDMETHOD(get_Application)(IAsdkPolyApplication2** pAppObj);
    STDMETHOD(get_IsQuiescent)(VARIANT_BOOL* pState);

    HRESULT initNew(IAsdkPolyApplication2*, IAcadState*);

private:
    IAcadState* m_pAcadState;
    IAsdkPolyApplication2* m_pAsdkPolyApp;
};

#endif //__ASDKPOLYSTATE_H_
