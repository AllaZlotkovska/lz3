#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lz4_5::MyForm form;// ім'я вашого проекту, наприклад, myproekt або ін.
	Application::Run(% form);
}


