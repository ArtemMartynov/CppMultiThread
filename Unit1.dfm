object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 348
  ClientWidth = 739
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 8
    Top = 221
    Width = 59
    Height = 15
    Caption = 'Target disk:'
  end
  object Label3: TLabel
    Left = 104
    Top = 221
    Width = 79
    Height = 15
    Caption = 'Block size (Kb):'
  end
  object Label5: TLabel
    Left = 240
    Top = 221
    Width = 44
    Height = 15
    Caption = 'Block N:'
  end
  object Label6: TLabel
    Left = 304
    Top = 221
    Width = 6
    Height = 15
    Caption = '0'
  end
  object Label8: TLabel
    Left = 350
    Top = 221
    Width = 32
    Height = 15
    Caption = 'Block:'
  end
  object Label10: TLabel
    Left = 408
    Top = 221
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label2: TLabel
    Left = 176
    Top = 68
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label4: TLabel
    Left = 176
    Top = 93
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label7: TLabel
    Left = 176
    Top = 114
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label9: TLabel
    Left = 176
    Top = 135
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label11: TLabel
    Left = 409
    Top = 68
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label12: TLabel
    Left = 409
    Top = 93
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label13: TLabel
    Left = 408
    Top = 114
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label14: TLabel
    Left = 408
    Top = 135
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label15: TLabel
    Left = 648
    Top = 68
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label16: TLabel
    Left = 648
    Top = 93
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label17: TLabel
    Left = 648
    Top = 114
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label18: TLabel
    Left = 648
    Top = 135
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label19: TLabel
    Left = 8
    Top = 68
    Width = 61
    Height = 15
    Caption = 'OEM Name'
  end
  object Label20: TLabel
    Left = 8
    Top = 93
    Width = 84
    Height = 15
    Caption = 'Bytes per Sector'
  end
  object Label21: TLabel
    Left = 8
    Top = 114
    Width = 98
    Height = 15
    Caption = 'Sectors per Cluster'
  end
  object Label22: TLabel
    Left = 8
    Top = 135
    Width = 88
    Height = 15
    Caption = 'Sectors per Track'
  end
  object Label23: TLabel
    Left = 240
    Top = 68
    Width = 94
    Height = 15
    Caption = 'Number of Heads'
  end
  object Label24: TLabel
    Left = 240
    Top = 93
    Width = 66
    Height = 15
    Caption = 'Total Sectors'
  end
  object Label25: TLabel
    Left = 240
    Top = 114
    Width = 110
    Height = 15
    Caption = 'MFT Cluster Number'
  end
  object Label26: TLabel
    Left = 240
    Top = 135
    Width = 141
    Height = 15
    Caption = 'MFT Copy Cluster Number'
  end
  object Label27: TLabel
    Left = 481
    Top = 68
    Width = 46
    Height = 15
    Caption = 'MFT Size'
  end
  object Label28: TLabel
    Left = 481
    Top = 93
    Width = 55
    Height = 15
    Caption = 'Buffer Size'
  end
  object Label29: TLabel
    Left = 481
    Top = 114
    Width = 118
    Height = 15
    Caption = 'Volume Serial Number'
  end
  object Label30: TLabel
    Left = 481
    Top = 135
    Width = 56
    Height = 15
    Caption = 'Checksum'
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 177
    Height = 41
    Caption = 'Show FS info'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 169
    Width = 177
    Height = 41
    Caption = 'Start Multi Thread Processing'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 104
    Top = 242
    Width = 81
    Height = 23
    NumbersOnly = True
    TabOrder = 2
    Text = '4'
  end
  object Edit2: TEdit
    Left = 8
    Top = 242
    Width = 81
    Height = 23
    TabOrder = 3
    Text = '\\.\E:'
  end
  object Button4: TButton
    Left = 240
    Top = 169
    Width = 177
    Height = 41
    Caption = 'Stop Multi Thread Processing'
    Enabled = False
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 8
    Top = 317
    Width = 75
    Height = 23
    Caption = 'Exit'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 8
    Top = 282
    Width = 75
    Height = 23
    Caption = 'Set Default'
    TabOrder = 6
    OnClick = Button6Click
  end
end
