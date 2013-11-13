

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Nov 07 20:21:27 2013
 */
/* Compiler settings for TestInterface.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TestInterface_i_h__
#define __TestInterface_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INewInterface_FWD_DEFINED__
#define __INewInterface_FWD_DEFINED__
typedef interface INewInterface INewInterface;

#endif 	/* __INewInterface_FWD_DEFINED__ */


#ifndef __NewInterface_FWD_DEFINED__
#define __NewInterface_FWD_DEFINED__

#ifdef __cplusplus
typedef class NewInterface NewInterface;
#else
typedef struct NewInterface NewInterface;
#endif /* __cplusplus */

#endif 	/* __NewInterface_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __INewInterface_INTERFACE_DEFINED__
#define __INewInterface_INTERFACE_DEFINED__

/* interface INewInterface */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INewInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75456A5D-D7EE-4183-BF60-9279DBB90F5D")
    INewInterface : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InputPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_InputPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OutputPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Erode( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sharpen( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Brighten( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INewInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INewInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INewInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INewInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INewInterface * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INewInterface * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INewInterface * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INewInterface * This,
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
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputPath )( 
            INewInterface * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputPath )( 
            INewInterface * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputPath )( 
            INewInterface * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputPath )( 
            INewInterface * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Erode )( 
            INewInterface * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sharpen )( 
            INewInterface * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Brighten )( 
            INewInterface * This);
        
        END_INTERFACE
    } INewInterfaceVtbl;

    interface INewInterface
    {
        CONST_VTBL struct INewInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INewInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INewInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INewInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INewInterface_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INewInterface_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INewInterface_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INewInterface_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INewInterface_get_InputPath(This,pVal)	\
    ( (This)->lpVtbl -> get_InputPath(This,pVal) ) 

#define INewInterface_put_InputPath(This,newVal)	\
    ( (This)->lpVtbl -> put_InputPath(This,newVal) ) 

#define INewInterface_get_OutputPath(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputPath(This,pVal) ) 

#define INewInterface_put_OutputPath(This,newVal)	\
    ( (This)->lpVtbl -> put_OutputPath(This,newVal) ) 

#define INewInterface_Erode(This)	\
    ( (This)->lpVtbl -> Erode(This) ) 

#define INewInterface_Sharpen(This)	\
    ( (This)->lpVtbl -> Sharpen(This) ) 

#define INewInterface_Brighten(This)	\
    ( (This)->lpVtbl -> Brighten(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INewInterface_INTERFACE_DEFINED__ */



#ifndef __TestInterfaceLib_LIBRARY_DEFINED__
#define __TestInterfaceLib_LIBRARY_DEFINED__

/* library TestInterfaceLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TestInterfaceLib;

EXTERN_C const CLSID CLSID_NewInterface;

#ifdef __cplusplus

class DECLSPEC_UUID("2BF71C4A-E348-464C-90A4-3A47FFF0C382")
NewInterface;
#endif
#endif /* __TestInterfaceLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


