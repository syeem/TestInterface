// dllmain.h : Declaration of module class.

class CTestInterfaceModule : public ATL::CAtlDllModuleT< CTestInterfaceModule >
{
public :
	DECLARE_LIBID(LIBID_TestInterfaceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TESTINTERFACE, "{A358C5AB-2C15-41A8-AF84-0947357FAA0E}")
};

extern class CTestInterfaceModule _AtlModule;
