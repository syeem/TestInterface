// NewInterface.h : Declaration of the CNewInterface

#pragma once
#include "resource.h"       // main symbols



#include "TestInterface_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNewInterface

class ATL_NO_VTABLE CNewInterface :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNewInterface, &CLSID_NewInterface>,
	public IDispatchImpl<INewInterface, &IID_INewInterface, &LIBID_TestInterfaceLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNewInterface()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_NEWINTERFACE)


BEGIN_COM_MAP(CNewInterface)
	COM_INTERFACE_ENTRY(INewInterface)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

private: 
	CComBSTR inputDirectory;
	CComBSTR outputDirectory;
public:
	STDMETHOD(get_InputPath)(BSTR* pVal);
	STDMETHOD(put_InputPath)(BSTR newVal);
	STDMETHOD(get_OutputPath)(BSTR* pVal);
	STDMETHOD(put_OutputPath)(BSTR newVal);
	STDMETHOD(Erode)(void);
	STDMETHOD(Sharpen)(void);
	STDMETHOD(Brighten)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(NewInterface), CNewInterface)
