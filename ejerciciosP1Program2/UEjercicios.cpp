//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UEjercicios.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1* Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
bool TForm1::palindrome(const String cad)
{
	String reversed;
	for (int i = cad.Length() - 1; i >= 0; i--) {
        reversed += cad.SubString(i + 1, 1);
	}
	return cad == reversed;
}         

void __fastcall TForm1::Palindrome2Click(TObject* Sender)
{
    bool result = palindrome(Edit1->Text.c_str());
    ShowMessage(result ? "Verdadero" : "Falso");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cargadigitosenparesinvertidosdeunnumeri1Click(TObject *Sender)
//Cargar un vector con los digitos en pares invertidos de un numero
//ej x = 5248631 => v[5,42,68,13]		  
{
	String x = Edit1->Text
}
//---------------------------------------------------------------------------

