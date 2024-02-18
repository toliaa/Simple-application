#pragma once

namespace ArithmeticProgressionSumApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
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

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxFirstTerm;
    private: System::Windows::Forms::TextBox^ textBoxCommonDifference;
    private: System::Windows::Forms::TextBox^ textBoxNumberOfTerms;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ buttonCalculate;
    private: System::Windows::Forms::Label^ labelResult;

    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxFirstTerm = (gcnew System::Windows::Forms::TextBox());
               this->textBoxCommonDifference = (gcnew System::Windows::Forms::TextBox());
               this->textBoxNumberOfTerms = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->buttonCalculate = (gcnew System::Windows::Forms::Button());
               this->labelResult = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(37, 34);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(96, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"First Term (a1):";
               // 
               // textBoxFirstTerm
               // 
               this->textBoxFirstTerm->Location = System::Drawing::Point(168, 31);
               this->textBoxFirstTerm->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxFirstTerm->Name = L"textBoxFirstTerm";
               this->textBoxFirstTerm->Size = System::Drawing::Size(132, 22);
               this->textBoxFirstTerm->TabIndex = 1;
               // 
               // textBoxCommonDifference
               // 
               this->textBoxCommonDifference->Location = System::Drawing::Point(168, 78);
               this->textBoxCommonDifference->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxCommonDifference->Name = L"textBoxCommonDifference";
               this->textBoxCommonDifference->Size = System::Drawing::Size(132, 22);
               this->textBoxCommonDifference->TabIndex = 2;
               // 
               // textBoxNumberOfTerms
               // 
               this->textBoxNumberOfTerms->Location = System::Drawing::Point(168, 124);
               this->textBoxNumberOfTerms->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxNumberOfTerms->Name = L"textBoxNumberOfTerms";
               this->textBoxNumberOfTerms->Size = System::Drawing::Size(132, 22);
               this->textBoxNumberOfTerms->TabIndex = 3;
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(37, 81);
               this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(105, 16);
               this->label2->TabIndex = 4;
               this->label2->Text = L"Common Diff (d):";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(37, 128);
               this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(94, 16);
               this->label3->TabIndex = 5;
               this->label3->Text = L"Num of Terms:";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(37, 191);
               this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(45, 16);
               this->label4->TabIndex = 6;
               this->label4->Text = L"Result";
               // 
               // buttonCalculate
               // 
               this->buttonCalculate->Location = System::Drawing::Point(182, 154);
               this->buttonCalculate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonCalculate->Name = L"buttonCalculate";
               this->buttonCalculate->Size = System::Drawing::Size(100, 28);
               this->buttonCalculate->TabIndex = 7;
               this->buttonCalculate->Text = L"Calculate";
               this->buttonCalculate->UseVisualStyleBackColor = true;
               this->buttonCalculate->Click += gcnew System::EventHandler(this, &MainForm::buttonCalculate_Click);
               // 
               // labelResult
               // 
               this->labelResult->AutoSize = true;
               this->labelResult->Location = System::Drawing::Point(164, 191);
               this->labelResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelResult->Name = L"labelResult";
               this->labelResult->Size = System::Drawing::Size(0, 16);
               this->labelResult->TabIndex = 8;
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(379, 230);
               this->Controls->Add(this->labelResult);
               this->Controls->Add(this->buttonCalculate);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBoxNumberOfTerms);
               this->Controls->Add(this->textBoxCommonDifference);
               this->Controls->Add(this->textBoxFirstTerm);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->Name = L"MainForm";
               this->Text = L"Arithmetic Progression Sum Calculator";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
            // Parse input values
            double firstTerm = Double::Parse(textBoxFirstTerm->Text);
            double commonDifference = Double::Parse(textBoxCommonDifference->Text);
            int numberOfTerms = Int32::Parse(textBoxNumberOfTerms->Text);

            // Calculate the sum of the arithmetic progression
            double sum = (numberOfTerms * (2 * firstTerm + (numberOfTerms - 1) * commonDifference)) / 2;

            // Display the result
            labelResult->Text = "Sum of the terms: " + sum.ToString();
        }


};
}
