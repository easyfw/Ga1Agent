//---------------------------------------------------------------------------
#ifndef SvcControllerH
#define SvcControllerH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <SvcMgr.hpp>
#include <vcl.h>
//---------------------------------------------------------------------------
class TGa1Agent : public TService
{
__published:    // IDE-managed Components
private:        // User declarations
public:         // User declarations
	__fastcall TGa1Agent(TComponent* Owner);
	TServiceController __fastcall GetServiceController(void);

	friend void __stdcall ServiceController(unsigned CtrlCode);
};
//---------------------------------------------------------------------------
extern PACKAGE TGa1Agent *Ga1Agent;
//---------------------------------------------------------------------------
#endif
