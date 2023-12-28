#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker4;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker5;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker6;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button11;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker4 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker5 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker6 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Location = System::Drawing::Point(-3, -3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(445, 155);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 168);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 56);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(88, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 56);
			this->button4->TabIndex = 3;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(168, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 56);
			this->button5->TabIndex = 4;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 49);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(88, 240);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(168, 240);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 49);
			this->button8->TabIndex = 7;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 314);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(54, 51);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 314);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 51);
			this->button2->TabIndex = 9;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(168, 314);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 51);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(109, 375);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(112, 55);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(358, 326);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 47);
			this->button13->TabIndex = 13;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(358, 379);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(58, 47);
			this->button14->TabIndex = 14;
			this->button14->Text = L"%";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(360, 220);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(58, 47);
			this->button16->TabIndex = 16;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button17->Location = System::Drawing::Point(360, 158);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 56);
			this->button17->TabIndex = 18;
			this->button17->Text = L"—";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(360, 273);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 47);
			this->button15->TabIndex = 19;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(-3, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(431, 129);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = L"";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 375);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(54, 51);
			this->button11->TabIndex = 21;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 450);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Hello World",
			"My heading", MessageBoxButtons::OKCancel,
			MessageBoxIcon::Asterisk);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { 
		richTextBox1->Text += "1";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = "";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "+";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "*";
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "2";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "3";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "4";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "5";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "6";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "7";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "8";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "9";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "0";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "-";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "/";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text += "=";
	}
};
}
