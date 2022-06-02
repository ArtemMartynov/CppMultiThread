//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ProcessThread : public TThread
{
private:
    TEvent* Myevent;
protected:
	void __fastcall Execute();
public:
	__fastcall ProcessThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
