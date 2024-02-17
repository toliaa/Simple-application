#pragma once

#include "ArithmeticProgression.h" // Подключаем заголовочный файл для второй формы

namespace expressionvalue1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ expressionValueToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ arithmeticProgressionSumToolStripMenuItem;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;

    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->expressionValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->arithmeticProgressionSumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->menuStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(140, 57);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(100, 20);
               this->textBox1->TabIndex = 0;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(38, 60);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(35, 13);
               this->label1->TabIndex = 1;
               this->label1->Text = L"label1";
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(140, 116);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(75, 23);
               this->button1->TabIndex = 2;
               this->button1->Text = L"button1";
               this->button1->UseVisualStyleBackColor = true;
               // 
               // menuStrip1
               // 
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
               this->menuStrip1->Location = System::Drawing::Point(0, 0);
               this->menuStrip1->Name = L"menuStrip1";
               this->menuStrip1->Size = System::Drawing::Size(800, 24);
               this->menuStrip1->TabIndex = 3;
               this->menuStrip1->Text = L"menuStrip1";
               // 
               // menuToolStripMenuItem
               // 
               this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                   this->expressionValueToolStripMenuItem,
                       this->arithmeticProgressionSumToolStripMenuItem
               });
               this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
               this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
               this->menuToolStripMenuItem->Text = L"Menu";
               // 
               // expressionValueToolStripMenuItem
               // 
               this->expressionValueToolStripMenuItem->Name = L"expressionValueToolStripMenuItem";
               this->expressionValueToolStripMenuItem->Size = System::Drawing::Size(180, 22);
               this->expressionValueToolStripMenuItem->Text = L"Expression Value";
               // 
               // arithmeticProgressionSumToolStripMenuItem
               // 
               this->arithmeticProgressionSumToolStripMenuItem->Name = L"arithmeticProgressionSumToolStripMenuItem";
               this->arithmeticProgressionSumToolStripMenuItem->Size = System::Drawing::Size(212, 22);
               this->arithmeticProgressionSumToolStripMenuItem->Text = L"Arithmetic Progression Sum";
               this->arithmeticProgressionSumToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::arithmeticProgressionSumToolStripMenuItem_Click);
               // 
               // statusStrip1
               // 
               this->statusStrip1->Location = System::Drawing::Point(0, 428);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Size = System::Drawing::Size(800, 22);
               this->statusStrip1->TabIndex = 4;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(800, 450);
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->menuStrip1);
               this->MainMenuStrip = this->menuStrip1;
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private:
        System::Void arithmeticProgressionSumToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            // Создаем экземпляр второй формы и отображаем её
            expressionvalue1::ArithmeticProgressionForm^ myForm = gcnew expressionvalue1::ArithmeticProgressionForm();

            myForm->Show();
        }
    };
}
