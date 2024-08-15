#include "MyForm.h"
#include "Plot1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project9; //DemoWinForm is your project name
[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
}
