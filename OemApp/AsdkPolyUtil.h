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

// AsdkPolyUtil.h : Declaration of the CAsdkPolyUtil

#ifndef __ASDKPOLYUTIL_H_
#define __ASDKPOLYUTIL_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyUtil
class ATL_NO_VTABLE CAsdkPolyUtil : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAsdkPolyUtil, &CLSID_AsdkPolyUtility>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAsdkPolyUtility2, &IID_IAsdkPolyUtility2, &LIBID_AsdkPoly2, 2>
{
public:
	CAsdkPolyUtil()
	{
        m_pAcadUtil = NULL;
        m_pAsdkPolyApp = NULL;
	}

    void FinalRelease();

DECLARE_REGISTRY_RESOURCEID(IDR_ASDKPOLYUTIL)
DECLARE_NOT_AGGREGATABLE(CAsdkPolyUtil)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAsdkPolyUtil)
	COM_INTERFACE_ENTRY(IAsdkPolyUtility2)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAsdkPolyUtility2
public:
    STDMETHOD(AngleToReal)(BSTR Angle, AsdkAngleUnits Unit, double* Value);
    STDMETHOD(AngleToString)(double Angle, AsdkAngleUnits Unit, int Precision, BSTR* bstrValue);
    STDMETHOD(DistanceToReal)(BSTR Distance, AsdkUnits Unit, double* Value);
    STDMETHOD(RealToString)(double Value, AsdkUnits Unit, int Precision, BSTR* bstrValue);
    STDMETHOD(TranslateCoordinates)(VARIANT Point, AsdkCoordinateSystem FromCoordSystem,
        AsdkCoordinateSystem ToCoordSystem, int Displacement, VARIANT OCSNormal, VARIANT* transPt);
    STDMETHOD(InitializeUserInput)(int Bits, VARIANT KeyWordList);
    STDMETHOD(GetInteger)(VARIANT Prompt, int* Value);
    STDMETHOD(GetReal)(VARIANT Prompt, double* Value);
    STDMETHOD(GetInput)(BSTR* Value);
    STDMETHOD(GetKeyword)(VARIANT Prompt, BSTR* bstrKeyword);
    STDMETHOD(GetString)(int HasSpaces, VARIANT Prompt, BSTR* bstrValue);
    STDMETHOD(GetAngle)(VARIANT Point, VARIANT Prompt, double* Angle);
    STDMETHOD(AngleFromXAxis)(VARIANT StartPoint, VARIANT EndPoint, double* Angle);
    STDMETHOD(GetCorner)(VARIANT Point, VARIANT Prompt, VARIANT* corner);
    STDMETHOD(GetDistance)(VARIANT Point, VARIANT Prompt, double* dist);
    STDMETHOD(GetOrientation)(VARIANT Point, VARIANT Prompt, double* angle);
    STDMETHOD(GetPoint)(VARIANT Point, VARIANT Prompt, VARIANT* inputPoint);
    STDMETHOD(PolarPoint)(VARIANT Point, double Angle, double Distance, VARIANT* inputPoint);
    STDMETHOD(CreateTypedArray)(VARIANT* varArr, int type, SAFEARRAY* inArgs);
    STDMETHOD(GetEntity)(IDispatch** Object, VARIANT* PickedPoint, VARIANT Prompt);
    STDMETHOD(Prompt)(BSTR Message);
    STDMETHOD(GetSubEntity)(IDispatch** Object, VARIANT* PickedPoint, VARIANT* TransMatrix,
        VARIANT* ContextData, VARIANT Prompt);
    STDMETHOD(IsURL)(BSTR URL, VARIANT_BOOL* IsValidURL);
    STDMETHOD(GetRemoteFile)(BSTR URL, BSTR* LocalFile, VARIANT_BOOL IgnoreCache);
    STDMETHOD(PutRemoteFile)(BSTR URL, BSTR LocalFile);
    STDMETHOD(IsRemoteFile)(BSTR LocalFile, BSTR* URL, VARIANT_BOOL* IsDownloadedFile);
    STDMETHOD(LaunchBrowserDialog)(BSTR* SelectedURL, BSTR DialogTitle, BSTR OpenButtonCaption,
        BSTR StartPageURL, BSTR RegistryRootKey, VARIANT_BOOL OpenButtonAlwaysEnabled, VARIANT_BOOL* Success);

    HRESULT initNew(IAsdkPolyApplication2*, IAcadUtility*);

private:
    IAcadUtility* m_pAcadUtil;
    IAsdkPolyApplication2* m_pAsdkPolyApp;
};

#endif //__ASDKPOLYUTIL_H_
