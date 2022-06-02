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
	TButton *Button4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button5;
	TButton *Button6;
	TLabel *Label8;
	TLabel *Label10;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label7;
	TLabel *Label9;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label30;
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
	class ReadThread* ReadThread;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
// NTFS
  #pragma pack(push,1)
  typedef struct{
	BYTE skip1[3];
	ULONGLONG OEM_Name;
	USHORT BytesPerSector;
	BYTE SectorsPerCluster;
	BYTE skip2[10];
	UINT16 SectorsPerTrack;
	UINT16 NumberOfHeads;
	BYTE skip3[12];
	ULONGLONG TotalSectors;
	ULONGLONG MFTClusterNumber;
	ULONGLONG CopyMFTClusterNumber;
	UINT MFTSize;
	UINT BufferSize;
	BYTE skip4[3];
	ULONGLONG VolumeSerialNumber;
    USHORT Checksum;
  } NTFS_BootRecord;
  #pragma pack(pop)


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
