#pragma once

namespace ExpressionCalculator {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBoxX;
    private: System::Windows::Forms::Button^ buttonCalculate;
    private: System::Windows::Forms::Label^ labelResult;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->textBoxX = (gcnew System::Windows::Forms::TextBox());
               this->buttonCalculate = (gcnew System::Windows::Forms::Button());
               this->labelResult = (gcnew System::Windows::Forms::Label());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->statusStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // textBoxX
               // 
               this->textBoxX->Location = System::Drawing::Point(51, 11);
               this->textBoxX->Margin = System::Windows::Forms::Padding(4);
               this->textBoxX->Name = L"textBoxX";
               this->textBoxX->Size = System::Drawing::Size(132, 22);
               this->textBoxX->TabIndex = 0;
               // 
               // buttonCalculate
               // 
               this->buttonCalculate->Location = System::Drawing::Point(67, 41);
               this->buttonCalculate->Margin = System::Windows::Forms::Padding(4);
               this->buttonCalculate->Name = L"buttonCalculate";
               this->buttonCalculate->Size = System::Drawing::Size(100, 28);
               this->buttonCalculate->TabIndex = 1;
               this->buttonCalculate->Text = L"Calculate";
               this->buttonCalculate->UseVisualStyleBackColor = true;
               this->buttonCalculate->Click += gcnew System::EventHandler(this, &MainForm::buttonCalculate_Click);
               // 
               // labelResult
               // 
               this->labelResult->AutoSize = true;
               this->labelResult->Location = System::Drawing::Point(16, 92);
               this->labelResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelResult->Name = L"labelResult";
               this->labelResult->Size = System::Drawing::Size(0, 16);
               this->labelResult->TabIndex = 2;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(16, 14);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(15, 16);
               this->label1->TabIndex = 3;
               this->label1->Text = L"X";
               // 
               // statusStrip1
               // 
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
               this->statusStrip1->Location = System::Drawing::Point(0, 113);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Size = System::Drawing::Size(358, 26);
               this->statusStrip1->TabIndex = 4;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // toolStripStatusLabel1
               // 
               this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
               this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
               this->toolStripStatusLabel1->Text = L"Enter a number for X";
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(358, 139);
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->labelResult);
               this->Controls->Add(this->buttonCalculate);
               this->Controls->Add(this->textBoxX);
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"MainForm";
               this->Text = L"Expression Calculator";
               this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
               this->statusStrip1->ResumeLayout(false);
               this->statusStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                double x = System::Convert::ToDouble(textBoxX->Text);
                double result = x - (x * x * x / 3) + (x * x * x * x / 5);
                labelResult->Text = "Result: " + result;
                toolStripStatusLabel1->Text = "Calculation successful";
            }
            catch (System::FormatException^) {
                toolStripStatusLabel1->Text = "Invalid input. Please enter a valid number for X";
            }
        }
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
