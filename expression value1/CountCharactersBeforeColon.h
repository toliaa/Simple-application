#pragma once

#include <string>
#include <msclr/marshal_cppstd.h>

#include <string>


namespace CharacterCountApp {

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
    private: System::Windows::Forms::TextBox^ textBoxInput;
    private: System::Windows::Forms::Button^ buttonCount;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxCount;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
               this->buttonCount = (gcnew System::Windows::Forms::Button());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBoxCount = (gcnew System::Windows::Forms::TextBox());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(13, 13);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(81, 13);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Enter a string:";
               // 
               // textBoxInput
               // 
               this->textBoxInput->Location = System::Drawing::Point(100, 10);
               this->textBoxInput->Name = L"textBoxInput";
               this->textBoxInput->Size = System::Drawing::Size(250, 20);
               this->textBoxInput->TabIndex = 1;
               // 
               // buttonCount
               // 
               this->buttonCount->Location = System::Drawing::Point(100, 37);
               this->buttonCount->Name = L"buttonCount";
               this->buttonCount->Size = System::Drawing::Size(75, 23);
               this->buttonCount->TabIndex = 2;
               this->buttonCount->Text = L"Count";
               this->buttonCount->UseVisualStyleBackColor = true;
               this->buttonCount->Click += gcnew System::EventHandler(this, &MainForm::buttonCount_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(13, 72);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(82, 13);
               this->label2->TabIndex = 3;
               this->label2->Text = L"Character count:";
               // 
               // textBoxCount
               // 
               this->textBoxCount->Location = System::Drawing::Point(100, 69);
               this->textBoxCount->Name = L"textBoxCount";
               this->textBoxCount->ReadOnly = true;
               this->textBoxCount->Size = System::Drawing::Size(100, 20);
               this->textBoxCount->TabIndex = 4;
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(362, 111);
               this->Controls->Add(this->textBoxCount);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->buttonCount);
               this->Controls->Add(this->textBoxInput);
               this->Controls->Add(this->label1);
               this->Name = L"MainForm";
               this->Text = L"Character Count";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonCount_Click(System::Object^ sender, System::EventArgs^ e) {
            // Get the input string from the text box
            String^ inputString = textBoxInput->Text;

            // Convert System::String to std::string
            std::string inputStdString = msclr::interop::marshal_as<std::string>(inputString);

            // Check if the input contains only digits and colons
            bool validInput = true;
            for (char c : inputStdString) {
                if (!isdigit(c) && c != ':') {
                    validInput = false;
                    break;
                }
            }

            if (!validInput) {
                MessageBox::Show("Invalid input! Please enter digits and colons only.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Find the position of the first colon (':') in the string
            size_t colonPosition = inputStdString.find(':');

            // Calculate the number of characters before the first colon
            int characterCount = (colonPosition != std::string::npos) ? colonPosition : inputStdString.length();

            // Display the character count
            textBoxCount->Text = characterCount.ToString();
        }
    };
}
