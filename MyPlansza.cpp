#include "MyPlansza.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kalkulator::MyPlansza formularz;
	Application::Run(%formularz);
	return 0;




}


