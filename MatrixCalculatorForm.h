#pragma once
#include "MatrixCalculator.h"
#include <string>

namespace MatrixCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MatrixCalculatorForm
	/// </summary>
	public ref class MatrixCalculatorForm : public System::Windows::Forms::Form
	{
	public:
		MatrixCalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		// Проверка. Включен ли чекбокс на число
		bool Check_Number() {
			if (checkBox1->Checked == true) {
				MessageBox::Show("Ошибка. Нельзя произвести данную операцию с числом.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 1;
			}
			return 0;
		}
		// Проверка равенства матриц
		bool Check_Matrix_Dimensions() {
			if ((dataGridView1->RowCount == dataGridView2->RowCount) && (dataGridView1->ColumnCount == dataGridView2->ColumnCount)) {
				return 1;
			}		
			else {
				MessageBox::Show("Ошибка. Матрицы разных размеров.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 0;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MatrixCalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  SubstractionButton;
	private: System::Windows::Forms::Button^  AdditionButton;
	private: System::Windows::Forms::Button^  MultiplyButton;
	private: System::Windows::Forms::Button^  EquatingButton;
	private: System::Windows::Forms::Button^  CheckEqualityButton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->SubstractionButton = (gcnew System::Windows::Forms::Button());
			this->AdditionButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->EquatingButton = (gcnew System::Windows::Forms::Button());
			this->CheckEqualityButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(520, 202);
			this->dataGridView1->TabIndex = 44;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(12, 226);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(520, 204);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView3->CausesValidation = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(12, 440);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(520, 198);
			this->dataGridView3->TabIndex = 2;
			// 
			// SubstractionButton
			// 
			this->SubstractionButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->SubstractionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SubstractionButton->Location = System::Drawing::Point(615, 138);
			this->SubstractionButton->Name = L"SubstractionButton";
			this->SubstractionButton->Size = System::Drawing::Size(64, 113);
			this->SubstractionButton->TabIndex = 3;
			this->SubstractionButton->Text = L"-";
			this->SubstractionButton->UseVisualStyleBackColor = false;
			this->SubstractionButton->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::SubstractionButton_Click);
			// 
			// AdditionButton
			// 
			this->AdditionButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->AdditionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AdditionButton->Location = System::Drawing::Point(615, 12);
			this->AdditionButton->Name = L"AdditionButton";
			this->AdditionButton->Size = System::Drawing::Size(64, 113);
			this->AdditionButton->TabIndex = 4;
			this->AdditionButton->Text = L"+";
			this->AdditionButton->UseVisualStyleBackColor = false;
			this->AdditionButton->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::AdditionButton_Click);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultiplyButton->Location = System::Drawing::Point(615, 264);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(64, 113);
			this->MultiplyButton->TabIndex = 5;
			this->MultiplyButton->Text = L"*";
			this->MultiplyButton->UseVisualStyleBackColor = false;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::MultiplyButton_Click);
			// 
			// EquatingButton
			// 
			this->EquatingButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EquatingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EquatingButton->Location = System::Drawing::Point(615, 394);
			this->EquatingButton->Name = L"EquatingButton";
			this->EquatingButton->Size = System::Drawing::Size(64, 113);
			this->EquatingButton->TabIndex = 6;
			this->EquatingButton->Text = L"=";
			this->EquatingButton->UseVisualStyleBackColor = false;
			this->EquatingButton->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::EquatingButton_Click);
			// 
			// CheckEqualityButton
			// 
			this->CheckEqualityButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->CheckEqualityButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CheckEqualityButton->Location = System::Drawing::Point(615, 524);
			this->CheckEqualityButton->Name = L"CheckEqualityButton";
			this->CheckEqualityButton->Size = System::Drawing::Size(64, 113);
			this->CheckEqualityButton->TabIndex = 7;
			this->CheckEqualityButton->Text = L"=\?";
			this->CheckEqualityButton->UseVisualStyleBackColor = false;
			this->CheckEqualityButton->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::CheckEqualityButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(538, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 26);
			this->button1->TabIndex = 11;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(574, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 26);
			this->button2->TabIndex = 12;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(538, 168);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(71, 24);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MatrixCalculatorForm::textBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(538, 26);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(71, 24);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MatrixCalculatorForm::textBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Location = System::Drawing::Point(574, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 26);
			this->button3->TabIndex = 15;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->Location = System::Drawing::Point(538, 47);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 26);
			this->button4->TabIndex = 14;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(538, 244);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(71, 24);
			this->textBox3->TabIndex = 22;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MatrixCalculatorForm::textBox3_TextChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->Location = System::Drawing::Point(574, 266);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 26);
			this->button5->TabIndex = 21;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->Location = System::Drawing::Point(538, 265);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 27);
			this->button6->TabIndex = 20;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(538, 383);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(71, 24);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MatrixCalculatorForm::textBox4_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button7->Location = System::Drawing::Point(574, 404);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 26);
			this->button7->TabIndex = 18;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button8->Location = System::Drawing::Point(538, 404);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 26);
			this->button8->TabIndex = 17;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(543, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Столбцы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(543, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Столбцы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(543, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 17);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Строки";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(543, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Строки";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(538, 298);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 21);
			this->checkBox1->TabIndex = 39;
			this->checkBox1->Text = L"Число";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MatrixCalculatorForm::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(157, 296);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(244, 26);
			this->textBox5->TabIndex = 40;
			this->textBox5->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(538, 440);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 197);
			this->button9->TabIndex = 41;
			this->button9->Text = L"Сохранить";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(538, 325);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(71, 32);
			this->button10->TabIndex = 42;
			this->button10->Text = L"Загрузить";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(538, 113);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(71, 32);
			this->button11->TabIndex = 43;
			this->button11->Text = L"Загрузить";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MatrixCalculatorForm::button11_Click);
			// 
			// MatrixCalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(689, 649);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CheckEqualityButton);
			this->Controls->Add(this->EquatingButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->AdditionButton);
			this->Controls->Add(this->SubstractionButton);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->Name = L"MatrixCalculatorForm";
			this->Text = L"Матричный калькулятор";
			this->Load += gcnew System::EventHandler(this, &MatrixCalculatorForm::MatrixCalculatorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
//Загрузка из файла
private: System::Void MatrixCalculatorForm_Load(System::Object^  sender, System::EventArgs^  e);
//{
//	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
//	int count = 0, j = 0;
//	for each(String^ str in lines) {
//		if (count == 0) {
//			dataGridView1->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
//			dataGridView1->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
//		}
//		else {
//			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
//				dataGridView1->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
//			}
//			j++;
//		}
//		count++;
//	}
//	textBox2->Text = Convert::ToString(dataGridView1->ColumnCount);
//	textBox1->Text = Convert::ToString(dataGridView1->RowCount);
//}
//Вычитание
private: System::Void SubstractionButton_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	// Проверка, если чекбокс активен
//	if (Check_Number() == true)
//		return;
//	if (Check_Matrix_Dimensions() == 1) { // Проверка, совпадают ли размерности матриц																																																																								
//		using namespace std;
//		int count = 0;
//		// Проверка, введены ли недопустимые символы
//		for (int i = 0; i < dataGridView1->RowCount; i++) {
//			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else{
//					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < dataGridView2->RowCount; i++) {
//			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		// Если нет дробных чисел
//		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
//			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array3.Substraction(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//			dataGridView3->RowCount = dataGridView1->RowCount;
//			dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//			delete array3.Array;
//		}
//		// Если дробные числа есть
//		else {
//			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array3.Substraction(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//			dataGridView3->RowCount = dataGridView1->RowCount;
//			dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//			delete array3.Array;
//		}
//	}
//}
//Сложение
private: System::Void AdditionButton_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	// Проверка, если чекбокс активен
//	if (Check_Number() == true)
//		return;
//	if (Check_Matrix_Dimensions() == 1) { // Проверка, совпадают ли размерности матриц
//		using namespace std;
//		int count = 0;
//		// Проверка, введены ли недопустимые символы
//		for (int i = 0; i < dataGridView1->RowCount; i++) {
//			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < dataGridView2->RowCount; i++) {
//			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		// Если	дробных чисел нет
//		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)){
//			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array3.Addition(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//			dataGridView3->RowCount = dataGridView1->RowCount;
//			dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//			delete array3.Array;
//		}
//		// Если дробные числа есть
//		else{
//			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array3.Addition(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//			dataGridView3->RowCount = dataGridView1->RowCount;
//			dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//			delete array3.Array;			
//		}		
//	}
//}
//Умножение
private: System::Void MultiplyButton_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	using namespace std;
//	int count1 = 0;
//	int count2 = 0;
//	Single test;
//	Int32 test2;
//
//	// Проверка, введены ли недопустимые символы
//	for (int i = 0; i < dataGridView1->RowCount; i++) {
//		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//			if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
//				MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//				return;
//			}
//			else {
//				if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
//					count1++;
//				}
//			}
//		}
//	}
//	if (checkBox1->Checked == false) {
//		if (dataGridView1->ColumnCount != dataGridView2->RowCount) {
//			MessageBox::Show("Ошибка. Матрицы разных размеров.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//			return;
//		}
//		for (int i = 0; i < dataGridView2->RowCount; i++) {
//			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
//						count2++;
//					}
//				}
//			}
//		}
//	}
//	else {
//		if (Single::TryParse(Convert::ToString(textBox5->Text), test) == false) {
//			MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//			return;
//		}
//	}
//		// Если дробных чисел нет
//		if (count1 == (dataGridView1->ColumnCount * dataGridView1->RowCount)) {
//			if (checkBox1->Checked == false) {
//				if (count2 == (dataGridView2->ColumnCount * dataGridView2->RowCount)) {
//					Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//					Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					for (int i = 0; i < dataGridView2->RowCount; i++) {
//						for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//							array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);
//
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView2->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//					delete array1.Array;
//					delete array2.Array;
//					delete array3.Array;
//				}
//				else {
//					Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//					Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					for (int i = 0; i < dataGridView2->RowCount; i++) {
//						for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//							array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);
//
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView2->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//					delete array1.Array;
//					delete array2.Array;
//					delete array3.Array;
//				}
//			}
//			else {
//				if (Int32::TryParse(Convert::ToString(textBox5->Text), test2) == true) {
//					Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <int> number(0);
//					Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					number.Number = Convert::ToInt32(textBox5->Text);
//					number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//					delete array1.Array;
//					delete array3.Array;
//				}
//				else {
//					Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <float> number(0);
//					Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					number.Number = Convert::ToSingle(textBox5->Text);
//					number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//					delete array1.Array;
//					delete array3.Array;
//				}
//			}
//		}
//		// Если дробные числа есть
//		if (count1 != (dataGridView1->ColumnCount * dataGridView1->RowCount)) {
//			if (checkBox1->Checked == false) {
//					Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//					Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					for (int i = 0; i < dataGridView2->RowCount; i++) {
//						for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//							array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);
//
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView2->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//
//					delete array1.Array;
//					delete array2.Array;
//					delete array3.Array;
//			}
//			else {
//					Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//					Matrix_Calculator <float> number(0);
//					Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//					for (int i = 0; i < dataGridView1->RowCount; i++) {
//						for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//							array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//						}
//					}
//
//					number.Number = Convert::ToSingle(textBox5->Text);
//					number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
//					dataGridView3->RowCount = dataGridView1->RowCount;
//					dataGridView3->ColumnCount = dataGridView1->ColumnCount;
//
//					for (int i = 0; i < dataGridView3->RowCount; i++) {
//						for (int j = 0; j < dataGridView3->ColumnCount; j++) {
//							dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
//						}
//					}
//					delete array1.Array;
//					delete array3.Array;
//			}
//		}
//}
//Приравнивание
private: System::Void EquatingButton_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	if (Check_Number() == true)
//		return;
//	if (Check_Matrix_Dimensions() == 1) { // Проверка, равны ли матрицы
//		using namespace std;
//		int count = 0;
//		// Проверка, введены ли недопустимые символы
//		for (int i = 0; i < dataGridView1->RowCount; i++) {
//			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < dataGridView2->RowCount; i++) {
//			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		// Если дробных чисел нет
//		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
//			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array1.Equality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView2->Rows[i]->Cells[j]->Value = array1.Array[i][j];
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//		}
//		// Если дробные числа есть
//		else {
//			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			array1.Equality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					dataGridView2->Rows[i]->Cells[j]->Value = array1.Array[i][j];
//				}
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//		}
//	}
//}
//Проверка равенства
private: System::Void CheckEqualityButton_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	// Проверка, если чекбокс активен
//	if (Check_Number() == true)
//		return;
//	// Если размерности матриц одинаковые
//	if ((dataGridView1->RowCount == dataGridView2->RowCount) && (dataGridView1->ColumnCount == dataGridView2->ColumnCount)) {
//		using namespace std;
//		int count = 0;
//		for (int i = 0; i < dataGridView1->RowCount; i++) {
//			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				// Проверека, введены ли недопустимые символы
//				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < dataGridView2->RowCount; i++) {
//			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//				Single test;
//				Int32 test2;
//				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
//					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
//					return;
//				}
//				else {
//					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
//						count++;
//					}
//				}
//			}
//		}
//		// Если дробных чисел нет
//		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
//			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			if (array3.CheckEquality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount) == 1) {
//				MessageBox::Show("Матрицы равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
//			}
//			else {
//				MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//		}
//		// Если дробные числа есть																																																																																																																																																												
//		else {
//			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
//			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
//			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);
//
//			for (int i = 0; i < dataGridView1->RowCount; i++) {
//				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
//					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			for (int i = 0; i < dataGridView2->RowCount; i++) {
//				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
//					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
//				}
//			}
//
//			if (array3.CheckEquality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount) == 1) {
//				MessageBox::Show("Матрицы равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
//			}
//			else {
//				MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
//			}
//
//			delete array1.Array;
//			delete array2.Array;
//		}
//	}
//	else {
//		MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
//	}
//}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox1->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) + 1);
//}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox1->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) - 1);
//}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox2->Text = Convert::ToString(Convert::ToInt32(textBox2->Text) + 1);
//}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox2->Text = Convert::ToString(Convert::ToInt32(textBox2->Text) - 1);
//}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox4->Text = Convert::ToString(Convert::ToInt32(textBox4->Text) + 1);
//}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox4->Text = Convert::ToString(Convert::ToInt32(textBox4->Text) - 1);
//}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox3->Text = Convert::ToString(Convert::ToInt32(textBox3->Text) + 1);
//}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	textBox3->Text = Convert::ToString(Convert::ToInt32(textBox3->Text) - 1);
//}
// Изменение кол-ва строк 1 таблицы
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e);
//{
//	if ((Convert::ToInt32(textBox1->Text) > 0) && (Convert::ToInt32(textBox1->Text) < 26))
//		dataGridView1->RowCount = Convert::ToInt32(textBox1->Text);
//	if (Convert::ToInt32(textBox1->Text) == 25) {
//		button1->Visible = false;
//	}
//	else {
//		button1->Visible = true;
//	}
//	if (Convert::ToInt32(textBox1->Text) == 0) {
//		button2->Visible = false;
//	}
//	else {
//		button2->Visible = true;
//	}
//}
// Изменение кол-ва колонн 1 таблицы
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
//{
//	if ((Convert::ToInt32(textBox2->Text) > 0) && (Convert::ToInt32(textBox2->Text) < 26))
//		dataGridView1->ColumnCount = Convert::ToInt32(textBox2->Text);
//	if (Convert::ToInt32(textBox2->Text) == 25) {
//		button4->Visible = false;
//	}
//	else {
//		button4->Visible = true;
//	}
//	if (Convert::ToInt32(textBox2->Text) == 0) {
//		button3->Visible = false;
//	}
//	else {
//		button3->Visible = true;
//	}
//}
// Изменение кол-ва строк 2 таблицы
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e);
//{
//	if ((Convert::ToInt32(textBox4->Text) > 0) && (Convert::ToInt32(textBox4->Text) < 26))
//		dataGridView2->RowCount = Convert::ToInt32(textBox4->Text);
//	if (Convert::ToInt32(textBox4->Text) == 25) {
//		button8->Visible = false;
//	}
//	else {
//		button8->Visible = true;
//	}
//	if (Convert::ToInt32(textBox4->Text) == 0) {
//		button7->Visible = false;
//	}
//	else {
//		button7->Visible = true;
//	}
//}
// Изменение кол-ва колонн 2 таблицы
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
//{
//	if ((Convert::ToInt32(textBox3->Text) > 0) && (Convert::ToInt32(textBox3->Text) < 26))
//		dataGridView2->ColumnCount = Convert::ToInt32(textBox3->Text);
//	if (Convert::ToInt32(textBox3->Text) == 25) {
//		button6->Visible = false;
//	}
//	else {
//		button6->Visible = true;
//	}
//	if (Convert::ToInt32(textBox3->Text) == 0) {
//		button5->Visible = false;
//	}
//	else {
//		button5->Visible = true;
//	}
//}
// Действия при изменении значения чекбокса
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
//{
//	if (checkBox1->Checked == true) {
//		textBox5->Visible = true;
//		dataGridView2->Visible = false;
//		textBox4->Visible = false;
//		textBox3->Visible = false;
//		label2->Visible = false;
//		label4->Visible = false;
//		button5->Visible = false;
//		button6->Visible = false;
//		button7->Visible = false;
//		button8->Visible = false;
//		button10->Visible = false;
//	}
//	else {
//		textBox5->Visible = false;
//		dataGridView2->Visible = true;
//		textBox4->Visible = true;
//		textBox3->Visible = true;
//		label2->Visible = true;
//		label4->Visible = true;
//		button5->Visible = true;
//		button6->Visible = true;
//		button7->Visible = true;
//		button8->Visible = true;
//		button10->Visible = true;
//	}
//}
// Кнопка сохранения результата в файл
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	array<String^>^ lines = gcnew array<String^>(dataGridView3->RowCount + 1 - (dataGridView3->AllowUserToAddRows ? 1 : 0));
//	array<String^>^ values = gcnew array<String^>(dataGridView3->ColumnCount);
//	int row = dataGridView3->RowCount, column = dataGridView3->ColumnCount;
//
//	lines[0] = Convert::ToString(row) + " " + Convert::ToString(column);
//	//IO::File::WriteAllLines("Result.txt", lines, System::Text::Encoding::UTF8);
//
//	for (int i = 1; i < lines->Length; i++) {
//		for (int j = 0; j < dataGridView3->ColumnCount; j++)
//			values[j] = (String^)Convert::ToString(dataGridView3->Rows[i-1]->Cells[j]->Value);
//		lines[i] = String::Join(L" ", values);
//	}
//	IO::File::WriteAllLines("Result.txt", lines, System::Text::Encoding::UTF8);
//}
// Кнопка загрузки матрицы из файла в первую матрицу
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	dataGridView1->Rows->Clear();
//	textBox1->Text = "0";
//	textBox2->Text = "0";
//	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
//	int count = 0, j = 0;
//	for each(String^ str in lines) {
//		if (count == 0) {
//			dataGridView1->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
//			dataGridView1->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
//		}
//		else {
//			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
//				dataGridView1->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
//			}
//			j++;
//		}
//		count++;
//	}
//	textBox2->Text = Convert::ToString(dataGridView1->ColumnCount);
//	textBox1->Text = Convert::ToString(dataGridView1->RowCount);
//}
// Кнопка загрузки матрицы из файла во вторую таблицу
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e);
//{
//	dataGridView2->Rows->Clear();
//	textBox3->Text = "0";
//	textBox4->Text = "0";
//	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
//	int count = 0, j = 0;
//	for each(String^ str in lines) {
//		if (count == 0) {
//			dataGridView2->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
//			dataGridView2->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
//		}
//		else {
//			for (int i = 0; i < dataGridView2->ColumnCount; i++) {
//				dataGridView2->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
//			}
//			j++;
//		}
//		count++;
//	}
//	textBox3->Text = Convert::ToString(dataGridView1->ColumnCount);
//	textBox4->Text = Convert::ToString(dataGridView1->RowCount);
//}
};
}