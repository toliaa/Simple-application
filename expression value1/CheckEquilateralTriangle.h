#pragma once

namespace EquilateralTriangleChecker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class EquilateralTriangleCheckerForm : public System::Windows::Forms::Form {
    public:
        EquilateralTriangleCheckerForm(void) {
            InitializeComponent();
        }

    protected:
        ~EquilateralTriangleCheckerForm() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBoxA;
    private: System::Windows::Forms::TextBox^ textBoxB;
    private: System::Windows::Forms::TextBox^ textBoxC;
    private: System::Windows::Forms::Label^ labelResult;
    private: System::Windows::Forms::Button^ buttonCheck;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
    private: System::Windows::Forms::Label^ label4;
    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void) {
               this->textBoxA = (gcnew System::Windows::Forms::TextBox());
               this->textBoxB = (gcnew System::Windows::Forms::TextBox());
               this->textBoxC = (gcnew System::Windows::Forms::TextBox());
               this->labelResult = (gcnew System::Windows::Forms::Label());
               this->buttonCheck = (gcnew System::Windows::Forms::Button());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->statusStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // textBoxA
               // 
               this->textBoxA->Location = System::Drawing::Point(39, 13);
               this->textBoxA->Margin = System::Windows::Forms::Padding(4);
               this->textBoxA->Name = L"textBoxA";
               this->textBoxA->Size = System::Drawing::Size(132, 22);
               this->textBoxA->TabIndex = 0;
               this->textBoxA->Text = L"0";
               // 
               // textBoxB
               // 
               this->textBoxB->Location = System::Drawing::Point(39, 43);
               this->textBoxB->Margin = System::Windows::Forms::Padding(4);
               this->textBoxB->Name = L"textBoxB";
               this->textBoxB->Size = System::Drawing::Size(132, 22);
               this->textBoxB->TabIndex = 1;
               this->textBoxB->Text = L"0";
               this->textBoxB->TextChanged += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::textBoxB_TextChanged);
               // 
               // textBoxC
               // 
               this->textBoxC->Location = System::Drawing::Point(39, 73);
               this->textBoxC->Margin = System::Windows::Forms::Padding(4);
               this->textBoxC->Name = L"textBoxC";
               this->textBoxC->Size = System::Drawing::Size(132, 22);
               this->textBoxC->TabIndex = 2;
               this->textBoxC->Text = L"0";
               // 
               // labelResult
               // 
               this->labelResult->AutoSize = true;
               this->labelResult->Location = System::Drawing::Point(16, 119);
               this->labelResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelResult->Name = L"labelResult";
               this->labelResult->Size = System::Drawing::Size(0, 16);
               this->labelResult->TabIndex = 3;
               // 
               // buttonCheck
               // 
               this->buttonCheck->Location = System::Drawing::Point(39, 138);
               this->buttonCheck->Margin = System::Windows::Forms::Padding(4);
               this->buttonCheck->Name = L"buttonCheck";
               this->buttonCheck->Size = System::Drawing::Size(133, 28);
               this->buttonCheck->TabIndex = 4;
               this->buttonCheck->Text = L"Check Triangle";
               this->buttonCheck->UseVisualStyleBackColor = true;
               this->buttonCheck->Click += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::buttonCheck_Click);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(16, 16);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(16, 16);
               this->label1->TabIndex = 5;
               this->label1->Text = L"A";
               this->label1->Click += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::label1_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(16, 46);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(16, 16);
               this->label2->TabIndex = 6;
               this->label2->Text = L"B";
               this->label2->Click += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::label2_Click);
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(16, 76);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(16, 16);
               this->label3->TabIndex = 7;
               this->label3->Text = L"C";
               // 
               // statusStrip1
               // 
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
               this->statusStrip1->Location = System::Drawing::Point(0, 186);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Size = System::Drawing::Size(486, 26);
               this->statusStrip1->TabIndex = 8;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // toolStripStatusLabel1
               // 
               this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
               this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
               this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label4->Location = System::Drawing::Point(376, 191);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(98, 12);
               this->label4->TabIndex = 9;
               this->label4->Text = L"© Tolia Driapak 2024";
               this->label4->Click += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::label4_Click);
               // 
               // EquilateralTriangleCheckerForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(486, 212);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->buttonCheck);
               this->Controls->Add(this->labelResult);
               this->Controls->Add(this->textBoxC);
               this->Controls->Add(this->textBoxB);
               this->Controls->Add(this->textBoxA);
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"EquilateralTriangleCheckerForm";
               this->Text = L"Equilateral Triangle Checker";
               this->Load += gcnew System::EventHandler(this, &EquilateralTriangleCheckerForm::MainForm_Load);
               this->statusStrip1->ResumeLayout(false);
               this->statusStrip1->PerformLayout();
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
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBoxB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
