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

// AsdkPolyDoc.h : Declaration of the CAsdkPolyDoc

#ifndef __ASDKPOLYDOC_H_
#define __ASDKPOLYDOC_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyDoc
class ATL_NO_VTABLE CAsdkPolyDoc : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAsdkPolyDoc, &CLSID_AsdkPolyDocument>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAsdkPolyDocument2, &IID_IAsdkPolyDocument2, &LIBID_AsdkPoly2, 2>
{
public:
	CAsdkPolyDoc()
	{
        m_pAcadDoc = NULL;
        m_pAsdkPolyApp = NULL;
        m_pAsdkPolyUtil = NULL;
	}

    void FinalRelease();

DECLARE_REGISTRY_RESOURCEID(IDR_ASDKPOLYDOC)
DECLARE_NOT_AGGREGATABLE(CAsdkPolyDoc)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAsdkPolyDoc)
	COM_INTERFACE_ENTRY(IAsdkPolyDocument2)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAsdkPolyDocument2
public:

    
    STDMETHOD(Open)(BSTR FullName, VARIANT password, IAsdkPolyDocument2** pDocObj);
   

    HRESULT initNew(IAsdkPolyApplication2*, IAcadDocument*);
    IAcadDocument* getAcadDocument() { return m_pAcadDoc; }

private:
    IAcadDocument* m_pAcadDoc;
    IAsdkPolyApplication2* m_pAsdkPolyApp;
    IAsdkPolyUtility2* m_pAsdkPolyUtil;
};

#endif //__ASDKPOLYDOC_H_
