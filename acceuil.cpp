#include "acceuil.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	gestionrestaurant::acceuil form;
	Application::Run(% form);
}