#pragma once

namespace PythagoreanNumbersApp {

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
    private: System::Windows::Forms::TextBox^ textBoxN;
    private: System::Windows::Forms::Button^ buttonPrint;
    private: System::Windows::Forms::ListBox^ listBoxPythagoreanNumbers;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
    private: System::Windows::Forms::Label^ label2;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxN = (gcnew System::Windows::Forms::TextBox());
               this->buttonPrint = (gcnew System::Windows::Forms::Button());
               this->listBoxPythagoreanNumbers = (gcnew System::Windows::Forms::ListBox());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->statusStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(17, 16);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(54, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Enter N:";
               // 
               // textBoxN
               // 
               this->textBoxN->Location = System::Drawing::Point(111, 12);
               this->textBoxN->Margin = System::Windows::Forms::Padding(4);
               this->textBoxN->Name = L"textBoxN";
               this->textBoxN->Size = System::Drawing::Size(132, 22);
               this->textBoxN->TabIndex = 1;
               // 
               // buttonPrint
               // 
               this->buttonPrint->Location = System::Drawing::Point(253, 10);
               this->buttonPrint->Margin = System::Windows::Forms::Padding(4);
               this->buttonPrint->Name = L"buttonPrint";
               this->buttonPrint->Size = System::Drawing::Size(100, 28);
               this->buttonPrint->TabIndex = 2;
               this->buttonPrint->Text = L"Print";
               this->buttonPrint->UseVisualStyleBackColor = true;
               this->buttonPrint->Click += gcnew System::EventHandler(this, &MainForm::buttonPrint_Click);
               // 
               // listBoxPythagoreanNumbers
               // 
               this->listBoxPythagoreanNumbers->FormattingEnabled = true;
               this->listBoxPythagoreanNumbers->ItemHeight = 16;
               this->listBoxPythagoreanNumbers->Location = System::Drawing::Point(21, 60);
               this->listBoxPythagoreanNumbers->Margin = System::Windows::Forms::Padding(4);
               this->listBoxPythagoreanNumbers->Name = L"listBoxPythagoreanNumbers";
               this->listBoxPythagoreanNumbers->Size = System::Drawing::Size(331, 244);
               this->listBoxPythagoreanNumbers->TabIndex = 3;
               this->listBoxPythagoreanNumbers->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBoxPythagoreanNumbers_SelectedIndexChanged);
               // 
               // statusStrip1
               // 
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
               this->statusStrip1->Location = System::Drawing::Point(0, 326);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Size = System::Drawing::Size(379, 22);
               this->statusStrip1->TabIndex = 4;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // toolStripStatusLabel1
               // 
               this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
               this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 16);
               this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel1_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(66, 38);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(230, 16);
               this->label2->TabIndex = 5;
               this->label2->Text = L"enter numbers separated by commas";
               // 
               // MainForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(379, 348);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->statusStrip1);
               this->Controls->Add(this->listBoxPythagoreanNumbers);
               this->Controls->Add(this->buttonPrint);
               this->Controls->Add(this->textBoxN);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"MainForm";
               this->Text = L"Pythagorean Numbers Printer";
               this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
               this->statusStrip1->ResumeLayout(false);
               this->statusStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void buttonPrint_Click(System::Object^ sender, System::EventArgs^ e) {
            // Clear the list box
            listBoxPythagoreanNumbers->Items->Clear();

            // Parse input value of N
            String^ inputText = textBoxN->Text;
            int N;
            if (!Int32::TryParse(inputText, N)) {
                toolStripStatusLabel1->Text = "Invalid input"; // Виведення помилки у випадку некоректного вводу
                return;
            }

            // Print Pythagorean numbers less than N
            for (int a = 1; a < N; ++a) {
                for (int b = a; b < N; ++b) {
                    int cSquared = a * a + b * b;
                    int c = (int)Math::Sqrt(cSquared);
                    if (c * c == cSquared && c < N) {
                        listBoxPythagoreanNumbers->Items->Add(String::Format("{0}, {1}, {2}", a, b, c));
                    }
                }
            }
        }
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void listBoxPythagoreanNumbers_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
