//---------------------------------------------------------------------------

#ifndef UEjerciciosH
#define UEjerciciosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
#include <string>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TMainMenu *MainMenu1;
	TMenuItem *Palindrome1;
	TMenuItem *Matrices1;
	TMenuItem *texto1;
	TMenuItem *Palindrome2;
	TStringGrid *StringGrid1;
	TMenuItem *Cargadigitosenparesinvertidosdeunnumeri1;
	void __fastcall Palindrome2Click(TObject *Sender);
	void __fastcall Cargadigitosenparesinvertidosdeunnumeri1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
    bool palindrome(String cad);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
