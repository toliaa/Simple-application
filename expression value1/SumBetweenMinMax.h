#pragma once

namespace SequenceSumApp {

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
    private: System::Windows::Forms::TextBox^ textBoxSequence;
    private: System::Windows::Forms::Button^ buttonCalculate;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxResult;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxSequence = (gcnew System::Windows::Forms::TextBox());
               this->buttonCalculate = (gcnew System::Windows::Forms::Button());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(16, 18);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(125, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Enter the sequence:";
               // 
               // textBoxSequence
               // 
               this->textBoxSequence->Location = System::Drawing::Point(155, 15);
               this->textBoxSequence->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxSequence->Name = L"textBoxSequence";
               this->textBoxSequence->Size = System::Drawing::Size(207, 22);
               this->textBoxSequence->TabIndex = 1;
               // 
               // buttonCalculate
               // 
               this->buttonCalculate->Location = System::Drawing::Point(20, 65);
               this->buttonCalculate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonCalculate->Name = L"buttonCalculate";
               this->buttonCalculate->Size = System::Drawing::Size(343, 28);
               this->buttonCalculate->TabIndex = 2;
               this->buttonCalculate->Text = L"Calculate Sum";
               this->buttonCalculate->UseVisualStyleBackColor = true;
               this->buttonCalculate->Click += gcnew System::EventHandler(this, &MainForm::buttonCalculate_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(16, 114);
               this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(48, 16);
               this->label2->TabIndex = 3;
               this->label2->Text = L"Result:";
               // 
               // textBoxResult
               // 
               this->textBoxResult->Location = System::Drawing::Point(73, 111);
               this->textBoxResult->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxResult->Name = L"textBoxResult";
               this->textBoxResult->ReadOnly = true;
               this->textBoxResult->Size = System::Drawing::Size(288, 22);
               this->textBoxResult->TabIndex = 4;
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(379, 149);
               this->Controls->Add(this->textBoxResult);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->buttonCalculate);
               this->Controls->Add(this->textBoxSequence);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->Name = L"MainForm";
               this->Text = L"SumBetweenMinMax";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
            // Parse the input sequence
            array<String^>^ sequenceArray = textBoxSequence->Text->Split(',');
            array<int>^ sequence = gcnew array<int>(sequenceArray->Length);
            for (int i = 0; i < sequenceArray->Length; ++i) {
                sequence[i] = Int32::Parse(sequenceArray[i]->Trim());
            }

            // Find the minimum and maximum values
            int minVal = sequence[0];
            int maxVal = sequence[0];
            for (int i = 1; i < sequence->Length; ++i) {
                if (sequence[i] < minVal) {
                    minVal = sequence[i];
                }
                if (sequence[i] > maxVal) {
                    maxVal = sequence[i];
                }
            }

            // Calculate the sum of elements between minVal and maxVal (inclusive)
            int sum = 0;
            bool foundMinMax = false;
            for (int i = 0; i < sequence->Length; ++i) {
                if (sequence[i] == minVal || sequence[i] == maxVal) {
                    if (foundMinMax) {
                        break;
                    }
                    foundMinMax = true;
                }
                if (foundMinMax) {
                    sum += sequence[i];
                }
            }

            // Display the result
            textBoxResult->Text = sum.ToString();
        }
    };
}
