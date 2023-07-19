object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 382
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Edit1: TEdit
    Left = 120
    Top = 24
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object StringGrid1: TStringGrid
    Left = 32
    Top = 72
    Width = 302
    Height = 49
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 1
  end
  object MainMenu1: TMainMenu
    object Palindrome1: TMenuItem
      Caption = 'Vectores'
      object Cargadigitosenparesinvertidosdeunnumeri1: TMenuItem
        Caption = 'Carga digitos en pares invertidos de un numero'
        OnClick = Cargadigitosenparesinvertidosdeunnumeri1Click
      end
    end
    object Matrices1: TMenuItem
      Caption = 'Matrices'
    end
    object texto1: TMenuItem
      Caption = 'texto'
      object Palindrome2: TMenuItem
        Caption = 'Palindrome'
        OnClick = Palindrome2Click
      end
    end
  end
end
