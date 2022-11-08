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

// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__7E924F57_E07C_11D2_8677_080009A0C626__INCLUDED_)
#define AFX_STDAFX_H__7E924F57_E07C_11D2_8677_080009A0C626__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef WINVER
#define WINVER 0x601
#endif

// Check if the build is DEBUG version and it's intended
// to be used with Non-DEBUG AutoCAD.
// In this case, for MFC header files, we need to undefine
// _DEBUG symbol
#if defined(_DEBUG) && !defined(AC_FULL_DEBUG)
#define _DEBUG_WAS_DEFINED
#undef _DEBUG
#endif 

#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x601
#endif
#define _ATL_APARTMENT_THREADED

#ifdef _DEBUG
    #define _ATL_DEBUG_QI
    #define _ATL_DEBUG_REFCOUNT
#endif

#include <afxwin.h>
#include <afxdisp.h>

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>

#include "acadi.h"
#include "rxmfcapi.h"
#include "compoly_i.h"

#if defined(_DEBUG_WAS_DEFINED)
#undef _DEBUG_WAS_DEFINED
#define _DEBUG
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__7E924F57_E07C_11D2_8677_080009A0C626__INCLUDED)
