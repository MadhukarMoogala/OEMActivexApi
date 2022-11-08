

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Apr 20 18:39:26 2017
 */
/* Compiler settings for oempolyapp.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __oempolyapp_i_h__
#define __oempolyapp_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAsdkPolyDocuments2_FWD_DEFINED__
#define __IAsdkPolyDocuments2_FWD_DEFINED__
typedef interface IAsdkPolyDocuments2 IAsdkPolyDocuments2;

#endif 	/* __IAsdkPolyDocuments2_FWD_DEFINED__ */


#ifndef __IAsdkPolyDocument2_FWD_DEFINED__
#define __IAsdkPolyDocument2_FWD_DEFINED__
typedef interface IAsdkPolyDocument2 IAsdkPolyDocument2;

#endif 	/* __IAsdkPolyDocument2_FWD_DEFINED__ */


#ifndef __IAsdkPolyUtility2_FWD_DEFINED__
#define __IAsdkPolyUtility2_FWD_DEFINED__
typedef interface IAsdkPolyUtility2 IAsdkPolyUtility2;

#endif 	/* __IAsdkPolyUtility2_FWD_DEFINED__ */


#ifndef __IAsdkPolyState_FWD_DEFINED__
#define __IAsdkPolyState_FWD_DEFINED__
typedef interface IAsdkPolyState IAsdkPolyState;

#endif 	/* __IAsdkPolyState_FWD_DEFINED__ */


#ifndef __IAsdkPolyApplication2_FWD_DEFINED__
#define __IAsdkPolyApplication2_FWD_DEFINED__
typedef interface IAsdkPolyApplication2 IAsdkPolyApplication2;

#endif 	/* __IAsdkPolyApplication2_FWD_DEFINED__ */


#ifndef __AsdkPolyApplication_FWD_DEFINED__
#define __AsdkPolyApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class AsdkPolyApplication AsdkPolyApplication;
#else
typedef struct AsdkPolyApplication AsdkPolyApplication;
#endif /* __cplusplus */

#endif 	/* __AsdkPolyApplication_FWD_DEFINED__ */


#ifndef __AsdkPolyDocuments_FWD_DEFINED__
#define __AsdkPolyDocuments_FWD_DEFINED__

#ifdef __cplusplus
typedef class AsdkPolyDocuments AsdkPolyDocuments;
#else
typedef struct AsdkPolyDocuments AsdkPolyDocuments;
#endif /* __cplusplus */

#endif 	/* __AsdkPolyDocuments_FWD_DEFINED__ */


#ifndef __AsdkPolyDocument_FWD_DEFINED__
#define __AsdkPolyDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class AsdkPolyDocument AsdkPolyDocument;
#else
typedef struct AsdkPolyDocument AsdkPolyDocument;
#endif /* __cplusplus */

#endif 	/* __AsdkPolyDocument_FWD_DEFINED__ */


#ifndef __AsdkPolyUtility_FWD_DEFINED__
#define __AsdkPolyUtility_FWD_DEFINED__

#ifdef __cplusplus
typedef class AsdkPolyUtility AsdkPolyUtility;
#else
typedef struct AsdkPolyUtility AsdkPolyUtility;
#endif /* __cplusplus */

#endif 	/* __AsdkPolyUtility_FWD_DEFINED__ */


#ifndef __AsdkPolyState_FWD_DEFINED__
#define __AsdkPolyState_FWD_DEFINED__

#ifdef __cplusplus
typedef class AsdkPolyState AsdkPolyState;
#else
typedef struct AsdkPolyState AsdkPolyState;
#endif /* __cplusplus */

#endif 	/* __AsdkPolyState_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AsdkPoly2_LIBRARY_DEFINED__
#define __AsdkPoly2_LIBRARY_DEFINED__

/* library AsdkPoly2 */
/* [helpstring][version][uuid] */ 





typedef /* [v1_enum] */ 
enum AsdkWindowState
    {
        asdkNorm	= 1,
        asdkMin	= ( asdkNorm + 1 ) ,
        asdkMax	= ( asdkMin + 1 ) 
    } 	AsdkWindowState;

typedef /* [v1_enum] */ 
enum AsdkZoomScaleType
    {
        asdkZoomScaledAbsolute	= 0,
        asdkZoomScaledRelative	= 1,
        asdkZoomScaledRelativePSpace	= 2
    } 	AsdkZoomScaleType;

typedef /* [v1_enum] */ 
enum AsdkRegenType
    {
        asdkActiveViewport	= 0,
        asdkAllViewports	= 1
    } 	AsdkRegenType;

typedef /* [v1_enum] */ 
enum AsdkSelect
    {
        asdkSelectionSetWindow	= 0,
        asdkSelectionSetCrossing	= 1,
        asdkSelectionSetFence	= 2,
        asdkSelectionSetPrevious	= 3,
        asdkSelectionSetLast	= 4,
        asdkSelectionSetAll	= 5,
        asdkSelectionSetWindowPolygon	= 6,
        asdkSelectionSetCrossingPolygon	= 7
    } 	AsdkSelect;

typedef /* [v1_enum] */ 
enum AsdkPreviewMode
    {
        asdkPartialPreview	= 0,
        asdkFullPreview	= 1
    } 	AsdkPreviewMode;

typedef /* [v1_enum] */ 
enum AsdkAngleUnits
    {
        asdkDegrees	= 0,
        asdkDegreeMinuteSeconds	= 1,
        asdkGrads	= 2,
        asdkRadians	= 3
    } 	AsdkAngleUnits;

typedef /* [v1_enum] */ 
enum AsdkUnits
    {
        asdkDefaultUnits	= -1,
        asdkScientific	= 1,
        asdkDecimal	= 2,
        asdkEngineering	= 3,
        asdkArchitectural	= 4,
        asdkFractional	= 5
    } 	AsdkUnits;

typedef /* [v1_enum] */ 
enum AsdkCoordinateSystem
    {
        asdkWorld	= 0,
        asdkUCS	= 1,
        asdkDisplayDCS	= 2,
        asdkPaperSpaceDCS	= 3,
        asdkOCS	= 4
    } 	AsdkCoordinateSystem;

typedef /* [v1_enum] */ 
enum AsdkMenuGroupType
    {
        asdkBaseMenuGroup	= 0,
        asdkPartialMenuGroup	= 1
    } 	AsdkMenuGroupType;

typedef /* [v1_enum] */ 
enum AsdkMenuFileType
    {
        asdkMenuFileCompiled	= 0,
        asdkMenuFileSource	= 1
    } 	AsdkMenuFileType;

typedef /* [v1_enum] */ 
enum AsdkMenuItemType
    {
        asdkMenuItem	= 0,
        asdkMenuSeparator	= 1,
        asdkMenuSubMenu	= 2
    } 	AsdkMenuItemType;

typedef /* [v1_enum] */ 
enum AsdkToolbarDockStatus
    {
        asdkToolbarDockTop	= 0,
        asdkToolbarDockBottom	= 1,
        asdkToolbarDockLeft	= 2,
        asdkToolbarDockRight	= 3,
        asdkToolbarFloating	= 4
    } 	AsdkToolbarDockStatus;

typedef /* [v1_enum] */ 
enum AsdkToolbarItemType
    {
        asdkToolbarButton	= 0,
        asdkToolbarSeparator	= 1,
        asdkToolbarControl	= 2,
        asdkToolbarFlyout	= 3
    } 	AsdkToolbarItemType;

typedef /* [v1_enum] */ 
enum AsdkTextFontStyle
    {
        asdkFontRegular	= 0,
        asdkFontItalic	= 1,
        asdkFontBold	= 2,
        asdkFontBoldItalic	= 3
    } 	AsdkTextFontStyle;

typedef /* [v1_enum] */ 
enum AsdkColor
    {
        asdkByBlock	= 0,
        asdkRed	= 1,
        asdkYellow	= 2,
        asdkGreen	= 3,
        asdkCyan	= 4,
        asdkBlue	= 5,
        asdkMagenta	= 6,
        asdkWhite	= 7,
        asdkByLayer	= 256
    } 	AsdkColor;

typedef /* [v1_enum] */ 
enum AsdkAlignmentPointAcquisition
    {
        asdkAlignPntAcquisitionAutomatic	= 0,
        asdkAlignPntAcquisitionShiftToAcquire	= ( asdkAlignPntAcquisitionAutomatic + 1 ) 
    } 	AsdkAlignmentPointAcquisition;

typedef /* [v1_enum] */ 
enum AsdkXRefDemandLoad
    {
        asdkDemandLoadDisabled	= 0,
        asdkDemandLoadEnabled	= 1,
        asdkDemandLoadEnabledWithCopy	= 2
    } 	AsdkXRefDemandLoad;

typedef /* [v1_enum] */ 
enum AsdkARXDemandLoad
    {
        asdkDemanLoadDisable	= 0,
        asdkDemandLoadOnObjectDetect	= 1,
        asdkDemandLoadCmdInvoke	= 2
    } 	AsdkARXDemandLoad;

typedef /* [v1_enum] */ 
enum AsdkProxyImage
    {
        asdkProxyNotShow	= 0,
        asdkProxyShow	= 1,
        asdkProxyBoundingBox	= 2
    } 	AsdkProxyImage;

typedef /* [v1_enum] */ 
enum AsdkSaveAsType
    {
        asdkUnknown	= -1,
        asdkR12_dxf	= 1,
        asdkR13_dwg	= 4,
        asdkR13_dxf	= 5,
        asdkR14_dwg	= 8,
        asdkR14_dxf	= 9,
        asdkR15_dwg	= 12,
        asdkR15_dxf	= 13,
        asdkR15_Template	= 14,
        asdkR18_dwg	= 24,
        asdkR18_dxf	= 25,
        asdkR18_Template	= 26,
        asdkNative	= asdkR18_dwg
    } 	AsdkSaveAsType;

typedef /* [v1_enum] */ 
enum AsdkPrinterSpoolAlert
    {
        asdkPrinterAlwaysAlert	= 0,
        asdkPrinterAlertOnce	= ( asdkPrinterAlwaysAlert + 1 ) ,
        asdkPrinterNeverAlertLogOnce	= ( asdkPrinterAlertOnce + 1 ) ,
        asdkPrinterNeverAlert	= ( asdkPrinterNeverAlertLogOnce + 1 ) 
    } 	AsdkPrinterSpoolAlert;

typedef /* [v1_enum] */ 
enum AsdkOleQuality
    {
        asdkOQLineArt	= 0,
        asdkOQText	= ( asdkOQLineArt + 1 ) ,
        asdkOQGraphics	= ( asdkOQText + 1 ) ,
        asdkOQPhoto	= ( asdkOQGraphics + 1 ) ,
        asdkOQHighPhoto	= ( asdkOQPhoto + 1 ) 
    } 	AsdkOleQuality;

typedef /* [v1_enum] */ 
enum AsdkPlotPolicy
    {
        asdkPolicyNamed	= 0,
        asdkPolicyLegacy	= ( asdkPolicyNamed + 1 ) 
    } 	AsdkPlotPolicy;

typedef /* [v1_enum] */ 
enum AsdkKeyboardAccelerator
    {
        asdkPreferenceClassic	= 0,
        asdkPreferenceCustom	= 1
    } 	AsdkKeyboardAccelerator;

typedef /* [v1_enum] */ 
enum AsdkKeyboardPriority
    {
        asdkKeyboardRunningObjSnap	= 0,
        asdkKeyboardEntry	= 1,
        asdkKeyboardEntryExceptScripts	= 2
    } 	AsdkKeyboardPriority;

typedef /* [v1_enum] */ 
enum AsdkInsertUnits
    {
        asdkInsertUnitsUnitless	= 0,
        asdkInsertUnitsInches	= ( asdkInsertUnitsUnitless + 1 ) ,
        asdkInsertUnitsFeet	= ( asdkInsertUnitsInches + 1 ) ,
        asdkInsertUnitsMiles	= ( asdkInsertUnitsFeet + 1 ) ,
        asdkInsertUnitsMillimeters	= ( asdkInsertUnitsMiles + 1 ) ,
        asdkInsertUnitsCentimeters	= ( asdkInsertUnitsMillimeters + 1 ) ,
        asdkInsertUnitsMeters	= ( asdkInsertUnitsCentimeters + 1 ) ,
        asdkInsertUnitsKilometers	= ( asdkInsertUnitsMeters + 1 ) ,
        asdkInsertUnitsMicroinches	= ( asdkInsertUnitsKilometers + 1 ) ,
        asdkInsertUnitsMils	= ( asdkInsertUnitsMicroinches + 1 ) ,
        asdkInsertUnitsYards	= ( asdkInsertUnitsMils + 1 ) ,
        asdkInsertUnitsAngstroms	= ( asdkInsertUnitsYards + 1 ) ,
        asdkInsertUnitsNanometers	= ( asdkInsertUnitsAngstroms + 1 ) ,
        asdkInsertUnitsMicrons	= ( asdkInsertUnitsNanometers + 1 ) ,
        asdkInsertUnitsDecimeters	= ( asdkInsertUnitsMicrons + 1 ) ,
        asdkInsertUnitsDecameters	= ( asdkInsertUnitsDecimeters + 1 ) ,
        asdkInsertUnitsHectometers	= ( asdkInsertUnitsDecameters + 1 ) ,
        asdkInsertUnitsGigameters	= ( asdkInsertUnitsHectometers + 1 ) ,
        asdkInsertUnitsAstronomicalUnits	= ( asdkInsertUnitsGigameters + 1 ) ,
        asdkInsertUnitsLightYears	= ( asdkInsertUnitsAstronomicalUnits + 1 ) ,
        asdkInsertUnitsParsecs	= ( asdkInsertUnitsLightYears + 1 ) 
    } 	AsdkInsertUnits;

typedef /* [v1_enum] */ 
enum AsdkDrawingAreaSCMDefault
    {
        asdkRepeatLastCommand	= 0,
        asdkSCM	= ( asdkRepeatLastCommand + 1 ) 
    } 	AsdkDrawingAreaSCMDefault;

typedef /* [v1_enum] */ 
enum AsdkDrawingAreaSCMEdit
    {
        asdkEdRepeatLastCommand	= 0,
        asdkEdSCM	= ( asdkEdRepeatLastCommand + 1 ) 
    } 	AsdkDrawingAreaSCMEdit;

typedef /* [v1_enum] */ 
enum AsdkDrawingAreaSCMCommand
    {
        asdkEnter	= 0,
        asdkEnableSCMOptions	= ( asdkEnter + 1 ) ,
        asdkEnableSCM	= ( asdkEnableSCMOptions + 1 ) 
    } 	AsdkDrawingAreaSCMCommand;


EXTERN_C const IID LIBID_AsdkPoly2;

#ifndef __IAsdkPolyDocuments2_INTERFACE_DEFINED__
#define __IAsdkPolyDocuments2_INTERFACE_DEFINED__

/* interface IAsdkPolyDocuments2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAsdkPolyDocuments2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E924F66-E07C-11D2-8677-080009A0C626")
    IAsdkPolyDocuments2 : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ IAsdkPolyDocument2 **pDoc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsdkPolyDocuments2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsdkPolyDocuments2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsdkPolyDocuments2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsdkPolyDocuments2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAsdkPolyDocuments2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAsdkPolyDocuments2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAsdkPolyDocuments2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAsdkPolyDocuments2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IAsdkPolyDocuments2 * This,
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ IAsdkPolyDocument2 **pDoc);
        
        END_INTERFACE
    } IAsdkPolyDocuments2Vtbl;

    interface IAsdkPolyDocuments2
    {
        CONST_VTBL struct IAsdkPolyDocuments2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsdkPolyDocuments2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsdkPolyDocuments2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsdkPolyDocuments2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsdkPolyDocuments2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAsdkPolyDocuments2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAsdkPolyDocuments2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAsdkPolyDocuments2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAsdkPolyDocuments2_Open(This,Name,ReadOnly,Password,pDoc)	\
    ( (This)->lpVtbl -> Open(This,Name,ReadOnly,Password,pDoc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsdkPolyDocuments2_INTERFACE_DEFINED__ */


#ifndef __IAsdkPolyDocument2_INTERFACE_DEFINED__
#define __IAsdkPolyDocument2_INTERFACE_DEFINED__

/* interface IAsdkPolyDocument2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAsdkPolyDocument2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E924F68-E07C-11D2-8677-080009A0C626")
    IAsdkPolyDocument2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR FullName,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ IAsdkPolyDocument2 **pDocObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsdkPolyDocument2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsdkPolyDocument2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsdkPolyDocument2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsdkPolyDocument2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAsdkPolyDocument2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAsdkPolyDocument2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAsdkPolyDocument2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAsdkPolyDocument2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IAsdkPolyDocument2 * This,
            /* [in] */ BSTR FullName,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ IAsdkPolyDocument2 **pDocObj);
        
        END_INTERFACE
    } IAsdkPolyDocument2Vtbl;

    interface IAsdkPolyDocument2
    {
        CONST_VTBL struct IAsdkPolyDocument2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsdkPolyDocument2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsdkPolyDocument2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsdkPolyDocument2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsdkPolyDocument2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAsdkPolyDocument2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAsdkPolyDocument2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAsdkPolyDocument2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAsdkPolyDocument2_Open(This,FullName,Password,pDocObj)	\
    ( (This)->lpVtbl -> Open(This,FullName,Password,pDocObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsdkPolyDocument2_INTERFACE_DEFINED__ */


#ifndef __IAsdkPolyUtility2_INTERFACE_DEFINED__
#define __IAsdkPolyUtility2_INTERFACE_DEFINED__

/* interface IAsdkPolyUtility2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAsdkPolyUtility2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E924F74-E07C-11D2-8677-080009A0C626")
    IAsdkPolyUtility2 : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AngleToReal( 
            /* [in] */ BSTR Angle,
            /* [in] */ AsdkAngleUnits Unit,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AngleToString( 
            /* [in] */ double Angle,
            /* [in] */ AsdkAngleUnits Unit,
            /* [in] */ int Precision,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DistanceToReal( 
            /* [in] */ BSTR Distance,
            /* [in] */ AsdkUnits Unit,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RealToString( 
            /* [in] */ double Value,
            /* [in] */ AsdkUnits Unit,
            /* [in] */ int Precision,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TranslateCoordinates( 
            /* [in] */ VARIANT Point,
            /* [in] */ AsdkCoordinateSystem FromCoordSystem,
            /* [in] */ AsdkCoordinateSystem ToCoordSystem,
            /* [in] */ int Displacement,
            /* [optional][in] */ VARIANT OCSNormal,
            /* [retval][out] */ VARIANT *transPt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitializeUserInput( 
            /* [in] */ int Bits,
            /* [optional][in] */ VARIANT KeyWordList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInteger( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ int *Value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetReal( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInput( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetKeyword( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrKeyword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ int HasSpaces,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAngle( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AngleFromXAxis( 
            /* [in] */ VARIANT StartPoint,
            /* [in] */ VARIANT EndPoint,
            /* [retval][out] */ double *angle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCorner( 
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *corner) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDistance( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *dist) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOrientation( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *angle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPoint( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *inputPoint) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PolarPoint( 
            /* [in] */ VARIANT Point,
            /* [in] */ double Angle,
            /* [in] */ double Distance,
            /* [retval][out] */ VARIANT *inputPoint) = 0;
        
        virtual /* [helpstring][vararg] */ HRESULT STDMETHODCALLTYPE CreateTypedArray( 
            /* [out] */ VARIANT *varArr,
            /* [in] */ int type,
            /* [in] */ SAFEARRAY * inArgs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEntity( 
            /* [out] */ IDispatch **Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [optional][in] */ VARIANT Prompt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Prompt( 
            /* [in] */ BSTR Message) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubEntity( 
            /* [out] */ IDispatch **Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [out] */ VARIANT *TransMatrix,
            /* [out] */ VARIANT *ContextData,
            /* [optional][in] */ VARIANT Prompt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsURL( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL *IsValidURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRemoteFile( 
            /* [in] */ BSTR URL,
            /* [out] */ BSTR *LocalFile,
            /* [in] */ VARIANT_BOOL IgnoreCache) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutRemoteFile( 
            /* [in] */ BSTR URL,
            /* [in] */ BSTR LocalFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsRemoteFile( 
            /* [in] */ BSTR LocalFile,
            /* [out] */ BSTR *URL,
            /* [retval][out] */ VARIANT_BOOL *IsDownloadedFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LaunchBrowserDialog( 
            /* [out] */ BSTR *SelectedURL,
            /* [in] */ BSTR DialogTitle,
            /* [in] */ BSTR OpenButtonCaption,
            /* [in] */ BSTR StartPageURL,
            /* [in] */ BSTR RegistryRootKey,
            /* [in] */ VARIANT_BOOL OpenButtonAlwaysEnabled,
            /* [retval][out] */ VARIANT_BOOL *Success) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsdkPolyUtility2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsdkPolyUtility2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsdkPolyUtility2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAsdkPolyUtility2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAsdkPolyUtility2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AngleToReal )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR Angle,
            /* [in] */ AsdkAngleUnits Unit,
            /* [retval][out] */ double *Value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AngleToString )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ double Angle,
            /* [in] */ AsdkAngleUnits Unit,
            /* [in] */ int Precision,
            /* [retval][out] */ BSTR *bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DistanceToReal )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR Distance,
            /* [in] */ AsdkUnits Unit,
            /* [retval][out] */ double *Value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RealToString )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ double Value,
            /* [in] */ AsdkUnits Unit,
            /* [in] */ int Precision,
            /* [retval][out] */ BSTR *bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TranslateCoordinates )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ VARIANT Point,
            /* [in] */ AsdkCoordinateSystem FromCoordSystem,
            /* [in] */ AsdkCoordinateSystem ToCoordSystem,
            /* [in] */ int Displacement,
            /* [optional][in] */ VARIANT OCSNormal,
            /* [retval][out] */ VARIANT *transPt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitializeUserInput )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ int Bits,
            /* [optional][in] */ VARIANT KeyWordList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInteger )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ int *Value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReal )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInput )( 
            IAsdkPolyUtility2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetKeyword )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrKeyword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ int HasSpaces,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAngle )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AngleFromXAxis )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ VARIANT StartPoint,
            /* [in] */ VARIANT EndPoint,
            /* [retval][out] */ double *angle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCorner )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *corner);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDistance )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *dist);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOrientation )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *angle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPoint )( 
            IAsdkPolyUtility2 * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *inputPoint);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PolarPoint )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ VARIANT Point,
            /* [in] */ double Angle,
            /* [in] */ double Distance,
            /* [retval][out] */ VARIANT *inputPoint);
        
        /* [helpstring][vararg] */ HRESULT ( STDMETHODCALLTYPE *CreateTypedArray )( 
            IAsdkPolyUtility2 * This,
            /* [out] */ VARIANT *varArr,
            /* [in] */ int type,
            /* [in] */ SAFEARRAY * inArgs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEntity )( 
            IAsdkPolyUtility2 * This,
            /* [out] */ IDispatch **Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [optional][in] */ VARIANT Prompt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Prompt )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR Message);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubEntity )( 
            IAsdkPolyUtility2 * This,
            /* [out] */ IDispatch **Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [out] */ VARIANT *TransMatrix,
            /* [out] */ VARIANT *ContextData,
            /* [optional][in] */ VARIANT Prompt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsURL )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL *IsValidURL);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRemoteFile )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR URL,
            /* [out] */ BSTR *LocalFile,
            /* [in] */ VARIANT_BOOL IgnoreCache);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutRemoteFile )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR LocalFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsRemoteFile )( 
            IAsdkPolyUtility2 * This,
            /* [in] */ BSTR LocalFile,
            /* [out] */ BSTR *URL,
            /* [retval][out] */ VARIANT_BOOL *IsDownloadedFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LaunchBrowserDialog )( 
            IAsdkPolyUtility2 * This,
            /* [out] */ BSTR *SelectedURL,
            /* [in] */ BSTR DialogTitle,
            /* [in] */ BSTR OpenButtonCaption,
            /* [in] */ BSTR StartPageURL,
            /* [in] */ BSTR RegistryRootKey,
            /* [in] */ VARIANT_BOOL OpenButtonAlwaysEnabled,
            /* [retval][out] */ VARIANT_BOOL *Success);
        
        END_INTERFACE
    } IAsdkPolyUtility2Vtbl;

    interface IAsdkPolyUtility2
    {
        CONST_VTBL struct IAsdkPolyUtility2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsdkPolyUtility2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsdkPolyUtility2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsdkPolyUtility2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsdkPolyUtility2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAsdkPolyUtility2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAsdkPolyUtility2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAsdkPolyUtility2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAsdkPolyUtility2_AngleToReal(This,Angle,Unit,Value)	\
    ( (This)->lpVtbl -> AngleToReal(This,Angle,Unit,Value) ) 

#define IAsdkPolyUtility2_AngleToString(This,Angle,Unit,Precision,bstrValue)	\
    ( (This)->lpVtbl -> AngleToString(This,Angle,Unit,Precision,bstrValue) ) 

#define IAsdkPolyUtility2_DistanceToReal(This,Distance,Unit,Value)	\
    ( (This)->lpVtbl -> DistanceToReal(This,Distance,Unit,Value) ) 

#define IAsdkPolyUtility2_RealToString(This,Value,Unit,Precision,bstrValue)	\
    ( (This)->lpVtbl -> RealToString(This,Value,Unit,Precision,bstrValue) ) 

#define IAsdkPolyUtility2_TranslateCoordinates(This,Point,FromCoordSystem,ToCoordSystem,Displacement,OCSNormal,transPt)	\
    ( (This)->lpVtbl -> TranslateCoordinates(This,Point,FromCoordSystem,ToCoordSystem,Displacement,OCSNormal,transPt) ) 

#define IAsdkPolyUtility2_InitializeUserInput(This,Bits,KeyWordList)	\
    ( (This)->lpVtbl -> InitializeUserInput(This,Bits,KeyWordList) ) 

#define IAsdkPolyUtility2_GetInteger(This,Prompt,Value)	\
    ( (This)->lpVtbl -> GetInteger(This,Prompt,Value) ) 

#define IAsdkPolyUtility2_GetReal(This,Prompt,Value)	\
    ( (This)->lpVtbl -> GetReal(This,Prompt,Value) ) 

#define IAsdkPolyUtility2_GetInput(This,Value)	\
    ( (This)->lpVtbl -> GetInput(This,Value) ) 

#define IAsdkPolyUtility2_GetKeyword(This,Prompt,bstrKeyword)	\
    ( (This)->lpVtbl -> GetKeyword(This,Prompt,bstrKeyword) ) 

#define IAsdkPolyUtility2_GetString(This,HasSpaces,Prompt,bstrValue)	\
    ( (This)->lpVtbl -> GetString(This,HasSpaces,Prompt,bstrValue) ) 

#define IAsdkPolyUtility2_GetAngle(This,Point,Prompt,Angle)	\
    ( (This)->lpVtbl -> GetAngle(This,Point,Prompt,Angle) ) 

#define IAsdkPolyUtility2_AngleFromXAxis(This,StartPoint,EndPoint,angle)	\
    ( (This)->lpVtbl -> AngleFromXAxis(This,StartPoint,EndPoint,angle) ) 

#define IAsdkPolyUtility2_GetCorner(This,Point,Prompt,corner)	\
    ( (This)->lpVtbl -> GetCorner(This,Point,Prompt,corner) ) 

#define IAsdkPolyUtility2_GetDistance(This,Point,Prompt,dist)	\
    ( (This)->lpVtbl -> GetDistance(This,Point,Prompt,dist) ) 

#define IAsdkPolyUtility2_GetOrientation(This,Point,Prompt,angle)	\
    ( (This)->lpVtbl -> GetOrientation(This,Point,Prompt,angle) ) 

#define IAsdkPolyUtility2_GetPoint(This,Point,Prompt,inputPoint)	\
    ( (This)->lpVtbl -> GetPoint(This,Point,Prompt,inputPoint) ) 

#define IAsdkPolyUtility2_PolarPoint(This,Point,Angle,Distance,inputPoint)	\
    ( (This)->lpVtbl -> PolarPoint(This,Point,Angle,Distance,inputPoint) ) 

#define IAsdkPolyUtility2_CreateTypedArray(This,varArr,type,inArgs)	\
    ( (This)->lpVtbl -> CreateTypedArray(This,varArr,type,inArgs) ) 

#define IAsdkPolyUtility2_GetEntity(This,Object,PickedPoint,Prompt)	\
    ( (This)->lpVtbl -> GetEntity(This,Object,PickedPoint,Prompt) ) 

#define IAsdkPolyUtility2_Prompt(This,Message)	\
    ( (This)->lpVtbl -> Prompt(This,Message) ) 

#define IAsdkPolyUtility2_GetSubEntity(This,Object,PickedPoint,TransMatrix,ContextData,Prompt)	\
    ( (This)->lpVtbl -> GetSubEntity(This,Object,PickedPoint,TransMatrix,ContextData,Prompt) ) 

#define IAsdkPolyUtility2_IsURL(This,URL,IsValidURL)	\
    ( (This)->lpVtbl -> IsURL(This,URL,IsValidURL) ) 

#define IAsdkPolyUtility2_GetRemoteFile(This,URL,LocalFile,IgnoreCache)	\
    ( (This)->lpVtbl -> GetRemoteFile(This,URL,LocalFile,IgnoreCache) ) 

#define IAsdkPolyUtility2_PutRemoteFile(This,URL,LocalFile)	\
    ( (This)->lpVtbl -> PutRemoteFile(This,URL,LocalFile) ) 

#define IAsdkPolyUtility2_IsRemoteFile(This,LocalFile,URL,IsDownloadedFile)	\
    ( (This)->lpVtbl -> IsRemoteFile(This,LocalFile,URL,IsDownloadedFile) ) 

#define IAsdkPolyUtility2_LaunchBrowserDialog(This,SelectedURL,DialogTitle,OpenButtonCaption,StartPageURL,RegistryRootKey,OpenButtonAlwaysEnabled,Success)	\
    ( (This)->lpVtbl -> LaunchBrowserDialog(This,SelectedURL,DialogTitle,OpenButtonCaption,StartPageURL,RegistryRootKey,OpenButtonAlwaysEnabled,Success) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsdkPolyUtility2_INTERFACE_DEFINED__ */


#ifndef __IAsdkPolyState_INTERFACE_DEFINED__
#define __IAsdkPolyState_INTERFACE_DEFINED__

/* interface IAsdkPolyState */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAsdkPolyState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E924F98-E07C-11D2-8677-080009A0C626")
    IAsdkPolyState : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IAsdkPolyApplication2 **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsQuiescent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsdkPolyStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsdkPolyState * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsdkPolyState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsdkPolyState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAsdkPolyState * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAsdkPolyState * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAsdkPolyState * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAsdkPolyState * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAsdkPolyState * This,
            /* [retval][out] */ IAsdkPolyApplication2 **pAppObj);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsQuiescent )( 
            IAsdkPolyState * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IAsdkPolyStateVtbl;

    interface IAsdkPolyState
    {
        CONST_VTBL struct IAsdkPolyStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsdkPolyState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsdkPolyState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsdkPolyState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsdkPolyState_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAsdkPolyState_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAsdkPolyState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAsdkPolyState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAsdkPolyState_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define IAsdkPolyState_get_IsQuiescent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsQuiescent(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsdkPolyState_INTERFACE_DEFINED__ */


#ifndef __IAsdkPolyApplication2_INTERFACE_DEFINED__
#define __IAsdkPolyApplication2_INTERFACE_DEFINED__

/* interface IAsdkPolyApplication2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAsdkPolyApplication2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E924F63-E07C-11D2-8677-080009A0C626")
    IAsdkPolyApplication2 : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pAppName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IAsdkPolyApplication2 **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveDocument( 
            /* [retval][out] */ IAsdkPolyDocument2 **pActiveDoc) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveDocument( 
            /* [in] */ IAsdkPolyDocument2 *pActiveDoc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInterfaceObject( 
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ IDispatch **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Documents( 
            /* [retval][out] */ IAsdkPolyDocuments2 **pDocuments) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAcadState( 
            /* [retval][out] */ IAsdkPolyState **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [out][retval] */ LONG_PTR *hWnd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsdkPolyApplication2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsdkPolyApplication2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsdkPolyApplication2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsdkPolyApplication2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAsdkPolyApplication2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAsdkPolyApplication2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAsdkPolyApplication2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAsdkPolyApplication2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAsdkPolyApplication2 * This,
            /* [retval][out] */ BSTR *pAppName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAsdkPolyApplication2 * This,
            /* [retval][out] */ IAsdkPolyApplication2 **pAppObj);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDocument )( 
            IAsdkPolyApplication2 * This,
            /* [retval][out] */ IAsdkPolyDocument2 **pActiveDoc);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveDocument )( 
            IAsdkPolyApplication2 * This,
            /* [in] */ IAsdkPolyDocument2 *pActiveDoc);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInterfaceObject )( 
            IAsdkPolyApplication2 * This,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ IDispatch **pObj);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Documents )( 
            IAsdkPolyApplication2 * This,
            /* [retval][out] */ IAsdkPolyDocuments2 **pDocuments);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomAll )( 
            IAsdkPolyApplication2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcadState )( 
            IAsdkPolyApplication2 * This,
            /* [retval][out] */ IAsdkPolyState **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IAsdkPolyApplication2 * This,
            /* [out][retval] */ LONG_PTR *hWnd);
        
        END_INTERFACE
    } IAsdkPolyApplication2Vtbl;

    interface IAsdkPolyApplication2
    {
        CONST_VTBL struct IAsdkPolyApplication2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsdkPolyApplication2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsdkPolyApplication2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsdkPolyApplication2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsdkPolyApplication2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAsdkPolyApplication2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAsdkPolyApplication2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAsdkPolyApplication2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAsdkPolyApplication2_get_Name(This,pAppName)	\
    ( (This)->lpVtbl -> get_Name(This,pAppName) ) 

#define IAsdkPolyApplication2_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define IAsdkPolyApplication2_get_ActiveDocument(This,pActiveDoc)	\
    ( (This)->lpVtbl -> get_ActiveDocument(This,pActiveDoc) ) 

#define IAsdkPolyApplication2_put_ActiveDocument(This,pActiveDoc)	\
    ( (This)->lpVtbl -> put_ActiveDocument(This,pActiveDoc) ) 

#define IAsdkPolyApplication2_GetInterfaceObject(This,ProgID,pObj)	\
    ( (This)->lpVtbl -> GetInterfaceObject(This,ProgID,pObj) ) 

#define IAsdkPolyApplication2_get_Documents(This,pDocuments)	\
    ( (This)->lpVtbl -> get_Documents(This,pDocuments) ) 

#define IAsdkPolyApplication2_ZoomAll(This)	\
    ( (This)->lpVtbl -> ZoomAll(This) ) 

#define IAsdkPolyApplication2_GetAcadState(This,pVal)	\
    ( (This)->lpVtbl -> GetAcadState(This,pVal) ) 

#define IAsdkPolyApplication2_get_HWND(This,hWnd)	\
    ( (This)->lpVtbl -> get_HWND(This,hWnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsdkPolyApplication2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AsdkPolyApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("7E924F64-E07C-11D2-8677-080009A0C626")
AsdkPolyApplication;
#endif

EXTERN_C const CLSID CLSID_AsdkPolyDocuments;

#ifdef __cplusplus

class DECLSPEC_UUID("7E924F67-E07C-11D2-8677-080009A0C626")
AsdkPolyDocuments;
#endif

EXTERN_C const CLSID CLSID_AsdkPolyDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("7E924F69-E07C-11D2-8677-080009A0C626")
AsdkPolyDocument;
#endif

EXTERN_C const CLSID CLSID_AsdkPolyUtility;

#ifdef __cplusplus

class DECLSPEC_UUID("7E924F75-E07C-11D2-8677-080009A0C626")
AsdkPolyUtility;
#endif

EXTERN_C const CLSID CLSID_AsdkPolyState;

#ifdef __cplusplus

class DECLSPEC_UUID("7E924F99-E07C-11D2-8677-080009A0C626")
AsdkPolyState;
#endif
#endif /* __AsdkPoly2_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


