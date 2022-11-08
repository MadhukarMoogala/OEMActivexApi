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

// AsdkPolyApp.h : Declaration of the CAsdkPolyApp

#ifndef __ASDKPOLYAPP_H_
#define __ASDKPOLYAPP_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyApp
class ATL_NO_VTABLE CAsdkPolyApp : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAsdkPolyApp, &CLSID_AsdkPolyApplication>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAsdkPolyApplication2, &IID_IAsdkPolyApplication2, &LIBID_AsdkPoly2, 2>
{
public:
	CAsdkPolyApp()
	{
        m_pAcadApp = NULL;
        m_pAsdkPolyState = NULL;
        m_pAsdkPolyDocs = NULL;
    
	}

    void FinalRelease();

DECLARE_REGISTRY_RESOURCEID(IDR_ASDKPOLYAPP)
DECLARE_NOT_AGGREGATABLE(CAsdkPolyApp)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAsdkPolyApp)
	COM_INTERFACE_ENTRY(IAsdkPolyApplication2)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAsdkPolyApplication2
public:
    
    STDMETHOD(get_Name)(BSTR* pAppName);
    STDMETHOD(get_Application)(IAsdkPolyApplication2** pAppObj);
    STDMETHOD(get_ActiveDocument)(IAsdkPolyDocument2** pActiveDoc);
    STDMETHOD(put_ActiveDocument)(IAsdkPolyDocument2* pActiveDoc);
	STDMETHOD(GetInterfaceObject)(BSTR ProgID, IDispatch ** pObj);
	STDMETHOD(get_Documents)(IAsdkPolyDocuments2** pDocuments);
    STDMETHOD(ZoomAll)(void);
    STDMETHOD(GetAcadState)(IAsdkPolyState** pVal);
	STDMETHOD(get_HWND)(LONG_PTR *hWnd);

    
	

private:
    IAcadApplication* m_pAcadApp;
    IAsdkPolyState* m_pAsdkPolyState;
    IAsdkPolyDocuments2* m_pAsdkPolyDocs;
       

    HRESULT initAcadApp();
};

#endif //__ASDKPOLYAPP_H_
