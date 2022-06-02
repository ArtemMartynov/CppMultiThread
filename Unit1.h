//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label3;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label2;
	TButton *Button3;
	TButton *Button4;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button5;
	TButton *Button6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
	class ReadThread* ReadThread;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
/*
  // ExFAT remove later
  #pragma pack(push,1)
  typedef struct{
	BYTE Padding1[3];
	BYTE OEM_Name[8];
	BYTE Padding2[0x3D];
	ULONGLONG SectorsCount;
	DWORD FAT_Sector;
  } ExFAT_BootRecord;
  #pragma pack(pop)
*/

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
