object Choice: TChoice
  Left = 413
  Top = 281
  Width = 424
  Height = 119
  Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1092#1080#1075#1091#1088#1091
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Queen: TRadioButton
    Left = 32
    Top = 24
    Width = 73
    Height = 17
    Caption = #1060#1077#1088#1079#1100
    TabOrder = 0
  end
  object Rook: TRadioButton
    Left = 136
    Top = 24
    Width = 81
    Height = 17
    Caption = #1051#1072#1076#1100#1103
    TabOrder = 1
  end
  object Bishop: TRadioButton
    Left = 248
    Top = 24
    Width = 73
    Height = 17
    Caption = #1057#1083#1086#1085
    TabOrder = 2
  end
  object Horse: TRadioButton
    Left = 336
    Top = 24
    Width = 65
    Height = 17
    Caption = #1050#1086#1085#1100
    TabOrder = 3
  end
  object Choose: TButton
    Left = 168
    Top = 56
    Width = 75
    Height = 25
    Caption = #1054#1050
    TabOrder = 4
    OnClick = ChooseClick
  end
end
