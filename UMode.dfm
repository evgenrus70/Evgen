object Mode: TMode
  Left = 455
  Top = 219
  Width = 210
  Height = 243
  Caption = #1048#1075#1088#1072
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object IPAdress: TLabel
    Left = 119
    Top = 91
    Width = 50
    Height = 13
    Caption = 'IP address'
  end
  object PortNumb: TLabel
    Left = 144
    Top = 146
    Width = 24
    Height = 13
    Caption = '9999'
  end
  object Port: TLabel
    Left = 112
    Top = 146
    Width = 19
    Height = 13
    Caption = 'Port'
  end
  object Begin: TButton
    Left = 12
    Top = 168
    Width = 75
    Height = 25
    Caption = #1053#1072#1095#1072#1090#1100
    TabOrder = 0
    OnClick = BeginClick
  end
  object Mode: TRadioGroup
    Left = 8
    Top = 88
    Width = 97
    Height = 73
    Caption = #1056#1077#1078#1080#1084
    ItemIndex = 1
    Items.Strings = (
      #1048#1075#1088#1086#1082
      #1057#1086#1079#1076#1072#1090#1077#1083#1100)
    TabOrder = 1
    OnClick = ModeClick
  end
  object IP: TEdit
    Left = 112
    Top = 112
    Width = 81
    Height = 21
    TabOrder = 2
  end
  object Colors: TRadioGroup
    Left = 8
    Top = 8
    Width = 193
    Height = 73
    Caption = #1062#1074#1077#1090
    ItemIndex = 0
    Items.Strings = (
      #1041#1077#1083#1099#1077' '
      #1063#1077#1088#1085#1099#1077)
    TabOrder = 3
  end
  object Button1: TButton
    Left = 109
    Top = 168
    Width = 75
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 4
    OnClick = Button1Click
  end
end
