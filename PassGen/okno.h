#pragma once
#include <random>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <cstring>
#include <msclr\marshal_cppstd.h>
#include <algorithm>

namespace PassGen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct element
	{
		std::string site;
		std::string login;
		std::string password;
		element *next;
	};

	element *head = NULL;
	std::string user;

	/// <summary>
	/// Podsumowanie informacji o okno
	/// </summary>
	public ref class okno : public System::Windows::Forms::Form
	{
	public:
		okno(void)
		{
			InitializeComponent();
			hideMainMenu();
			setStartValues();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~okno()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private:

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(okno::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(17, 142);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(149, 23);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Upper case: A-Z";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->checkBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(17, 171);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(149, 23);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Lower case: a-z";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->checkBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(17, 203);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(105, 23);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"Digits: 0-9";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->checkBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(17, 232);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(95, 23);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"Symbols";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(110, 315);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 22);
			this->textBox1->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown1->Location = System::Drawing::Point(157, 115);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(36, 22);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &okno::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password length";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(17, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(443, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &okno::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(189, 295);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(189, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox2->Location = System::Drawing::Point(283, 294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(225, 22);
			this->textBox2->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.75F));
			this->button2->Location = System::Drawing::Point(283, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 25);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Log In";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &okno::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10.75F));
			this->button3->Location = System::Drawing::Point(399, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 25);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &okno::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(235, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(316, 175);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(102, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(583, 107);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(504, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 19);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Your passwords";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox3->Location = System::Drawing::Point(283, 320);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(225, 22);
			this->textBox3->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(336, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Access Denied";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(249, 394);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(307, 20);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Password must be at least 6 characters";
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(643, 284);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(135, 24);
			this->comboBox1->TabIndex = 28;
			this->comboBox1->Text = L"---Choose site---";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &okno::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &okno::comboBox1_SelectionChangeCommitted);
			this->comboBox1->Click += gcnew System::EventHandler(this, &okno::comboBox1_Click);
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &okno::comboBox1_MouseClick);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox4->Location = System::Drawing::Point(642, 314);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 22);
			this->textBox4->TabIndex = 29;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(561, 109);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 26);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Add new password:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(599, 141);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 19);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Site";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(551, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 19);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Password";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox5->Location = System::Drawing::Point(643, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 22);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox6->Location = System::Drawing::Point(643, 167);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(136, 22);
			this->textBox6->TabIndex = 21;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button4->Location = System::Drawing::Point(562, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 25);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &okno::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(643, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 25);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Use generated password";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &okno::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(550, 167);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 19);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Username";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox7->Location = System::Drawing::Point(643, 192);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(136, 22);
			this->textBox7->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(550, 315);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 19);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Username";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(551, 342);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 19);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Password";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox8->Location = System::Drawing::Point(642, 341);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(136, 22);
			this->textBox8->TabIndex = 30;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(566, 248);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(213, 17);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Name of this site is already used";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::Snow;
			this->label15->Location = System::Drawing::Point(520, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(259, 15);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Created and designed by Armand Pajor 2018";
			// 
			// okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(790, 425);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"okno";
			this->Text = L"PassGen 2.0v";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: inline char lowerCaseGen()
	{
		static const char alpha[27] = { 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
			110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122 };
		return alpha[rand() % 27];
	}

	private: inline char upperCaseGen()
	{
		static const char alpha[27] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
										79, 80, 81, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90 };
		return alpha[rand() % 27];
	}

	private: inline char digitsGen()
	{
		static const char digits[10] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 };
		return digits[rand() % 10];
	}
	
	private: inline char specialGen()
	{
		static const char special[31] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 58,
										59, 60, 61, 62, 63, 64, 91, 92, 93, 94, 95, 123, 124, 125, 126 };
		return special[rand() % 31];
	}

	private: int checkOption(bool lowerCase, bool upperCase, bool digits, bool special) // Metoda sprawdza zaznaczone przez usera checkBoxy
	{
		if (upperCase && lowerCase && digits && special)
			return 0;
		else if (upperCase && lowerCase && digits)
			return 1;
		else if (upperCase && lowerCase && special)
			return 2;
		else if (upperCase && digits && special)
			return 3;
		else if (lowerCase && digits && special)
			return 4;
		else if (upperCase && lowerCase)
			return 5;
		else if (upperCase && digits)
			return 6;
		else if (upperCase && special)
			return 7;
		else if (lowerCase && digits)
			return 8;
		else if (lowerCase && special)
			return 9;
		else if (digits && special)
			return 10;
		else if (upperCase)
			return 11;
		else if (lowerCase)
			return 12;
		else if (digits)
			return 13;
		else if (special)
			return 14;
		else
			return 15;
	}
	// Poni¿sze metody "option" obs³uguj¹ wszystkie mo¿liwe kombinacje checkboxów przy generowaniu has³a
	private: std::string option0(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 4;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += lowerCaseGen(); break;
				case 2: password += digitsGen(); break;
				case 3: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option1(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 3;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += lowerCaseGen(); break;
				case 2: password += digitsGen(); break;
			}
		}
		return password;
	}

	private: std::string option2(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 3;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += lowerCaseGen(); break;
				case 2: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option3(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 3;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += digitsGen(); break;
				case 2: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option4(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 3;

			switch (random)
			{
				case 0: password += lowerCaseGen(); break;
				case 1: password += digitsGen(); break;
				case 2: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option5(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += lowerCaseGen(); break;
			}
		}
		return password;
	}

	private: std::string option6(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
				case 0: password += upperCaseGen(); break;
				case 1: password += digitsGen(); break;
			}
		}
		return password;
	}

	private: std::string option7(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
			case 0: password += upperCaseGen(); break;
			case 1: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option8(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
			case 0: password += lowerCaseGen(); break;
			case 1: password += digitsGen(); break;
			}
		}
		return password;
	}

	private: std::string option9(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
			case 0: password += lowerCaseGen(); break;
			case 1: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option10(unsigned int passLength)
	{
		std::string password = "";
		int random;

		for (unsigned int i = 0; i < passLength; i++)
		{
			random = rand() % 2;

			switch (random)
			{
			case 0: password += digitsGen(); break;
			case 1: password += specialGen(); break;
			}
		}
		return password;
	}

	private: std::string option11(unsigned int passLength)
	{
		std::string password = "";

		for (unsigned int i = 0; i < passLength; i++)
			password += upperCaseGen();
		return password;
	}

	private: std::string option12(unsigned int passLength)
	{
		std::string password = "";

		for (unsigned int i = 0; i < passLength; i++)
			password += lowerCaseGen();
		return password;
	}

	private: std::string option13(unsigned int passLength)
	{
		std::string password = "";

		for (unsigned int i = 0; i < passLength; i++)
			password += digitsGen();
		return password;
	}

	private: std::string option14(unsigned int passLength)
	{
		std::string password = "";

		for (unsigned int i = 0; i < passLength; i++)
			password += specialGen();
		return password;
	}

	private: std::string option15(unsigned int passLength)
	{
		std::string password = "";
		return password;
	}
	
	private: void generate()
	{
		bool lowerCase = false,
			 upperCase = false,
			 digits = false,
			 special = false;

		if (this->checkBox1->Checked == true)
			upperCase = true;
		if (this->checkBox2->Checked == true)
			lowerCase = true;
		if (this->checkBox3->Checked == true)
			digits = true;
		if (this->checkBox4->Checked == true)
			special = true;

		int passLength = (int)this->numericUpDown1->Value;

		switch (checkOption(lowerCase, upperCase, digits, special))
		{
			case 0: this->textBox1->Text = gcnew String(option0(passLength).c_str()); break;
			case 1: this->textBox1->Text = gcnew String(option1(passLength).c_str()); break;
			case 2: this->textBox1->Text = gcnew String(option2(passLength).c_str()); break;
			case 3: this->textBox1->Text = gcnew String(option3(passLength).c_str()); break;
			case 4: this->textBox1->Text = gcnew String(option4(passLength).c_str()); break;
			case 5: this->textBox1->Text = gcnew String(option5(passLength).c_str()); break;
			case 6: this->textBox1->Text = gcnew String(option6(passLength).c_str()); break;
			case 7: this->textBox1->Text = gcnew String(option7(passLength).c_str()); break;
			case 8: this->textBox1->Text = gcnew String(option8(passLength).c_str()); break;
			case 9: this->textBox1->Text = gcnew String(option9(passLength).c_str()); break;
			case 10: this->textBox1->Text = gcnew String(option10(passLength).c_str()); break;
			case 11: this->textBox1->Text = gcnew String(option11(passLength).c_str()); break;
			case 12: this->textBox1->Text = gcnew String(option12(passLength).c_str()); break;
			case 13: this->textBox1->Text = gcnew String(option13(passLength).c_str()); break;
			case 14: this->textBox1->Text = gcnew String(option14(passLength).c_str()); break;
			case 15: this->textBox1->Text = gcnew String(option15(passLength).c_str()); break;
		}
	}

	private: void setStartValues()
	{
		srand((unsigned int)time(NULL));

		this->numericUpDown1->Value = 6;
		this->checkBox1->Checked = true;
		this->checkBox2->Checked = true;
		this->checkBox3->Checked = true;
		this->label6->Visible = false;
		this->label7->Visible = false;
	}

	private: void hideMainMenu()
	{
		this->numericUpDown1->Visible = false;
		this->comboBox1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label5->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->label13->Visible = false;
		this->label14->Visible = false;
		this->checkBox1->Visible = false;
		this->checkBox2->Visible = false;
		this->checkBox3->Visible = false;
		this->checkBox4->Visible = false;
		this->button1->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->textBox1->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->textBox6->Visible = false;
		this->textBox7->Visible = false;
		this->textBox8->Visible = false;
	}

	private: void showMainMenu()
	{
		this->numericUpDown1->Visible = true;
		this->comboBox1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label5->Visible = true;
		this->label8->Visible = true;
		this->label9->Visible = true;
		this->label10->Visible = true;
		this->label11->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
		this->checkBox1->Visible = true;
		this->checkBox2->Visible = true;
		this->checkBox3->Visible = true;
		this->checkBox4->Visible = true;
		this->button1->Visible = true;
		this->button4->Visible = true;
		this->button5->Visible = true;
		this->textBox1->Visible = true;
		this->textBox4->Visible = true;
		this->textBox5->Visible = true;
		this->textBox6->Visible = true;
		this->textBox7->Visible = true;
		this->textBox8->Visible = true;
	}

	private: void hideLoginMenu()
	{
		this->label1->Visible = false;
		this->label4->Visible = false;
		this->label6->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
	}
	
	// Metody szyfrujace //
	private: std::string cesar(int key, std::string &password)
	{
		std::string cipher = "";
		for (int i = 0; password[i] != '\0'; i++)
		{
			if (isalpha(password[i]))
			{
				if (isupper(password[i]))
					cipher += char(int(password[i] + key - 65) % 26 + 65);

				else
					cipher += char(int(password[i] + key - 97) % 26 + 97);
			}
			else
				cipher += char(int(password[i]));
		}
		return cipher;
	}

	private: std::string encrypt(std::string password)
	{
		size_t passLength = password.length(),
			seedLen;
		int check;
		std::string encryptedPassword, seed, strPassLength;
		seedLen = 64 - passLength;	// ustalenie dlugosci soli

		for (size_t i = 0; i < seedLen; i++) // utworzenie soli
		{
			check = rand() % 2;
			if (check == 0)
				seed += lowerCaseGen();
			else
				seed += digitsGen();
		}
		// zapisanie dlugosci hasla na poczatku niejawnej wersji hasla
		if (passLength < 10)
			strPassLength = '0' + std::to_string(passLength);
		else
			strPassLength = std::to_string(passLength);

		encryptedPassword = strPassLength + password + seed; // utworzenie niejawnego hasla
		passLength = encryptedPassword.length();			// pobranie dlugosci niejawnego hasla
		encryptedPassword = cesar(26 - (passLength % 26), encryptedPassword); // zaszyfrowanie niejawnego hasla
		encryptedPassword[0] += 7;
		encryptedPassword[1] -= 7;
		return encryptedPassword;
	}

	private: std::string decrypt(std::string encrypted)
	{
		encrypted[0] -= 7;
		encrypted[1] += 7;
		std::string decrypted, strPassLen, password;
		size_t passLength = encrypted.length(); // pobranie dlugosci niejawnego hasla
		decrypted = cesar(26 + (passLength % 26), encrypted); // odszyfrowanie hasla
		strPassLen = encrypted.substr(0, 2); // pobranie dlugosci hasla
		passLength = stoi(strPassLen); // konwersja dlugosci hasla do zmiennej typu int
		password = decrypted.substr(2, passLength); // pobranie oryginalnego hasla
		return password;
	}
	// Metody szyfrujace //

	private: void registerNewAccount()
	{
		std::ofstream writeFile;
		std::ifstream readFile;
		String^ login = this->textBox2->Text;
		String^ password = this->textBox3->Text;
		msclr::interop::marshal_context context;
		std::string strLogin = context.marshal_as<std::string>(login);
		std::string strPassword = context.marshal_as<std::string>(password);
		this->label7->Visible = false;
		this->label6->Visible = false;
		if (strLogin.length() < 4)
		{
			this->label7->Text = "Login must be at least 6 characters long";
			this->label7->Visible = true;
			return;
		}
		for (int i = 0; i < strLogin[i]; i++)
		{
			if (strLogin[i] == 32)
			{
				this->label7->Text = "Login cannot contain whitespace characters";
				this->label7->Visible = true;
				return;
			}
		}
		if (strPassword.length() < 6)
		{
			this->label7->Text = "Password must be at least 6 characters long";
			this->label7->Visible = true;
			return;
		}
		for (int i = 0; i < strPassword[i]; i++)
		{
			if (strPassword[i] == 32)
			{
				this->label7->Text = "Password cannot contain whitespace characters";
				this->label7->Visible = true;
				return;
			}
		}
		std::string checkLogin, checkPassword;
		bool ifGood = true;
		readFile.open("data0.txt", std::ios::in);

		if (!readFile)
		{
			writeFile.open("data0.txt", std::ios::out);
			writeFile.close();
		}
		if (readFile.good())
		{
			while (!readFile.eof())
			{
				readFile >> checkLogin;
				readFile >> checkPassword;
				if (decrypt(checkLogin) == strLogin)
				{
					this->label7->Text = "This login is already used";
					this->label7->Visible = true;
					ifGood = false;
					break;
				}
			}
			readFile.close();
		}
		if (ifGood)
		{
			writeFile.open("data0.txt", std::ios::out | std::ios::app);
			if (writeFile.good())
			{
				writeFile << encrypt(strLogin) << " " << encrypt(strPassword) << std::endl;
				writeFile.close();
			}
		}
	}

	private: bool login()
	{
		std::ifstream file;
		bool ifLogged = false;
		this->label7->Visible = false;
		file.open("data0.txt", std::ios::in);
		if (file.good())
		{
			std::string checkLogin, checkPassword;
			msclr::interop::marshal_context context;
			String^ login = this->textBox2->Text;
			String^ password = this->textBox3->Text;
			std::string strLogin = context.marshal_as<std::string>(login);
			std::string  strPassword = context.marshal_as<std::string>(password);
			std::string decryptedLogin, decryptedPassword;
			while (!file.eof())
			{
				file >> checkLogin;
				file >> checkPassword;
				decryptedLogin = decrypt(checkLogin);
				decryptedPassword = decrypt(checkPassword);
				if ((decryptedLogin == strLogin) && (decryptedPassword == strPassword))
				{
					ifLogged = true;
					user = strLogin;
					break;
				}
			}
		}
		file.close();
		return ifLogged;
	}

	private: void addPassword()
	{
		std::ifstream readFile;
		std::ofstream writeFile;
		bool ifGood = true;
		msclr::interop::marshal_context context;
		String^ site = this->textBox5->Text;
		String^ login = this->textBox6->Text;
		String^ password = this->textBox7->Text;
		std::string strSite = context.marshal_as<std::string>(site);
		std::string strLogin = context.marshal_as<std::string>(login);
		std::string strPassword = context.marshal_as<std::string>(password);
		std::string checkSite, checkLogin, checkPassword;
		if (strSite.length() < 1)
		{
			this->label14->Text = "Site must be at least 1 character long";
			this->label14->Visible = true;
			return;
		}
		if (strLogin.length() < 2)
		{
			this->label14->Text = "Login must be at least 2 characters long";
			this->label14->Visible = true;
			return;
		}

		if (strPassword.length() < 6)
		{
			this->label14->Text = "Password must be at least 6 characters long";
			this->label14->Visible = true;
			return;
		}

		for (int i = 0; i < strSite[i]; i++)
		{
			if (strSite[i] == 32)
			{
				this->label14->Text = "Site cannot contain whitespace characters";
				this->label14->Visible = true;
				return;
			}
		}
		for (int i = 0; i < strLogin[i]; i++)
		{
			if (strLogin[i] == 32)
			{
				this->label14->Text = "Login cannot contain whitespace characters";
				this->label14->Visible = true;
				return;
			}
		}
		for (int i = 0; i < strPassword[i]; i++)
		{
			if (strPassword[i] == 32)
			{
				this->label14->Text = "Password cannot contain whitespace characters";
				this->label14->Visible = true;
				return;
			}
		}

		readFile.open(user + "data2.txt", std::ios::in);
		if (readFile.good())
		{
			while (!readFile.eof())
			{
				readFile >> checkSite;
				readFile >> checkLogin;
				readFile >> checkPassword;
				if (decrypt(checkSite) == strSite)
				{
					this->label14->Text = "This name of site is already used";
					this->label14->Visible = true;
					ifGood = false;
					break;
				}
			}
		}
		readFile.close();

		if (ifGood)
		{
			writeFile.open(user + "data2.txt", std::ios::out | std::ios::app);
			if (writeFile.good())
			{
				writeFile << encrypt(strSite) << " " << encrypt(strLogin) << " " << encrypt(strPassword) << std::endl;
				this->label14->Visible = false;
			}
			writeFile.close();
		}
	}

	private: void loadPasswords()
	{
		int index = 0;
		std::ifstream file;
		file.open(user + "data2.txt", std::ios::in);
		if (file.good())
		{
			std::string site, decryptedSite, login, password;
			this->comboBox1->Items->Clear();
			String^ sysSite;
			while (!file.eof())
			{
				file >> site;
				file >> login;
				file >> password;
				decryptedSite = decrypt(site);
				addToList(head, decryptedSite, login, password);
				sysSite = gcnew String(decryptedSite.c_str());
				this->comboBox1->Items->Add(sysSite);
			}
			this->comboBox1->Items->RemoveAt(this->comboBox1->Items->Count-1);
		}
		file.close();
	}

	private: void addToList(element* (&head), std::string site, std::string login, std::string password)
	{
		element *temp, *temp1;
		temp = new element;
		temp->site = site;
		temp->login = login;
		temp->password = password;
		temp->next = NULL;
		if (head == NULL) 
			head = temp;
		else
		{
			temp1 = head;

			while (temp1->next != NULL) 
				temp1 = temp1->next;

			temp1->next = temp;
		}
	}

	private: void showPassword(element *head)
	{
		msclr::interop::marshal_context context;
		String^ site = this->comboBox1->SelectedText;
		std::string strSite = context.marshal_as<std::string>(site);
		std::string login, password;
		element* temp = head;
		if (temp == NULL)
		{
			this->textBox4->Text = "No users found";
			this->textBox8->Text = "No passwords found";
		}
		else
		{
			while (temp->next != NULL)
			{
				if (strSite == temp->site)
				{
					login = decrypt(temp->login);
					password = decrypt(temp->password);
					this->textBox4->Text = gcnew String(login.c_str());
					this->textBox8->Text = gcnew String(password.c_str());
					break;
				}
				temp = temp->next;
			}
		}
	}

private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->numericUpDown1->Value < 6)
		this->numericUpDown1->Value = 6;

	if (this->numericUpDown1->Value > 32)
		this->numericUpDown1->Value = 32;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	generate();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (login())
	{
		hideLoginMenu();
		this->comboBox1->Items->Clear();
		loadPasswords();
		showMainMenu();
	}
	else
	{
		this->label6->Visible = true;
		this->textBox2->Text = "";
		this->textBox3->Text = "";
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	registerNewAccount();
	this->textBox2->Text = "";
	this->textBox3->Text = "";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = this->textBox1->Text;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	addPassword();
	loadPasswords();
}
private: System::Void comboBox1_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
	showPassword(head);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	showPassword(head);
}
private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	showPassword(head);
}
private: System::Void comboBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	showPassword(head);
}
};
}
