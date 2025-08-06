#pragma once
#include <stack>


#include "MyForm1.h"
#include "MyForm2.h"
//#include <sstream>

#define Pi 3.14159265358979;

 // Используется при корректировке размера шрифта вывода, если число слишком длиннае	

namespace Shablon {

	struct Leksema //Структура, описывающая любое число или операцию
	{
		char type; // 0 для чисел, "+" для операции сложения и т.д.
		double value; //Значение (только для чисел). У операций значение всегда "0"
	};

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button_ravno;

	private: System::Windows::Forms::Button^ button_zap;
	private: System::Windows::Forms::ComboBox^ comboBox_trigonometria;
	private: System::Windows::Forms::Button^ button_zero;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_umnogit;
	private: System::Windows::Forms::Button^ button_delenie;
	private: System::Windows::Forms::Button^ button_three;
	private: System::Windows::Forms::Button^ button_two;
	private: System::Windows::Forms::Button^ button_one;
	private: System::Windows::Forms::Button^ button_six;
	private: System::Windows::Forms::Button^ button_five;
	private: System::Windows::Forms::Button^ button_four;
	private: System::Windows::Forms::Button^ button_nine;
	private: System::Windows::Forms::Button^ button_eight;
	private: System::Windows::Forms::Button^ button_seven;
	private: System::Windows::Forms::Button^ button_otkrivskob;
	private: System::Windows::Forms::Button^ button_zakrivskob;
	private: System::Windows::Forms::Button^ button_udalitoneznak;
	private: System::Windows::Forms::ComboBox^ comboBox_prochee;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_main;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button_Stepen;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обАвтореToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ условиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;

















	private: System::Windows::Forms::TextBox^ textBox_main;



	public: const int Мин_Граница_Размера = 9; /// Помнит Границу с которой начинается изминение размера шрифта 
	
	public: void Удалить_один_символ();
	public: int getRang(char);
	public: bool Maths(std::stack <Leksema>&, std::stack <Leksema>&, Leksema&);
	public: double Ctg(double);
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->button_ravno = (gcnew System::Windows::Forms::Button());
			this->textBox_main = (gcnew System::Windows::Forms::TextBox());
			this->button_zap = (gcnew System::Windows::Forms::Button());
			this->comboBox_trigonometria = (gcnew System::Windows::Forms::ComboBox());
			this->button_zero = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_umnogit = (gcnew System::Windows::Forms::Button());
			this->button_delenie = (gcnew System::Windows::Forms::Button());
			this->button_three = (gcnew System::Windows::Forms::Button());
			this->button_two = (gcnew System::Windows::Forms::Button());
			this->button_one = (gcnew System::Windows::Forms::Button());
			this->button_six = (gcnew System::Windows::Forms::Button());
			this->button_five = (gcnew System::Windows::Forms::Button());
			this->button_four = (gcnew System::Windows::Forms::Button());
			this->button_nine = (gcnew System::Windows::Forms::Button());
			this->button_eight = (gcnew System::Windows::Forms::Button());
			this->button_seven = (gcnew System::Windows::Forms::Button());
			this->button_otkrivskob = (gcnew System::Windows::Forms::Button());
			this->button_zakrivskob = (gcnew System::Windows::Forms::Button());
			this->button_udalitoneznak = (gcnew System::Windows::Forms::Button());
			this->comboBox_prochee = (gcnew System::Windows::Forms::ComboBox());
			this->chart_main = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Stepen = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->условиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_main))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_ravno
			// 
			this->button_ravno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->button_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ravno->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ravno->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_ravno->Location = System::Drawing::Point(312, 151);
			this->button_ravno->Name = L"button_ravno";
			this->button_ravno->Size = System::Drawing::Size(94, 62);
			this->button_ravno->TabIndex = 3;
			this->button_ravno->TabStop = false;
			this->button_ravno->Text = L"=";
			this->button_ravno->UseVisualStyleBackColor = false;
			this->button_ravno->Click += gcnew System::EventHandler(this, &MyForm::button_ravno_Click);
			// 
			// textBox_main
			// 
			this->textBox_main->BackColor = System::Drawing::Color::White;
			this->textBox_main->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_main->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox_main->Location = System::Drawing::Point(29, 109);
			this->textBox_main->Multiline = true;
			this->textBox_main->Name = L"textBox_main";
			this->textBox_main->Size = System::Drawing::Size(388, 48);
			this->textBox_main->TabIndex = 4;
			this->textBox_main->Text = L"0";
			this->textBox_main->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_main->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_main_TextChanged);
			this->textBox_main->DoubleClick += gcnew System::EventHandler(this, &MyForm::textBox_main_DoubleClick);
			// 
			// button_zap
			// 
			this->button_zap->BackColor = System::Drawing::Color::White;
			this->button_zap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_zap->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zap->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_zap->Location = System::Drawing::Point(18, 423);
			this->button_zap->Name = L"button_zap";
			this->button_zap->Size = System::Drawing::Size(92, 62);
			this->button_zap->TabIndex = 6;
			this->button_zap->TabStop = false;
			this->button_zap->Text = L",";
			this->button_zap->UseVisualStyleBackColor = false;
			this->button_zap->Click += gcnew System::EventHandler(this, &MyForm::button_zap_Click);
			// 
			// comboBox_trigonometria
			// 
			this->comboBox_trigonometria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_trigonometria->ForeColor = System::Drawing::SystemColors::MenuText;
			this->comboBox_trigonometria->FormattingEnabled = true;
			this->comboBox_trigonometria->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"sin", L"cos", L"tan", L"ctg" });
			this->comboBox_trigonometria->Location = System::Drawing::Point(31, 163);
			this->comboBox_trigonometria->Name = L"comboBox_trigonometria";
			this->comboBox_trigonometria->Size = System::Drawing::Size(190, 30);
			this->comboBox_trigonometria->TabIndex = 7;
			this->comboBox_trigonometria->Text = L"Тригонометрия";
			this->comboBox_trigonometria->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox_trigonometria_TextChanged);
			// 
			// button_zero
			// 
			this->button_zero->BackColor = System::Drawing::Color::White;
			this->button_zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_zero->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zero->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_zero->Location = System::Drawing::Point(116, 423);
			this->button_zero->Name = L"button_zero";
			this->button_zero->Size = System::Drawing::Size(92, 62);
			this->button_zero->TabIndex = 8;
			this->button_zero->TabStop = false;
			this->button_zero->Text = L"0";
			this->button_zero->UseVisualStyleBackColor = false;
			this->button_zero->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::White;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_plus->Location = System::Drawing::Point(312, 219);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(92, 62);
			this->button_plus->TabIndex = 9;
			this->button_plus->TabStop = false;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::White;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_minus->Location = System::Drawing::Point(312, 287);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(92, 62);
			this->button_minus->TabIndex = 10;
			this->button_minus->TabStop = false;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_umnogit
			// 
			this->button_umnogit->BackColor = System::Drawing::Color::White;
			this->button_umnogit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_umnogit->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_umnogit->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_umnogit->Location = System::Drawing::Point(312, 355);
			this->button_umnogit->Name = L"button_umnogit";
			this->button_umnogit->Size = System::Drawing::Size(92, 62);
			this->button_umnogit->TabIndex = 11;
			this->button_umnogit->TabStop = false;
			this->button_umnogit->Text = L"*";
			this->button_umnogit->UseVisualStyleBackColor = false;
			this->button_umnogit->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_delenie
			// 
			this->button_delenie->BackColor = System::Drawing::Color::White;
			this->button_delenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_delenie->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delenie->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_delenie->Location = System::Drawing::Point(312, 423);
			this->button_delenie->Name = L"button_delenie";
			this->button_delenie->Size = System::Drawing::Size(92, 62);
			this->button_delenie->TabIndex = 12;
			this->button_delenie->TabStop = false;
			this->button_delenie->Text = L"/";
			this->button_delenie->UseVisualStyleBackColor = false;
			this->button_delenie->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_three
			// 
			this->button_three->BackColor = System::Drawing::Color::White;
			this->button_three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_three->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_three->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_three->Location = System::Drawing::Point(227, 403);
			this->button_three->Name = L"button_three";
			this->button_three->Size = System::Drawing::Size(92, 62);
			this->button_three->TabIndex = 13;
			this->button_three->TabStop = false;
			this->button_three->Text = L"3";
			this->button_three->UseVisualStyleBackColor = false;
			this->button_three->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_two
			// 
			this->button_two->BackColor = System::Drawing::Color::White;
			this->button_two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_two->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_two->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_two->Location = System::Drawing::Point(129, 403);
			this->button_two->Name = L"button_two";
			this->button_two->Size = System::Drawing::Size(92, 62);
			this->button_two->TabIndex = 14;
			this->button_two->TabStop = false;
			this->button_two->Text = L"2";
			this->button_two->UseVisualStyleBackColor = false;
			this->button_two->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_one
			// 
			this->button_one->BackColor = System::Drawing::Color::White;
			this->button_one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_one->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_one->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_one->Location = System::Drawing::Point(31, 403);
			this->button_one->Name = L"button_one";
			this->button_one->Size = System::Drawing::Size(92, 62);
			this->button_one->TabIndex = 15;
			this->button_one->TabStop = false;
			this->button_one->Text = L"1";
			this->button_one->UseVisualStyleBackColor = false;
			this->button_one->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_six
			// 
			this->button_six->BackColor = System::Drawing::Color::White;
			this->button_six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_six->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_six->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_six->Location = System::Drawing::Point(227, 335);
			this->button_six->Name = L"button_six";
			this->button_six->Size = System::Drawing::Size(92, 62);
			this->button_six->TabIndex = 16;
			this->button_six->TabStop = false;
			this->button_six->Text = L"6";
			this->button_six->UseVisualStyleBackColor = false;
			this->button_six->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_five
			// 
			this->button_five->BackColor = System::Drawing::Color::White;
			this->button_five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_five->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_five->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_five->Location = System::Drawing::Point(129, 335);
			this->button_five->Name = L"button_five";
			this->button_five->Size = System::Drawing::Size(92, 62);
			this->button_five->TabIndex = 17;
			this->button_five->TabStop = false;
			this->button_five->Text = L"5";
			this->button_five->UseVisualStyleBackColor = false;
			this->button_five->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_four
			// 
			this->button_four->BackColor = System::Drawing::Color::White;
			this->button_four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_four->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_four->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_four->Location = System::Drawing::Point(31, 335);
			this->button_four->Name = L"button_four";
			this->button_four->Size = System::Drawing::Size(92, 62);
			this->button_four->TabIndex = 18;
			this->button_four->TabStop = false;
			this->button_four->Text = L"4";
			this->button_four->UseVisualStyleBackColor = false;
			this->button_four->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_nine
			// 
			this->button_nine->BackColor = System::Drawing::Color::White;
			this->button_nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_nine->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_nine->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_nine->Location = System::Drawing::Point(214, 219);
			this->button_nine->Name = L"button_nine";
			this->button_nine->Size = System::Drawing::Size(92, 62);
			this->button_nine->TabIndex = 19;
			this->button_nine->TabStop = false;
			this->button_nine->Text = L"9";
			this->button_nine->UseVisualStyleBackColor = false;
			this->button_nine->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_eight
			// 
			this->button_eight->BackColor = System::Drawing::Color::White;
			this->button_eight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_eight->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_eight->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_eight->Location = System::Drawing::Point(129, 267);
			this->button_eight->Name = L"button_eight";
			this->button_eight->Size = System::Drawing::Size(92, 62);
			this->button_eight->TabIndex = 20;
			this->button_eight->TabStop = false;
			this->button_eight->Text = L"8";
			this->button_eight->UseVisualStyleBackColor = false;
			this->button_eight->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_seven
			// 
			this->button_seven->BackColor = System::Drawing::Color::White;
			this->button_seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_seven->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_seven->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_seven->Location = System::Drawing::Point(18, 219);
			this->button_seven->Name = L"button_seven";
			this->button_seven->Size = System::Drawing::Size(92, 62);
			this->button_seven->TabIndex = 21;
			this->button_seven->TabStop = false;
			this->button_seven->Text = L"7";
			this->button_seven->UseVisualStyleBackColor = false;
			this->button_seven->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_otkrivskob
			// 
			this->button_otkrivskob->BackColor = System::Drawing::Color::White;
			this->button_otkrivskob->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_otkrivskob->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_otkrivskob->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_otkrivskob->Location = System::Drawing::Point(31, 199);
			this->button_otkrivskob->Name = L"button_otkrivskob";
			this->button_otkrivskob->Size = System::Drawing::Size(92, 62);
			this->button_otkrivskob->TabIndex = 22;
			this->button_otkrivskob->TabStop = false;
			this->button_otkrivskob->Text = L"(";
			this->button_otkrivskob->UseVisualStyleBackColor = false;
			this->button_otkrivskob->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_zakrivskob
			// 
			this->button_zakrivskob->BackColor = System::Drawing::Color::White;
			this->button_zakrivskob->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_zakrivskob->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zakrivskob->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_zakrivskob->Location = System::Drawing::Point(129, 199);
			this->button_zakrivskob->Name = L"button_zakrivskob";
			this->button_zakrivskob->Size = System::Drawing::Size(92, 62);
			this->button_zakrivskob->TabIndex = 23;
			this->button_zakrivskob->TabStop = false;
			this->button_zakrivskob->Text = L")";
			this->button_zakrivskob->UseVisualStyleBackColor = false;
			this->button_zakrivskob->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_udalitoneznak
			// 
			this->button_udalitoneznak->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->button_udalitoneznak->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_udalitoneznak->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_udalitoneznak->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_udalitoneznak->Location = System::Drawing::Point(227, 199);
			this->button_udalitoneznak->Name = L"button_udalitoneznak";
			this->button_udalitoneznak->Size = System::Drawing::Size(92, 62);
			this->button_udalitoneznak->TabIndex = 24;
			this->button_udalitoneznak->TabStop = false;
			this->button_udalitoneznak->Text = L"CE";
			this->button_udalitoneznak->UseVisualStyleBackColor = false;
			this->button_udalitoneznak->Click += gcnew System::EventHandler(this, &MyForm::button_udalitoneznak_Click);
			// 
			// comboBox_prochee
			// 
			this->comboBox_prochee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_prochee->ForeColor = System::Drawing::SystemColors::MenuText;
			this->comboBox_prochee->FormattingEnabled = true;
			this->comboBox_prochee->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"log(", L"exp(", L"Pi" });
			this->comboBox_prochee->Location = System::Drawing::Point(227, 163);
			this->comboBox_prochee->Name = L"comboBox_prochee";
			this->comboBox_prochee->Size = System::Drawing::Size(190, 30);
			this->comboBox_prochee->TabIndex = 26;
			this->comboBox_prochee->Text = L"Прочее";
			this->comboBox_prochee->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox_prochee_TextChanged);
			// 
			// chart_main
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_main->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_main->Legends->Add(legend2);
			this->chart_main->Location = System::Drawing::Point(552, 67);
			this->chart_main->Name = L"chart_main";
			this->chart_main->Size = System::Drawing::Size(549, 330);
			this->chart_main->TabIndex = 27;
			this->chart_main->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_Stepen);
			this->groupBox1->Controls->Add(this->button_seven);
			this->groupBox1->Controls->Add(this->button_ravno);
			this->groupBox1->Controls->Add(this->button_minus);
			this->groupBox1->Controls->Add(this->button_umnogit);
			this->groupBox1->Controls->Add(this->button_plus);
			this->groupBox1->Controls->Add(this->button_delenie);
			this->groupBox1->Controls->Add(this->button_nine);
			this->groupBox1->Controls->Add(this->button_zero);
			this->groupBox1->Controls->Add(this->button_zap);
			this->groupBox1->Location = System::Drawing::Point(13, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(411, 494);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			// 
			// button_Stepen
			// 
			this->button_Stepen->BackColor = System::Drawing::Color::White;
			this->button_Stepen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Stepen->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Stepen->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_Stepen->Location = System::Drawing::Point(214, 423);
			this->button_Stepen->Name = L"button_Stepen";
			this->button_Stepen->Size = System::Drawing::Size(92, 62);
			this->button_Stepen->TabIndex = 22;
			this->button_Stepen->TabStop = false;
			this->button_Stepen->Text = L"^";
			this->button_Stepen->UseVisualStyleBackColor = false;
			this->button_Stepen->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(529, 411);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(90, 24);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"log(x)";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(621, 411);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(69, 24);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"x^3";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(723, 411);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(87, 24);
			this->checkBox3->TabIndex = 31;
			this->checkBox3->Text = L"x^0.5";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(621, 441);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(69, 24);
			this->checkBox4->TabIndex = 32;
			this->checkBox4->Text = L"x^2";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(723, 441);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(111, 24);
			this->checkBox5->TabIndex = 33;
			this->checkBox5->Text = L"x^(1/3)";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(529, 441);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(60, 24);
			this->checkBox6->TabIndex = 34;
			this->checkBox6->Text = L"|x|";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(529, 471);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(88, 24);
			this->checkBox7->TabIndex = 35;
			this->checkBox7->Text = L"sin(x)";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->Location = System::Drawing::Point(621, 471);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(92, 24);
			this->checkBox8->TabIndex = 36;
			this->checkBox8->Text = L"cos(x)";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->Location = System::Drawing::Point(723, 471);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(80, 24);
			this->checkBox9->TabIndex = 37;
			this->checkBox9->Text = L"tg(x)";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(530, 48);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(587, 355);
			this->groupBox2->TabIndex = 38;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"График";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1141, 30);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обАвтореToolStripMenuItem,
					this->условиеToolStripMenuItem, this->сохранитьToolStripMenuItem, this->выйтиToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// обАвтореToolStripMenuItem
			// 
			this->обАвтореToolStripMenuItem->Name = L"обАвтореToolStripMenuItem";
			this->обАвтореToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->обАвтореToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->обАвтореToolStripMenuItem->Text = L"Об авторе";
			this->обАвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обАвтореToolStripMenuItem_Click);
			// 
			// условиеToolStripMenuItem
			// 
			this->условиеToolStripMenuItem->Name = L"условиеToolStripMenuItem";
			this->условиеToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->условиеToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->условиеToolStripMenuItem->Text = L"Условие";
			this->условиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::условиеToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выйтиToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1141, 573);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->chart_main);
			this->Controls->Add(this->comboBox_prochee);
			this->Controls->Add(this->button_udalitoneznak);
			this->Controls->Add(this->button_zakrivskob);
			this->Controls->Add(this->button_otkrivskob);
			this->Controls->Add(this->button_eight);
			this->Controls->Add(this->button_four);
			this->Controls->Add(this->button_five);
			this->Controls->Add(this->button_six);
			this->Controls->Add(this->button_one);
			this->Controls->Add(this->button_two);
			this->Controls->Add(this->button_three);
			this->Controls->Add(this->comboBox_trigonometria);
			this->Controls->Add(this->textBox_main);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_main))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	///private: int Размер_шрифта = textBox_main->Font->Size;
	private: System::Void button_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
			
			String^ str;  // Хранит всю строку
			try
			{
				str = textBox_main->Text;
			}
			catch (...) /// Если не удалось значит мы достигли конца примера
			{
				MessageBox::Show("Ошибка, введены некорректные символы(Попытка считать введенное)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			//std::stringstream sstr; // { str };
			//sstr << str;

			int i = -1;
			wchar_t Ch; //Переменная, в которую будет записываться текущий обрабатываемый символ
			double value;
			
			//bool flag1 = false; // Нужен для того, чтобы программа смогла обработать ситуацию типа "5-3)", без "(".
			int col_otkrivaushix_skobok = 0;

			bool flag = true; //Нужен для того, чтобы программа смогла отличить (-5) от вычитания (2-5)


			std::stack<Leksema> Stack_n; //Стек с числами
			std::stack<Leksema> Stack_o; //Стек с операциями
			Leksema item; //Объект типа Leksema


			while (true) {
				i++;
				if (str->Length <= i) break; //Если достигнут конец строки, выходим из цикла

				Ch = str[i]; //Смотрим на первый символ

				if (Ch == ' ') { //Игнорирование пробелов
					//sstr.ignore();
					continue;
				}
				if (Ch == 's' || Ch == 'c' || Ch == 't' || Ch == 'e' || Ch == 'l') { //Если прочитана функция
					wchar_t foo[3]; //массив на 3 символа для определения типа прочитанной функции
					for (int k = 0; k < 3; k++) {
						try
						{
							Ch = str[i];
							foo[k] = Ch;

						}
						catch (...)
						{
							MessageBox::Show("Неверно введено выражение!(тригонометрия)", "Ошибка");
						}
						i++;
					}
					if (foo[0] == 's' && foo[1] == 'i' && foo[2] == 'n') { //Если прочитанная функция - синус
						item.type = 's';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
					if (foo[0] == 'c' && foo[1] == 'o' && foo[2] == 's') { //Если прочитанная функция - косинус
						item.type = 'c';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
					if (foo[0] == 't' && foo[1] == 'a' && foo[2] == 'n') { //Если прочитанная функция - тангенс
						item.type = 't';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
					if (foo[0] == 'c' && foo[1] == 't' && foo[2] == 'g') { //Если прочитанная функция - котангенс
						item.type = 'g';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
					if (foo[0] == 'e' && foo[1] == 'x' && foo[2] == 'p') { //Если прочитанная функция - экспонента
						item.type = 'e';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
					if (foo[0] == 'l' && foo[1] == 'o' && foo[2] == 'g') { //Если прочитанная функция - экспонента
						item.type = 'l';
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						continue;
					}
				}
				if (Ch == 'p') { //Если прочитано число Пи
					item.type = '0';
					item.value = Pi;
					Stack_n.push(item); //Число кладется в стек с числами
					flag = 0;
					//sstr.ignore();
					continue;
				}
				if (Ch >= '0' && Ch <= '9' || Ch == '-' && flag == 1) { //Если прочитано число
					//sstr >> value; ///Если flag = 1 должен считать следующее за ним число как единое целое (-...3) 

					String^ chislo = ""; // Нужне для объединения отдельных чисел(При считывании "Сh" в общее значение 3 4 5 -> 345
					String^ znak_viragenia = "";
					znak_viragenia = znak_viragenia + Ch;
					
					
					if (flag == 1 && Ch == '-')
					{
						i++;
						try
						{
							Ch = str[i];
						}
						catch (...) /// Если не удалось значит мы достигли конца примера
						{
							break;
						}
						//flag = 0;
					}
					
					while (true)
					{
						if (Ch >= '0' && Ch <= '9' || Ch == ',')
						{
							try
							{
								chislo = chislo + Ch;
							}
							catch (...)
							{
								MessageBox::Show("Ошибка!(Соединение цифр в chislo)", "Ошибка");
							}
						}
						else {
							i--;
							break; 
						}

						try
						{
							i++;
							Ch = str[i];
						}
						catch (...) /// Если не удалось значит мы достигли конца примера
						{
							break;
						}
					}
					
					try
					{
						value = Convert::ToDouble(chislo);
					}
					catch (...)
					{
						MessageBox::Show("Ошибка!(Перевод в дабл chislo)", "Ошибка"); 
					}

					if (flag == 1 && znak_viragenia[0] == '-')
					{
						value *= -1;
					}

					item.type = '0';
					item.value = value;
					Stack_n.push(item); //Число кладется в стек с числами
					flag = 0;
					continue;
				}
				if (Ch == '+' || Ch == '-' && flag == 0 || Ch == '*' || Ch == '/' || Ch == '^') { //Если прочитана операция
					if (Stack_o.size() == 0) { //Если стек с операциями пуст
						if (Stack_n.size() == 0) continue; /// Если есть операция, но нет для нее первого числа
						item.type = Ch;
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						//sstr.ignore();
						continue;
					}
					if (Stack_o.size() != 0 && getRang(Ch) > getRang(Stack_o.top().type)) { //Если стек с операциями НЕ пуст, но приоритет текущей операции выше верхней в стеке с операциями
						item.type = Ch;
						item.value = 0;
						Stack_o.push(item); //Операция кладется в стек с операциями
						//sstr.ignore();
						continue;
					}
					if (Stack_o.size() != 0 && getRang(Ch) <= getRang(Stack_o.top().type)) {//Если стек с операциями НЕ пуст, но приоритет текущей операции ниже либо равен верхней в стеке с операциями
						if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
							return;
						}
						i--;
						continue;
					}
				}
				if (Ch == '(') { //Если прочитана открывающаяся скобка
					item.type = Ch;
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					//sstr.ignore();
					col_otkrivaushix_skobok++;
					//flag1 = true;
					flag = true;
					continue;
				}
				if (Ch == ')') { //Если прочитана закрывающаяся скобка
					if (col_otkrivaushix_skobok > 0) // Если есть открывающая скобка
					{
						col_otkrivaushix_skobok--;
						while (Stack_o.top().type != '(') {
							if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
								/*try
								{
									Stack_o.pop();
									continue;
								}
								catch (...)
								{
									system("pause");
									return 0;
								}*/

								return;
							}
							else continue; //Если все хорошо
						}
						Stack_o.pop();
					}
					//sstr.ignore();
					continue;
				}
				else { //Если прочитан какой-то странный символ
					MessageBox::Show("Неверно введено выражение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

			}
			while (Stack_o.size() !=
				0) { //Вызываем матем. функцию до тех пор, пока в стеке с операциями не будет 0 элементов
				if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
					return;
				}
			}
			textBox_main->Text =  Convert::ToString(Stack_n.top().value); //Выводим ответ
		


	}
	private: System::Void comboBox_trigonometria_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (comboBox_trigonometria->FindString(comboBox_trigonometria->Text) != -1)
		{
			if (textBox_main->Text == "0") textBox_main->Text = "";
			{
				
			}
			if (comboBox_trigonometria->Text == "cos") {
				textBox_main->Text = textBox_main->Text + "cos(";
				return;
			}
			if (comboBox_trigonometria->Text == "sin") {
				textBox_main->Text = textBox_main->Text + "sin(";
				return;
			}
			if (comboBox_trigonometria->Text == "tan") {
				textBox_main->Text = textBox_main->Text + "tan(";
				return;
			}
			if (comboBox_trigonometria->Text == "ctg")  textBox_main->Text = textBox_main->Text + "ctg(";
		}
}
private: System::Void button_zap_Click(System::Object^ sender, System::EventArgs^ e) {
	bool Zap = true; //Хранить можно ли ставить запятую после всей проверок 

	String^ str; // Хранит всю строку
	try
	{
		str = textBox_main->Text;
	}
	catch (...) /// Если не удалось значит мы достигли конца примера
	{
		MessageBox::Show("Ошибка, введены некорректные символы(Попытка считать введенное)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	wchar_t Ch;  //Переменная, в которую будет записываться текущий обрабатываемый символ
	int i = -1;


	while (true)
	{
		i++;
		if (str->Length <= i) break; //Если достигнут конец строки, выходим из цикла

		Ch = str[i]; //Смотрим на первый символ

		if (Ch == ' ') { //Игнорирование пробелов
			continue;
		}

		if (Ch == ',') Zap = false; /// Если найдена запятая то вторую поставить нельзя

		if (Ch == '+' || Ch == '-' || Ch == '*' || Ch == '/' || Ch == '^' || Ch == 's' || Ch == 'c' || Ch == 't' || Ch == 'e' || Ch == 'l' || Ch == '(' || Ch == ')')
		{
			Zap = true;
			textBox_main->Text = textBox_main->Text + "0";
		}
	}


	if (Zap) textBox_main->Text = textBox_main->Text + ","; // Если все хорошо дописать запятую, иначе кнопка ничего не сделает
}
private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox_main->Text == "0") textBox_main->Text = "";
	
	Button^ button = safe_cast<Button^>(sender);
	if ((button->Text == "+" || button->Text == "-" || button->Text == "*" || button->Text == "/" || button->Text == "^") && ((textBox_main->Text->LastIndexOf(button->Text) == textBox_main->Text->Length - 1) || (textBox_main->Text->LastIndexOf("+") == textBox_main->Text->Length - 1) || (textBox_main->Text->LastIndexOf('-') == textBox_main->Text->Length - 1) || (textBox_main->Text->LastIndexOf('*') == textBox_main->Text->Length - 1) || (textBox_main->Text->LastIndexOf('/') == textBox_main->Text->Length - 1) || (textBox_main->Text->LastIndexOf('^') == textBox_main->Text->Length - 1)))
	{
		Удалить_один_символ();
	}
	textBox_main->Text = textBox_main->Text + button->Text;
}
private: System::Void button_udalitoneznak_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String^ str;  // Хранит всю строку
	try
	{
		str = textBox_main->Text;
	}
	catch (...) /// Если не удалось значит мы достигли конца примера
	{
		MessageBox::Show("Ошибка, введены некорректные символы(Попытка считать введенное)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	*/
	Удалить_один_символ();
	if (textBox_main->Text == "") textBox_main->Text = "0";
}
	private: System::Void comboBox_prochee_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_main->Text == "0") textBox_main->Text = "";
		if (comboBox_prochee->FindString(comboBox_prochee->Text) != -1)
		{
			if (comboBox_prochee->Text == "exp(")  textBox_main->Text = textBox_main->Text + "exp(";
			if (comboBox_prochee->Text == "log(")  textBox_main->Text = textBox_main->Text + "log(";
			if (comboBox_prochee->Text == "Pi")  textBox_main->Text = textBox_main->Text + "p";
		}
	}
private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ checkBox = safe_cast<CheckBox^>(sender);

	if (checkBox->Checked) // Если стоит галочка
	{
		chart_main->Series->Add(checkBox->Text);
		chart_main->Series[checkBox->Text]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

		if (checkBox->Text == "log(x)")
		{
			for (int i = 1; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, log(i));
			}
			return;
		}
		if (checkBox->Text == "x^3")
		{
			for (int i = -3; i <= 3; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, pow(i,3));
			}
			return;
		}
		if (checkBox->Text == "x^0.5")
		{
			for (int i = 0; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, sqrt(i));
			}
			return;
		}
		if (checkBox->Text == "|x|")
		{
			for (int i = -10; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, Math::Abs(i));
			}
			return;
		}
		if (checkBox->Text == "x^2")
		{
			for (int i = -3; i <= 3; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, pow(i, 2));
			}
			return;
		}
		if (checkBox->Text == "x^(1/3)")
		{
			for (int i = -10; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, pow(i, 1./3));
			}
			return;
		}
		if (checkBox->Text == "sin(x)")
		{
			for (int i = -10; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, sin(i));
			}
			return;
		}
		if (checkBox->Text == "cos(x)")
		{
			for (int i = -10; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, cos(i));
			}
			return;
		}
		if (checkBox->Text == "tg(x)")
		{
			for (int i = -10; i <= 10; i++)
			{
				chart_main->Series[checkBox->Text]->Points->AddXY(i, tan(i));
			}
			return;
		}
	}
	else
	{
		try
		{
			chart_main->Series[checkBox->Text]->Points->Clear();
			chart_main->Series->Remove(chart_main->Series[checkBox->Text]); //Add();
		}
		catch (...)
		{
			MessageBox::Show("Ошибка,(Попытка удалить график)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
}
private: System::Void textBox_main_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	textBox_main->Text = "0";
}
private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ r = gcnew MyForm1();
	r->ShowDialog();
}
private: System::Void условиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ rl = gcnew MyForm2();
	rl->ShowDialog();
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "png files (*.png)|*.png";
	saveFileDialog1->ShowDialog(); //Нужно выбрать место для создания файла, не папку
	String^ selectedFilePath = saveFileDialog1->FileName; // Получает путь к файлу

	try
	{
		chart_main->SaveImage(selectedFilePath, ChartImageFormat::Png);
	}
	catch (...)
	{
		return;
	}
}
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox_main_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

	/////
	if (textBox_main->Text->Length >= Мин_Граница_Размера && textBox_main->Text->Length <= Мин_Граница_Размера + 10)
	{
		textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", textBox_main->Font->Size - 1, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		return;
	}
	if (textBox_main->Text->Length > Мин_Граница_Размера + 19)  {
		textBox_main->Text = "0"; 
		MessageBox::Show("Превышена допустимая длина выражения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", 20.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204))); // На месте 20.2F начальный размер шрифта
		return;
	}
	if (textBox_main->Text->Length < 9) /// Возвращает стандартный размер строки после вывода ответа
	{
		textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", 20.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204))); // На месте 20.2F начальный размер шрифта
		return;
	}
	///// Работа со шрифтом
}
};
}
