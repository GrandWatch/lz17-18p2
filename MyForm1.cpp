#include "MyForm1.h"
#include <Windows.h>
using namespace Project5; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm1);
    return 0;
