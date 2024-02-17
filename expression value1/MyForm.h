#pragma once

#include "CheckEquilateralTriangle.h" // Додайте цей рядок
#include "ArithmeticProgression.h"

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
    private: System::Windows::Forms::ToolStripMenuItem^ checkEquilateralTriangleToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ accessControlDatabaseToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ printPythagoreanNumbersToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ sumBetweenMinMaxToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ countCharactersBeforeColonToolStripMenuItem;

    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->expressionValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->arithmeticProgressionSumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->checkEquilateralTriangleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->accessControlDatabaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->printPythagoreanNumbersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->sumBetweenMinMaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->countCharactersBeforeColonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->menuStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // textBox1
               // 
               resources->ApplyResources(this->textBox1, L"textBox1");
               this->textBox1->Name = L"textBox1";
               // 
               // label1
               // 
               resources->ApplyResources(this->label1, L"label1");
               this->label1->Name = L"label1";
               // 
               // button1
               // 
               resources->ApplyResources(this->button1, L"button1");
               this->button1->Name = L"button1";
               this->button1->UseVisualStyleBackColor = true;
               // 
               // menuStrip1
               // 
               resources->ApplyResources(this->menuStrip1, L"menuStrip1");
               this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
               this->menuStrip1->Name = L"menuStrip1";
               // 
               // menuToolStripMenuItem
               // 
               resources->ApplyResources(this->menuToolStripMenuItem, L"menuToolStripMenuItem");
               this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
                   this->expressionValueToolStripMenuItem,
                       this->arithmeticProgressionSumToolStripMenuItem, this->checkEquilateralTriangleToolStripMenuItem, this->accessControlDatabaseToolStripMenuItem,
                       this->printPythagoreanNumbersToolStripMenuItem, this->sumBetweenMinMaxToolStripMenuItem, this->countCharactersBeforeColonToolStripMenuItem
               });
               this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
               // 
               // expressionValueToolStripMenuItem
               // 
               resources->ApplyResources(this->expressionValueToolStripMenuItem, L"expressionValueToolStripMenuItem");
               this->expressionValueToolStripMenuItem->Name = L"expressionValueToolStripMenuItem";
               // 
               // arithmeticProgressionSumToolStripMenuItem
               // 
               resources->ApplyResources(this->arithmeticProgressionSumToolStripMenuItem, L"arithmeticProgressionSumToolStripMenuItem");
               this->arithmeticProgressionSumToolStripMenuItem->BackColor = System::Drawing::Color::LightBlue;
               this->arithmeticProgressionSumToolStripMenuItem->Name = L"arithmeticProgressionSumToolStripMenuItem";
               this->arithmeticProgressionSumToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::arithmeticProgressionSumToolStripMenuItem_Click);
               // 
               // statusStrip1
               // 
               resources->ApplyResources(this->statusStrip1, L"statusStrip1");
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Name = L"statusStrip1";
               // 
               // checkEquilateralTriangleToolStripMenuItem
               // 
               resources->ApplyResources(this->checkEquilateralTriangleToolStripMenuItem, L"checkEquilateralTriangleToolStripMenuItem");
               this->checkEquilateralTriangleToolStripMenuItem->Name = L"checkEquilateralTriangleToolStripMenuItem";
               this->checkEquilateralTriangleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::checkEquilateralTriangleToolStripMenuItem_Click); // Додайте цей рядок
               // 
               // accessControlDatabaseToolStripMenuItem
               // 
               resources->ApplyResources(this->accessControlDatabaseToolStripMenuItem, L"accessControlDatabaseToolStripMenuItem");
               this->accessControlDatabaseToolStripMenuItem->Name = L"accessControlDatabaseToolStripMenuItem";
               // 
               // printPythagoreanNumbersToolStripMenuItem
               // 
               resources->ApplyResources(this->printPythagoreanNumbersToolStripMenuItem, L"printPythagoreanNumbersToolStripMenuItem");
               this->printPythagoreanNumbersToolStripMenuItem->Name = L"printPythagoreanNumbersToolStripMenuItem";
               // 
               // sumBetweenMinMaxToolStripMenuItem
               // 
               resources->ApplyResources(this->sumBetweenMinMaxToolStripMenuItem, L"sumBetweenMinMaxToolStripMenuItem");
               this->sumBetweenMinMaxToolStripMenuItem->Name = L"sumBetweenMinMaxToolStripMenuItem";
               // 
               // countCharactersBeforeColonToolStripMenuItem
               // 
               resources->ApplyResources(this->countCharactersBeforeColonToolStripMenuItem, L"countCharactersBeforeColonToolStripMenuItem");
               this->countCharactersBeforeColonToolStripMenuItem->Name = L"countCharactersBeforeColonToolStripMenuItem";
               // 
               // MyForm
               // 
               resources->ApplyResources(this, L"$this");
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->menuStrip1);
               this->MainMenuStrip = this->menuStrip1;
               this->Name = L"MyForm";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void arithmeticProgressionSumToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            expressionvalue1::ArithmeticProgressionForm^ myForm = gcnew expressionvalue1::ArithmeticProgressionForm();

            myForm->Show();
        }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private:
        System::Void checkEquilateralTriangleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            EquilateralTriangleChecker::EquilateralTriangleCheckerForm^ myForm = gcnew EquilateralTriangleChecker::EquilateralTriangleCheckerForm();

            myForm->Show();
        }
    };
}
