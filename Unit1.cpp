//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <string.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int bl = 4;
const WCHAR *name = L"\\\\.\\E:";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Form1 -> Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	Edit1 -> Text = UnicodeString(bl);
	Edit2 -> Text = UnicodeString(name);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	DWORD bytesRead;
	DWORD bytes = 512;
	BYTE Block[512];
	name = (Edit2 -> Text).c_str();
	NTFS_BootRecord *ptrNTFS_BootRecord = (NTFS_BootRecord*)Block;

	/* // Physical Drive
	WCHAR *name = L"\\\\.\\PhysicalDrive0";*/

	//Application->MessageBox(name,L"Message", MB_OK);
	HANDLE fileHandle = CreateFileW(name, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0,NULL);
	if (fileHandle == INVALID_HANDLE_VALUE) {
	   Application->MessageBox(L"Can't open disk! Please, enter disk name, like \"\\\\.\\C:\"",L"Message", MB_OK);
	   return;
	}

	LARGE_INTEGER offset;
	offset.QuadPart = 0;

	unsigned long position = SetFilePointer(fileHandle, offset.LowPart, &offset.HighPart, FILE_BEGIN);
	if (position != offset.LowPart) {
	   Application->MessageBox(L"Error while trying set position in file!",L"Message", MB_OK);
	   return;
	}
	bool readblock = ReadFile(fileHandle, Block, bytes, &bytesRead, NULL);
	if (readblock == false || bytesRead != bytes){
		Application -> MessageBox(L"Error while trying to read block!", L"Message",MB_OK);
		return;
	}

	char *OEM_Name = ptrNTFS_BootRecord -> OEM_Name;
	USHORT BytesPerSector = ptrNTFS_BootRecord -> BytesPerSector;
	BYTE SectorsPerCluster = ptrNTFS_BootRecord -> SectorsPerCluster;
	UINT16 SectorsPerTrack = ptrNTFS_BootRecord -> SectorsPerTrack;
	UINT16 NumberOfHeads = ptrNTFS_BootRecord -> NumberOfHeads;
	ULONGLONG TotalSectors = ptrNTFS_BootRecord -> TotalSectors;
	ULONGLONG MFTClusterNumber = ptrNTFS_BootRecord -> MFTClusterNumber;
	ULONGLONG CopyMFTClusterNumber = ptrNTFS_BootRecord -> CopyMFTClusterNumber;
	UINT MFTSize = ptrNTFS_BootRecord -> MFTSize;
	UINT BufferSize = ptrNTFS_BootRecord -> BufferSize;
	ULONGLONG VolumeSerialNumber = ptrNTFS_BootRecord -> VolumeSerialNumber;
	USHORT Checksum = ptrNTFS_BootRecord -> Checksum;

	Label2 -> Caption = UnicodeString(OEM_Name);
	Label4 -> Caption = UnicodeString(BytesPerSector);
	Label7 -> Caption = UnicodeString(SectorsPerCluster);
	Label9 -> Caption = UnicodeString(SectorsPerTrack);
	Label11 -> Caption = UnicodeString(NumberOfHeads);
	Label12 -> Caption = UnicodeString(TotalSectors);
	Label13 -> Caption = UnicodeString(MFTClusterNumber);
	Label14 -> Caption = UnicodeString(CopyMFTClusterNumber);
	Label15 -> Caption = UnicodeString(MFTSize);
	Label16 -> Caption = UnicodeString(BufferSize);
	Label17 -> Caption = UnicodeString(VolumeSerialNumber);
	Label18 -> Caption = UnicodeString(Checksum);

	CloseHandle(fileHandle);

}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Button1 -> Enabled = false;
	Button2 -> Enabled = false;
	Button4 -> Enabled = true;
	Edit1 -> Enabled = false;
	Edit2 -> Enabled = false;

	ReadThreadPtr = new ReadThread(false);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    ReadThreadPtr->Terminate();
	Button1 -> Enabled = true;
	Button2 -> Enabled = true;
	Button4 -> Enabled = false;
	Edit1 -> Enabled = true;
	Edit2 -> Enabled = true;

}
//---------------------------------------------------------------------------

