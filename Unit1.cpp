//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <string.h>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int bl = 4;
const WCHAR *name = L"\\\\.\\C:";
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
	Edit2 -> Text = "\\\\.\\C:";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	bl = (Edit1 -> Text).ToInt();
	DWORD bytes = 1024*1024*bl;
    DWORD bytesRead;
	BYTE *Block = new BYTE[bytes];
	name = (Edit2 -> Text).c_str();

	/* // Physical Drive
	WCHAR *name = L"\\\\.\\PhysicalDrive0";*/

	Application->MessageBox(name,L"Message", MB_OK);
	HANDLE fileHandle = CreateFileW(name, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0,NULL);
	if (fileHandle == INVALID_HANDLE_VALUE) {

	   Application->MessageBox(L"Can't open disk! Please, enter disk name, like \"\\\\.\\C:\"",L"Message", MB_OK);
	   return;
	}

	Button1 -> Enabled = false;
	Button2 -> Enabled = false;
	Button3 -> Enabled = true;
	Edit1 -> Enabled = false;
	Edit2 -> Enabled = false;

	LARGE_INTEGER offset;
	offset.QuadPart = 0;

	unsigned long position = SetFilePointer(fileHandle, offset.LowPart, &offset.HighPart, FILE_BEGIN);
	if (position != offset.LowPart) {
	   Application->MessageBox(L"Error while trying set position in file!",L"Message", MB_OK);
	   return;
	}
    int i = 0;
	while(true){
	bool readblock = ReadFile(fileHandle, Block, bytes, &bytesRead, NULL);
	i++;
	Label4 -> Caption = UnicodeString(i);
	Label9 -> Caption = std::to_wstring(Block);
	if (readblock == false || bytesRead != bytes){
		//Application -> MessageBox(L"Error while trying to read block!", L"Message",MB_OK);
		return;
	}
	position = SetFilePointer(fileHandle, offset.LowPart, &offset.HighPart, FILE_CURRENT);
	}
	delete[] Block;
	CloseHandle(fileHandle);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Button1 -> Enabled = true;
	Button2 -> Enabled = true;
	Button3 -> Enabled = false;
	Edit1 -> Enabled = true;
	Edit2 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Button1 -> Enabled = false;
	Button2 -> Enabled = false;
	Button4 -> Enabled = true;
	Edit1 -> Enabled = false;
	//Edit1 -> Text = UnicodeString(1024*bl);
	Edit2 -> Enabled = false;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Button1 -> Enabled = true;
	Button2 -> Enabled = true;
	Button4 -> Enabled = false;
	Edit1 -> Enabled = true;
	Edit2 -> Enabled = true;

}
//---------------------------------------------------------------------------
