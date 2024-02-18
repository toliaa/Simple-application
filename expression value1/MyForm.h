#pragma once

#include "CheckEquilateralTriangle.h" 
#include "ArithmeticProgression.h"
#include "AccessControlDatabase.h"
#include "PythagoreanNumbers.h"
#include "SumBetweenMinMax.h"
#include "ExpressionValue.h"

namespace expressionvalue1 {
    using namespace System::Diagnostics;
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
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::LinkLabel^ linkLabel1;
    private: System::Windows::Forms::LinkLabel^ linkLabel2;
    private: System::Windows::Forms::LinkLabel^ linkLabel3;



    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->expressionValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->arithmeticProgressionSumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->checkEquilateralTriangleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->accessControlDatabaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->printPythagoreanNumbersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->sumBetweenMinMaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->countCharactersBeforeColonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
               this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
               this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
               this->menuStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // menuStrip1
               // 
               this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9));
               this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
               this->menuStrip1->Location = System::Drawing::Point(0, 0);
               this->menuStrip1->Name = L"menuStrip1";
               this->menuStrip1->Size = System::Drawing::Size(686, 28);
               this->menuStrip1->TabIndex = 3;
               this->menuStrip1->Text = L"menuStrip1";
               this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
               // 
               // menuToolStripMenuItem
               // 
               this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
                   this->expressionValueToolStripMenuItem,
                       this->arithmeticProgressionSumToolStripMenuItem, this->checkEquilateralTriangleToolStripMenuItem, this->accessControlDatabaseToolStripMenuItem,
                       this->printPythagoreanNumbersToolStripMenuItem, this->sumBetweenMinMaxToolStripMenuItem, this->countCharactersBeforeColonToolStripMenuItem
               });
               this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
               this->menuToolStripMenuItem->Size = System::Drawing::Size(57, 24);
               this->menuToolStripMenuItem->Text = L"Apps";
               // 
               // expressionValueToolStripMenuItem
               // 
               this->expressionValueToolStripMenuItem->BackColor = System::Drawing::Color::DarkCyan;
               this->expressionValueToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
               this->expressionValueToolStripMenuItem->Name = L"expressionValueToolStripMenuItem";
               this->expressionValueToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->expressionValueToolStripMenuItem->Text = L"Expression value";
               this->expressionValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::expressionValueToolStripMenuItem_Click);
               // 
               // arithmeticProgressionSumToolStripMenuItem
               // 
               this->arithmeticProgressionSumToolStripMenuItem->BackColor = System::Drawing::Color::LightBlue;
               this->arithmeticProgressionSumToolStripMenuItem->Name = L"arithmeticProgressionSumToolStripMenuItem";
               this->arithmeticProgressionSumToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->arithmeticProgressionSumToolStripMenuItem->Text = L"Arithmetic Progression Sum";
               this->arithmeticProgressionSumToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::arithmeticProgressionSumToolStripMenuItem_Click);
               // 
               // checkEquilateralTriangleToolStripMenuItem
               // 
               this->checkEquilateralTriangleToolStripMenuItem->BackColor = System::Drawing::Color::PaleTurquoise;
               this->checkEquilateralTriangleToolStripMenuItem->Name = L"checkEquilateralTriangleToolStripMenuItem";
               this->checkEquilateralTriangleToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->checkEquilateralTriangleToolStripMenuItem->Text = L"Check Equilateral Triangle";
               this->checkEquilateralTriangleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::checkEquilateralTriangleToolStripMenuItem_Click);
               // 
               // accessControlDatabaseToolStripMenuItem
               // 
               this->accessControlDatabaseToolStripMenuItem->BackColor = System::Drawing::Color::LightCyan;
               this->accessControlDatabaseToolStripMenuItem->Name = L"accessControlDatabaseToolStripMenuItem";
               this->accessControlDatabaseToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->accessControlDatabaseToolStripMenuItem->Text = L"Access Control Database";
               this->accessControlDatabaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::accessControlDatabaseToolStripMenuItem_Click_1);
               // 
               // printPythagoreanNumbersToolStripMenuItem
               // 
               this->printPythagoreanNumbersToolStripMenuItem->BackColor = System::Drawing::Color::LightBlue;
               this->printPythagoreanNumbersToolStripMenuItem->Name = L"printPythagoreanNumbersToolStripMenuItem";
               this->printPythagoreanNumbersToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->printPythagoreanNumbersToolStripMenuItem->Text = L"Print Pythagorean Numbers";
               this->printPythagoreanNumbersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printPythagoreanNumbersToolStripMenuItem_Click);
               // 
               // sumBetweenMinMaxToolStripMenuItem
               // 
               this->sumBetweenMinMaxToolStripMenuItem->BackColor = System::Drawing::Color::DodgerBlue;
               this->sumBetweenMinMaxToolStripMenuItem->Name = L"sumBetweenMinMaxToolStripMenuItem";
               this->sumBetweenMinMaxToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->sumBetweenMinMaxToolStripMenuItem->Text = L"Sum Between Min Max";
               this->sumBetweenMinMaxToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sumBetweenMinMaxToolStripMenuItem_Click);
               // 
               // countCharactersBeforeColonToolStripMenuItem
               // 
               this->countCharactersBeforeColonToolStripMenuItem->Name = L"countCharactersBeforeColonToolStripMenuItem";
               this->countCharactersBeforeColonToolStripMenuItem->Size = System::Drawing::Size(295, 26);
               this->countCharactersBeforeColonToolStripMenuItem->Text = L"Count Characters Before Colon";
               // 
               // statusStrip1
               // 
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Location = System::Drawing::Point(0, 500);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
               this->statusStrip1->Size = System::Drawing::Size(686, 22);
               this->statusStrip1->Stretch = false;
               this->statusStrip1->TabIndex = 5;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // label1
               // 
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label1->Location = System::Drawing::Point(12, 49);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(525, 424);
               this->label1->TabIndex = 6;
               this->label1->Text = resources->GetString(L"label1.Text");
               this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label2->Location = System::Drawing::Point(21, 28);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(195, 16);
               this->label2->TabIndex = 7;
               this->label2->Text = L"capabilities of this program";
               this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(543, 506);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(131, 16);
               this->label3->TabIndex = 8;
               this->label3->Text = L"© Tolia Driapak 2024";
               // 
               // linkLabel1
               // 
               this->linkLabel1->AutoSize = true;
               this->linkLabel1->Location = System::Drawing::Point(558, 51);
               this->linkLabel1->Name = L"linkLabel1";
               this->linkLabel1->Size = System::Drawing::Size(66, 16);
               this->linkLabel1->TabIndex = 9;
               this->linkLabel1->TabStop = true;
               this->linkLabel1->Text = L"Instagram";
               this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
               // 
               // linkLabel2
               // 
               this->linkLabel2->AutoSize = true;
               this->linkLabel2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
               this->linkLabel2->Location = System::Drawing::Point(558, 82);
               this->linkLabel2->Name = L"linkLabel2";
               this->linkLabel2->Size = System::Drawing::Size(57, 16);
               this->linkLabel2->TabIndex = 10;
               this->linkLabel2->TabStop = true;
               this->linkLabel2->Text = L"Linkedin";
               this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
               // 
               // linkLabel3
               // 
               this->linkLabel3->AutoSize = true;
               this->linkLabel3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
               this->linkLabel3->Location = System::Drawing::Point(558, 112);
               this->linkLabel3->Name = L"linkLabel3";
               this->linkLabel3->Size = System::Drawing::Size(74, 16);
               this->linkLabel3->TabIndex = 11;
               this->linkLabel3->TabStop = true;
               this->linkLabel3->Text = L"My website";
               this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel3_LinkClicked);
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(686, 522);
               this->Controls->Add(this->linkLabel3);
               this->Controls->Add(this->linkLabel2);
               this->Controls->Add(this->linkLabel1);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->menuStrip1);
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->MainMenuStrip = this->menuStrip1;
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"MyForm";
               this->Text = L"Main";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void arithmeticProgressionSumToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            ArithmeticProgressionSumApp::MainForm^ myForm = gcnew ArithmeticProgressionSumApp::MainForm();

            myForm->Show();
        }
   


     private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private:
        System::Void checkEquilateralTriangleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            EquilateralTriangleChecker::EquilateralTriangleCheckerForm^ myForm = gcnew EquilateralTriangleChecker::EquilateralTriangleCheckerForm();

            myForm->Show();
        
        }

    private:
        System::Void accessControlDatabaseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            AccessControlApp::AccessDatabaseForm^ myForm = gcnew AccessControlApp::AccessDatabaseForm();

            myForm->Show();
        }
       
    private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
    }


    private: 
        System::Void accessControlDatabaseToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
              
             AccessControlApp::AccessDatabaseForm^ myForm = gcnew AccessControlApp::AccessDatabaseForm();

             myForm->Show();
     }

  private: 
      System::Void printPythagoreanNumbersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      
          PythagoreanNumbersApp::MainForm^ myForm = gcnew PythagoreanNumbersApp::MainForm();

          myForm->Show();
  }
  private: 
      System::Void sumBetweenMinMaxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
          SequenceSumApp::MainForm^ myForm = gcnew SequenceSumApp::MainForm();

          myForm->Show();
        

  }
  private: System::Void expressionValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      ExpressionCalculator::MainForm^ myForm = gcnew ExpressionCalculator::MainForm();

      myForm->Show();
  }






private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    System::Diagnostics::Process::Start("https://www.instagram.com/toliadriapakmusic/");

}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    System::Diagnostics::Process::Start("https://www.linkedin.com/in/%D0%B0%D0%BD%D0%B0%D1%82%D0%BE%D0%BB%D1%96%D0%B9-%D0%B4%D1%80%D1%8F%D0%BF%D0%B0%D0%BA/");
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    System::Diagnostics::Process::Start("https://toliaa.github.io/toliadriapak/");
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}



};


}

