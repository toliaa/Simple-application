#pragma once

namespace AccessControlApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class AccessDatabaseForm : public System::Windows::Forms::Form
    {
    public:
        AccessDatabaseForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~AccessDatabaseForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxPassword;
    private: System::Windows::Forms::Button^ buttonSubmit;
    private: System::Windows::Forms::Label^ labelResult;

    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
               this->buttonSubmit = (gcnew System::Windows::Forms::Button());
               this->labelResult = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(17, 16);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(132, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Enter your password:";
               // 
               // textBoxPassword
               // 
               this->textBoxPassword->Location = System::Drawing::Point(175, 12);
               this->textBoxPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxPassword->Name = L"textBoxPassword";
               this->textBoxPassword->PasswordChar = '*';
               this->textBoxPassword->Size = System::Drawing::Size(132, 22);
               this->textBoxPassword->TabIndex = 1;
               // 
               // buttonSubmit
               // 
               this->buttonSubmit->Location = System::Drawing::Point(21, 57);
               this->buttonSubmit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonSubmit->Name = L"buttonSubmit";
               this->buttonSubmit->Size = System::Drawing::Size(100, 28);
               this->buttonSubmit->TabIndex = 2;
               this->buttonSubmit->Text = L"Submit";
               this->buttonSubmit->UseVisualStyleBackColor = true;
               this->buttonSubmit->Click += gcnew System::EventHandler(this, &AccessDatabaseForm::buttonSubmit_Click);
               // 
               // labelResult
               // 
               this->labelResult->AutoSize = true;
               this->labelResult->Location = System::Drawing::Point(21, 101);
               this->labelResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelResult->Name = L"labelResult";
               this->labelResult->Size = System::Drawing::Size(0, 16);
               this->labelResult->TabIndex = 3;
               // 
               // AccessForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(324, 133);
               this->Controls->Add(this->labelResult);
               this->Controls->Add(this->buttonSubmit);
               this->Controls->Add(this->textBoxPassword);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->Name = L"AccessForm";
               this->Text = L"Access Control";
               this->Load += gcnew System::EventHandler(this, &AccessDatabaseForm::AccessForm_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
            // Отримання введеного паролю
            String^ password = textBoxPassword->Text;

            // Перевірка пароля та визначення рівня доступу
            if (password == "9583" || password == "1747") {
                labelResult->Text = "Access Level: ABC";
            }
            else if (password == "3331" || password == "7922") {
                labelResult->Text = "Access Level: BC";
            }
            else if (password == "9455" || password == "8997") {
                labelResult->Text = "Access Level: C";
            }
            else {
                labelResult->Text = "Invalid password";
            }
        }
    private: System::Void AccessForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
