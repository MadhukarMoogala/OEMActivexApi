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

// AsdkPolyDocs.h : Declaration of the CAsdkPolyDocs

#ifndef __ASDKPOLYDOCS_H_
#define __ASDKPOLYDOCS_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyDocs
class ATL_NO_VTABLE CAsdkPolyDocs : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAsdkPolyDocs, &CLSID_AsdkPolyDocuments>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAsdkPolyDocuments2, &IID_IAsdkPolyDocuments2, &LIBID_AsdkPoly2, 2>
{
public:
	CAsdkPolyDocs()
	{
        m_pAcadDocs = NULL;
        m_pAsdkPolyApp = NULL;
	}

    void FinalRelease();

DECLARE_REGISTRY_RESOURCEID(IDR_ASDKPOLYDOCS)
DECLARE_NOT_AGGREGATABLE(CAsdkPolyDocs)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAsdkPolyDocs)
	COM_INTERFACE_ENTRY(IAsdkPolyDocuments2)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAsdkPolyDocuments2
public:
    STDMETHOD(Item)(VARIANT index, IAsdkPolyDocument2** pItem);
    STDMETHOD(get_Count)(long* count);
    STDMETHOD(get_Application)(IAsdkPolyApplication2** pAppObj);
    STDMETHOD(Add)(VARIANT TemplateName, IAsdkPolyDocument2** pDoc);
    STDMETHOD(Open)(BSTR Name, VARIANT ReadOnly,  VARIANT Password, IAsdkPolyDocument2** pDoc);
    STDMETHOD(Close)(void);

    HRESULT initNew(IAsdkPolyApplication2*, IAcadDocuments*);
    HRESULT CreateNew(IAcadDocument* pAcadDoc, IAsdkPolyDocument2** pDoc);

private:
    IAcadDocuments* m_pAcadDocs;
    IAsdkPolyApplication2* m_pAsdkPolyApp;
};

#endif //__ASDKPOLYDOCS_H_
