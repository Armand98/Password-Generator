#include "okno.h"

using namespace PassGen;

[STAThread]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew okno());
	return 0;
}