object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 313
  ClientWidth = 826
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
    Top = 143
    Width = 59
    Height = 15
    Caption = 'Target disk:'
  end
  object Label3: TLabel
    Left = 8
    Top = 172
    Width = 83
    Height = 15
    Caption = 'Block size (Mb):'
  end
  object Label2: TLabel
    Left = 408
    Top = 28
    Width = 44
    Height = 15
    Caption = 'Block N:'
  end
  object Label4: TLabel
    Left = 472
    Top = 28
    Width = 6
    Height = 15
    Caption = '0'
  end
  object Label5: TLabel
    Left = 408
    Top = 91
    Width = 44
    Height = 15
    Caption = 'Block N:'
  end
  object Label6: TLabel
    Left = 472
    Top = 91
    Width = 6
    Height = 15
    Caption = '0'
  end
  object Label7: TLabel
    Left = 520
    Top = 28
    Width = 32
    Height = 15
    Caption = 'Block:'
  end
  object Label8: TLabel
    Left = 518
    Top = 91
    Width = 32
    Height = 15
    Caption = 'Block:'
  end
  object Label9: TLabel
    Left = 576
    Top = 28
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Label10: TLabel
    Left = 576
    Top = 91
    Width = 5
    Height = 15
    Caption = '-'
  end
  object Button1: TButton
    Left = 8
    Top = 16
    Width = 177
    Height = 41
    Caption = 'Start Single Thread Processing'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 79
    Width = 177
    Height = 41
    Caption = 'Start Multi Thread Processing'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 104
    Top = 169
    Width = 121
    Height = 23
    NumbersOnly = True
    TabOrder = 2
    Text = '4'
  end
  object Edit2: TEdit
    Left = 104
    Top = 140
    Width = 121
    Height = 23
    TabOrder = 3
    Text = '\\.\C:'
  end
  object Button3: TButton
    Left = 208
    Top = 16
    Width = 177
    Height = 41
    Caption = 'Stop Single Thread Processing'
    Enabled = False
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 208
    Top = 79
    Width = 177
    Height = 41
    Caption = 'Stop Multi Thread Processing'
    Enabled = False
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 8
    Top = 239
    Width = 75
    Height = 41
    Caption = 'Exit'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 104
    Top = 239
    Width = 75
    Height = 41
    Caption = 'Set Default'
    TabOrder = 7
    OnClick = Button6Click
  end
end
