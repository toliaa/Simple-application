#pragma once

namespace expressionvalue1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class ArithmeticProgressionForm : public System::Windows::Forms::Form
	{
	public:
		ArithmeticProgressionForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArithmeticProgressionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter first term";
			this->label1->Click += gcnew System::EventHandler(this, &ArithmeticProgressionForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter difference";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter number of terms";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(155, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ArithmeticProgressionForm::button1_Click);
			// 
			// MyForm1
			// 
			this->AccessibleDescription = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm1";
			this->Text = L"Arithmetic Progression Sum";
			this->TransparencyKey = System::Drawing::Color::SteelBlue;
			this->Load += gcnew System::EventHandler(this, &ArithmeticProgressionForm::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
