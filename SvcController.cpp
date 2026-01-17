//---------------------------------------------------------------------------
#include "SvcController.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TGa1Agent *Ga1Agent;
//---------------------------------------------------------------------------
__fastcall TGa1Agent::TGa1Agent(TComponent* Owner)
	: TService(Owner)
{
}

TServiceController __fastcall TGa1Agent::GetServiceController(void)
{
	return (TServiceController) ServiceController;
}

void __stdcall ServiceController(unsigned CtrlCode)
{
	Ga1Agent->Controller(CtrlCode);
}
//---------------------------------------------------------------------------
