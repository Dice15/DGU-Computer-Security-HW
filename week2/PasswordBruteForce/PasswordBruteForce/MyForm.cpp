#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PasswordBruteForce::MyForm form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}