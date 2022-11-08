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

#include "stdafx.h"

#include "dbapserv.h"
#ifdef _DEBUG
#include "acutads.h"
#endif
#include "oempolyapp_i.h"


static DWORD dwAppCF = 0;
static DWORD dwAppObj = 0;

STDAPI initAutomation(void)
{
    HRESULT hr = OleInitialize(NULL);
    if (FAILED(hr)) return hr;

    CComPtr<IClassFactory> pCF;
    hr = DllGetClassObject(CLSID_AsdkPolyApplication, IID_IClassFactory, (LPVOID*)&pCF);
    if (FAILED(hr)) return hr;

    CComPtr<IUnknown> pObj;
    hr = pCF->CreateInstance(NULL, IID_IUnknown, (LPVOID*)&pObj);
    if (FAILED(hr)) return hr;

    hr = CoRegisterClassObject(CLSID_AsdkPolyApplication, pCF, CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE, &dwAppCF);
    if (FAILED(hr)) return hr;

    return RegisterActiveObject(pObj, CLSID_AsdkPolyApplication, NULL, &dwAppObj);
}

STDAPI exitAutomation(void)
{
    if (dwAppObj)
        RevokeActiveObject(dwAppObj, NULL);

    if (dwAppCF)
        CoRevokeClassObject(dwAppCF);

    OleUninitialize();
    return S_OK;
}



extern "C" AcRx::AppRetCode
acrxEntryPoint(AcRx::AppMsgCode msg, void* pkt) 
{
	HRESULT hr = NOERROR;

    switch (msg) {
    case AcRx::kInitAppMsg:
        acrxDynamicLinker->unlockApplication(pkt); 
        acrxDynamicLinker->registerAppMDIAware(pkt);
        hr = initAutomation();
#ifdef _DEBUG
        if (FAILED(hr)) acutPrintf(_T("Warning: OLE Automation Init failed, hr = 0x%X.\n"), hr);
#endif
        break;
    case AcRx::kUnloadAppMsg:
        exitAutomation();
        break;
    }
    return AcRx::kRetOK;
}
