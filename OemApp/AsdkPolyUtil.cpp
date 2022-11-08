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

// AsdkPolyUtil.cpp : Implementation of CAsdkPolyUtil
#include "stdafx.h"
#include "Oempolyapp_i.h"
#include "AsdkPolyUtil.h"

/////////////////////////////////////////////////////////////////////////////
// CAsdkPolyUtil

STDMETHODIMP CAsdkPolyUtil::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAsdkPolyUtility2
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

void CAsdkPolyUtil::FinalRelease()
{
    if (m_pAcadUtil)
        m_pAcadUtil->Release();
    if (m_pAsdkPolyApp)
        m_pAsdkPolyApp->Release();
}

HRESULT CAsdkPolyUtil::initNew(IAsdkPolyApplication2* pApp, IAcadUtility* pAcadUtil)
{
    if (!pApp || !pAcadUtil) return E_UNEXPECTED;

    m_pAsdkPolyApp = pApp;
    m_pAsdkPolyApp->AddRef();
    m_pAcadUtil = pAcadUtil;
    m_pAcadUtil->AddRef();
    return S_OK;
}

STDMETHODIMP CAsdkPolyUtil::AngleToReal(BSTR Angle, AsdkAngleUnits Unit, double* Value)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->AngleToReal(Angle, (AcAngleUnits)Unit, Value);
}

STDMETHODIMP CAsdkPolyUtil::AngleToString(double Angle, AsdkAngleUnits Unit, int Precision, BSTR* bstrValue)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->AngleToString(Angle, (AcAngleUnits)Unit, Precision, bstrValue);
}

STDMETHODIMP CAsdkPolyUtil::DistanceToReal(BSTR Distance, AsdkUnits Unit, double* Value)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->DistanceToReal(Distance, (AcUnits)Unit, Value);
}

STDMETHODIMP CAsdkPolyUtil::RealToString(double Value, AsdkUnits Unit, int Precision, BSTR* bstrValue)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->RealToString(Value, (AcUnits)Unit, Precision, bstrValue);
}

STDMETHODIMP CAsdkPolyUtil::TranslateCoordinates(VARIANT Point, AsdkCoordinateSystem FromCoordSystem,
    AsdkCoordinateSystem ToCoordSystem, int Displacement, VARIANT OCSNormal, VARIANT* transPt)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->TranslateCoordinates(Point, (AcCoordinateSystem)FromCoordSystem,
        (AcCoordinateSystem)ToCoordSystem, Displacement, OCSNormal, transPt);
}

STDMETHODIMP CAsdkPolyUtil::InitializeUserInput(int Bits, VARIANT KeyWordList)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->InitializeUserInput(Bits, KeyWordList);
}

STDMETHODIMP CAsdkPolyUtil::GetInteger(VARIANT Prompt, int* Value)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetInteger(Prompt, Value);
}

STDMETHODIMP CAsdkPolyUtil::GetReal(VARIANT Prompt, double* Value)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetReal(Prompt, Value);
}

STDMETHODIMP CAsdkPolyUtil::GetInput(BSTR* Value)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetInput(Value);
}

STDMETHODIMP CAsdkPolyUtil::GetKeyword(VARIANT Prompt, BSTR* bstrKeyword)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetKeyword(Prompt, bstrKeyword);
}

STDMETHODIMP CAsdkPolyUtil::GetString(int HasSpaces, VARIANT Prompt, BSTR* bstrValue)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetString(HasSpaces, Prompt, bstrValue);
}

STDMETHODIMP CAsdkPolyUtil::GetAngle(VARIANT Point, VARIANT Prompt, double* Angle)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetAngle(Point, Prompt, Angle);
}

STDMETHODIMP CAsdkPolyUtil::AngleFromXAxis(VARIANT StartPoint, VARIANT EndPoint, double* Angle)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->AngleFromXAxis(StartPoint, EndPoint, Angle);
}

STDMETHODIMP CAsdkPolyUtil::GetCorner(VARIANT Point, VARIANT Prompt, VARIANT* corner)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetCorner(Point, Prompt, corner);
}

STDMETHODIMP CAsdkPolyUtil::GetDistance(VARIANT Point, VARIANT Prompt, double* dist)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetDistance(Point, Prompt, dist);
}

STDMETHODIMP CAsdkPolyUtil::GetOrientation(VARIANT Point, VARIANT Prompt, double* angle)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetOrientation(Point, Prompt, angle);
}

STDMETHODIMP CAsdkPolyUtil::GetPoint(VARIANT Point, VARIANT Prompt, VARIANT* inputPoint)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetPoint(Point, Prompt, inputPoint);
}

STDMETHODIMP CAsdkPolyUtil::PolarPoint(VARIANT Point, double Angle, double Distance, VARIANT* inputPoint)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->PolarPoint(Point, Angle, Distance, inputPoint);
}

STDMETHODIMP CAsdkPolyUtil::CreateTypedArray(VARIANT* varArr, int type, SAFEARRAY* inArgs)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->CreateTypedArray(varArr, type, inArgs);
}

STDMETHODIMP CAsdkPolyUtil::GetEntity(IDispatch** Object, VARIANT* PickedPoint, VARIANT Prompt)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetEntity(Object, PickedPoint, Prompt);
}

STDMETHODIMP CAsdkPolyUtil::Prompt(BSTR Message)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->Prompt(Message);
}

STDMETHODIMP CAsdkPolyUtil::GetSubEntity(IDispatch** Object, VARIANT* PickedPoint, VARIANT* TransMatrix,
    VARIANT* ContextData, VARIANT Prompt)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetSubEntity(Object, PickedPoint, TransMatrix,
        ContextData, Prompt);
}

STDMETHODIMP CAsdkPolyUtil::IsURL(BSTR URL, VARIANT_BOOL* IsValidURL)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->IsURL(URL, IsValidURL);
}

STDMETHODIMP CAsdkPolyUtil::GetRemoteFile(BSTR URL, BSTR* LocalFile, VARIANT_BOOL IgnoreCache)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->GetRemoteFile(URL, LocalFile, IgnoreCache);
}

STDMETHODIMP CAsdkPolyUtil::PutRemoteFile(BSTR URL, BSTR LocalFile)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->PutRemoteFile(URL, LocalFile);
}

STDMETHODIMP CAsdkPolyUtil::IsRemoteFile(BSTR LocalFile, BSTR* URL, VARIANT_BOOL* IsDownloadedFile)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->IsRemoteFile(LocalFile, URL, IsDownloadedFile);
}

STDMETHODIMP CAsdkPolyUtil::LaunchBrowserDialog(BSTR* SelectedURL, BSTR DialogTitle, BSTR OpenButtonCaption,
    BSTR StartPageURL, BSTR RegistryRootKey, VARIANT_BOOL OpenButtonAlwaysEnabled, VARIANT_BOOL* Success)
{
    return !m_pAcadUtil ? E_UNEXPECTED : m_pAcadUtil->LaunchBrowserDialog(SelectedURL, DialogTitle, OpenButtonCaption,
        StartPageURL, RegistryRootKey, OpenButtonAlwaysEnabled, Success);
}
