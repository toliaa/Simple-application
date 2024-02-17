#pragma once

namespace EquilateralTriangleChecker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainForm : public System::Windows::Forms::Form {
    public:
        MainForm(void) {
            InitializeComponent();
        }

    protected:
        ~MainForm() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBoxA;
    private: System::Windows::Forms::TextBox^ textBoxB;
    private: System::Windows::Forms::TextBox^ textBoxC;
    private: System::Windows::Forms::Label^ labelResult;
    private: System::Windows::Forms::Button^ buttonCheck;
    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void) {
               this->textBoxA = (gcnew System::Windows::Forms::TextBox());
               this->textBoxB = (gcnew System::Windows::Forms::TextBox());
               this->textBoxC = (gcnew System::Windows::Forms::TextBox());
               this->labelResult = (gcnew System::Windows::Forms::Label());
               this->buttonCheck = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // textBoxA
               // 
               this->textBoxA->Location = System::Drawing::Point(12, 12);
               this->textBoxA->Name = L"textBoxA";
               this->textBoxA->Size = System::Drawing::Size(100, 20);
               this->textBoxA->TabIndex = 0;
               this->textBoxA->Text = L"0";
               // 
               // textBoxB
               // 
               this->textBoxB->Location = System::Drawing::Point(12, 38);
               this->textBoxB->Name = L"textBoxB";
               this->textBoxB->Size = System::Drawing::Size(100, 20);
               this->textBoxB->TabIndex = 1;
               this->textBoxB->Text = L"0";
               // 
               // textBoxC
               // 
               this->textBoxC->Location = System::Drawing::Point(12, 64);
               this->textBoxC->Name = L"textBoxC";
               this->textBoxC->Size = System::Drawing::Size(100, 20);
               this->textBoxC->TabIndex = 2;
               this->textBoxC->Text = L"0";
               // 
               // labelResult
               // 
               this->labelResult->AutoSize = true;
               this->labelResult->Location = System::Drawing::Point(12, 97);
               this->labelResult->Name = L"labelResult";
               this->labelResult->Size = System::Drawing::Size(0, 13);
               this->labelResult->TabIndex = 3;
               // 
               // buttonCheck
               // 
               this->buttonCheck->Location = System::Drawing::Point(12, 127);
               this->buttonCheck->Name = L"buttonCheck";
               this->buttonCheck->Size = System::Drawing::Size(100, 23);
               this->buttonCheck->TabIndex = 4;
               this->buttonCheck->Text = L"Check Triangle";
               this->buttonCheck->UseVisualStyleBackColor = true;
               this->buttonCheck->Click += gcnew System::EventHandler(this, &MainForm::buttonCheck_Click);
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(150, 162);
               this->Controls->Add(this->buttonCheck);
               this->Controls->Add(this->labelResult);
               this->Controls->Add(this->textBoxC);
               this->Controls->Add(this->textBoxB);
               this->Controls->Add(this->textBoxA);
               this->Name = L"MainForm";
               this->Text = L"Equilateral Triangle Checker";
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private: System::Void buttonCheck_Click(System::Object^ sender, System::EventArgs^ e) {
        // Зчитування значень сторін трикутника
        double a = System::Convert::ToDouble(textBoxA->Text);
        double b = System::Convert::ToDouble(textBoxB->Text);
        double c = System::Convert::ToDouble(textBoxC->Text);

        // Перевірка чи є трикутник рівностороннім і виведення результату
        bool isEquilateral = (a == b) && (b == c);
        labelResult->Text = isEquilateral ? "Equilateral Triangle" : "Not an Equilateral Triangle";
    }
    };
}
