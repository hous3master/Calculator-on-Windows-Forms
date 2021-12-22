#pragma once
#include <iostream>
#include <string>
enum operation {multiplication, divition, addition, substraction, equal};
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			previous = "0";
			next = "";
			answer = 0;
			current_operation = addition;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		String^ previous;
		String^ next;
		int answer;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
		   operation current_operation;
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(190, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(8, 201);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 44);
			this->button6->TabIndex = 3;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(100, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(100, 251);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 44);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(8, 251);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 44);
			this->button9->TabIndex = 6;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 62);
			this->label1->TabIndex = 9;
			this->label1->Text = L"###############";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(190, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 44);
			this->button4->TabIndex = 5;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(100, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(190, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 44);
			this->button7->TabIndex = 8;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(8, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(8, 113);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 31);
			this->button10->TabIndex = 10;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(190, 113);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 31);
			this->button11->TabIndex = 11;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button12->Location = System::Drawing::Point(100, 113);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 31);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(8, 76);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 31);
			this->button13->TabIndex = 13;
			this->button13->Text = L"X";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(100, 76);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 31);
			this->button14->TabIndex = 14;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(190, 76);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 31);
			this->button15->TabIndex = 15;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(100, 301);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 44);
			this->button16->TabIndex = 16;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(282, 353);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(400, 700);
			this->MinimumSize = System::Drawing::Size(300, 400);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = next;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "1";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "2";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "3";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "5";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "6";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "7";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "8";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "9";
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "3";
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "5";
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "6";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "7";
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "9";
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "4";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	current_operation = operation::addition;
	previous = next;
	next = "";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int nexti, previousi = 0;
	for (int i = 0; i < next->Length; i++) {
		nexti += (int((next->ToCharArray())[i]) - 48) * pow(10, next->Length - i - 1);
	}
	for (int i = 0; i < previous->Length; i++) {
		previousi += (int((previous->ToCharArray())[i]) - 48) * pow(10, previous->Length - i - 1);
	}
	if (current_operation == operation::addition) {
		answer = previousi + nexti;
	}
	else if (current_operation == operation::substraction) {
		answer = previousi - nexti;
	}
	else if (current_operation == operation::multiplication) {
		answer = previousi * nexti;
	}
	else if (current_operation == operation::divition) {
		if (nexti != 0)
			answer = previousi / nexti;
		else
			answer = 0;
	}
	if (answer < 0) answer = 0;
	next = answer.ToString();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	current_operation = operation::substraction;
	previous = next;
	next = "";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	current_operation = operation::multiplication;
	previous = next;
	next = "";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	current_operation = operation::divition;
	previous = next;
	next = "";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	previous = "0";
	next = "";
	answer = 0;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (next->Length < 15) next += "0";
}
};
}
