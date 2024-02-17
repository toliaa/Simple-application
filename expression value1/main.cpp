#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Створення та запуск головної форми
    expressionvalue1::MyForm form;
    Application::Run(% form);

    return 0;
}
