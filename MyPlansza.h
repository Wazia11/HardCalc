#pragma once
#include "Pomoc.h"

namespace kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyPlansza
	/// </summary>
	public ref class MyPlansza : public System::Windows::Forms::Form
	{
	public:
		MyPlansza(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			MyPlansza::Width = 295;
			MyPlansza::Height = 425;
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyPlansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oknoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ financeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukaToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtokno;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button29;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyPlansza::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oknoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->financeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naukaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtokno = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(434, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->oknoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Stałe";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::przypnijToolStripMenuItem_Click);
			// 
			// oknoToolStripMenuItem
			// 
			this->oknoToolStripMenuItem->Name = L"oknoToolStripMenuItem";
			this->oknoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->oknoToolStripMenuItem->Text = L"Okno";
			this->oknoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::oknoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Zakoncz";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standartToolStripMenuItem,
					this->financeToolStripMenuItem, this->naukaToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standartToolStripMenuItem
			// 
			this->standartToolStripMenuItem->Name = L"standartToolStripMenuItem";
			this->standartToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->standartToolStripMenuItem->Text = L"Standart";
			this->standartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::standartToolStripMenuItem_Click);
			// 
			// financeToolStripMenuItem
			// 
			this->financeToolStripMenuItem->Name = L"financeToolStripMenuItem";
			this->financeToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->financeToolStripMenuItem->Text = L"Finanse";
			this->financeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::financeToolStripMenuItem_Click);
			// 
			// naukaToolStripMenuItem
			// 
			this->naukaToolStripMenuItem->Name = L"naukaToolStripMenuItem";
			this->naukaToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->naukaToolStripMenuItem->Text = L"Nauka";
			this->naukaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::naukaToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyPlansza::pomocToolStripMenuItem_Click);
			// 
			// txtokno
			// 
			this->txtokno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtokno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtokno->Font = (gcnew System::Drawing::Font(L"Futura Lt BT", 33));
			this->txtokno->ForeColor = System::Drawing::Color::White;
			this->txtokno->Location = System::Drawing::Point(5, 37);
			this->txtokno->Multiline = true;
			this->txtokno->Name = L"txtokno";
			this->txtokno->Size = System::Drawing::Size(270, 62);
			this->txtokno->TabIndex = 1;
			this->txtokno->Text = L"0";
			this->txtokno->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button1->Location = System::Drawing::Point(5, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyPlansza::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button2->Location = System::Drawing::Point(59, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyPlansza::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button4->Location = System::Drawing::Point(113, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyPlansza::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button3->Location = System::Drawing::Point(113, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 7;
			this->button3->Text = L"6";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyPlansza::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button5->Location = System::Drawing::Point(59, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyPlansza::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button6->Location = System::Drawing::Point(5, 216);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyPlansza::button6_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button10->Location = System::Drawing::Point(113, 163);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 55);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyPlansza::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button11->Location = System::Drawing::Point(59, 163);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 55);
			this->button11->TabIndex = 9;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyPlansza::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Silver;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button12->Location = System::Drawing::Point(5, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 55);
			this->button12->TabIndex = 8;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyPlansza::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button13->Location = System::Drawing::Point(5, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(109, 55);
			this->button13->TabIndex = 14;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyPlansza::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Silver;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button14->Location = System::Drawing::Point(113, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 55);
			this->button14->TabIndex = 15;
			this->button14->Text = L",";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyPlansza::button14_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button7->Location = System::Drawing::Point(167, 268);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 109);
			this->button7->TabIndex = 16;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyPlansza::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button8->Location = System::Drawing::Point(167, 216);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 17;
			this->button8->Text = L"X";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyPlansza::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button9->Location = System::Drawing::Point(167, 163);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 18;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyPlansza::button9_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 22));
			this->button15->Location = System::Drawing::Point(113, 109);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 55);
			this->button15->TabIndex = 20;
			this->button15->Text = L"CE";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Silver;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button16->Location = System::Drawing::Point(5, 109);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 55);
			this->button16->TabIndex = 19;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyPlansza::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button17->Location = System::Drawing::Point(167, 109);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 55);
			this->button17->TabIndex = 21;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyPlansza::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkOrange;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(220, 109);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 55);
			this->button18->TabIndex = 25;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyPlansza::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkOrange;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 18));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(220, 163);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 24;
			this->button19->Text = L"a2";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyPlansza::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkOrange;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 18));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(220, 216);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 23;
			this->button20->Text = L"a3";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyPlansza::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkOrange;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(220, 322);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 55);
			this->button21->TabIndex = 22;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyPlansza::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Silver;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 20));
			this->button22->Location = System::Drawing::Point(281, 309);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(153, 68);
			this->button22->TabIndex = 26;
			this->button22->Text = L"Narzut";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyPlansza::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Silver;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 20));
			this->button23->Location = System::Drawing::Point(281, 241);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(153, 68);
			this->button23->TabIndex = 27;
			this->button23->Text = L"Marza";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyPlansza::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Silver;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 13));
			this->button24->Location = System::Drawing::Point(281, 109);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(153, 68);
			this->button24->TabIndex = 29;
			this->button24->Text = L"Netto->Brutto";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyPlansza::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Silver;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 13));
			this->button25->Location = System::Drawing::Point(281, 174);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(153, 68);
			this->button25->TabIndex = 28;
			this->button25->Text = L"Brutto->Netto";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyPlansza::button25_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 402);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyPlansza::pictureBox1_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Chocolate;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 13));
			this->button26->ForeColor = System::Drawing::SystemColors::Control;
			this->button26->Location = System::Drawing::Point(154, 387);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(121, 68);
			this->button26->TabIndex = 33;
			this->button26->Text = L"Dodawanie";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyPlansza::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Chocolate;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 11));
			this->button27->ForeColor = System::Drawing::SystemColors::Control;
			this->button27->Location = System::Drawing::Point(154, 454);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 68);
			this->button27->TabIndex = 32;
			this->button27->Text = L"Odejmowanie";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyPlansza::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Chocolate;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 15));
			this->button28->ForeColor = System::Drawing::SystemColors::Control;
			this->button28->Location = System::Drawing::Point(154, 522);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 68);
			this->button28->TabIndex = 31;
			this->button28->Text = L"Mnozenie";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyPlansza::button28_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Bez nazwy-2uyugh.png");
			this->imageList1->Images->SetKeyName(1, L"smutno.png");
			this->imageList1->Images->SetKeyName(2, L"jejjee.png");
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::DarkOrange;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Futura-Bold", 32));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(220, 270);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(55, 55);
			this->button29->TabIndex = 34;
			this->button29->Text = L"%";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyPlansza::button29_Click);
			// 
			// MyPlansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(434, 611);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtokno);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyPlansza";
			this->Text = L"Mocny Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MyPlansza::MyPlansza_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//wartosci
		double pierwsza, druga, wynik, testuj;
		char operacja;
		bool status = false;

#pragma endregion
		//liczenie
		private: Void Wypisz(String^ liczba) {

			if (txtokno->Text == "0" || status) {

				txtokno->Text = liczba;
			}
			else
			{
				txtokno->Text += liczba;
			}
			status = false;



		}

		//Pomoc
	private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pomoc^ Onas = gcnew Pomoc();
		Onas->Show();


	}
		   //Standart
	private: System::Void standartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPlansza::Width = 295;
		MyPlansza::Height = 425;
	}

		   //Finansowy
	private: System::Void financeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPlansza::Width = 460;
		MyPlansza::Height = 425;

	}
		   //Nauka
	private: System::Void naukaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPlansza::Width = 295;
		MyPlansza::Height = 650;
		this->txtokno->Text = "Zagramy?";








	}

		   //Stale
	private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPlansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		TopMost = true;


	}
		   //Okno
	private: System::Void oknoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPlansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		TopMost = false;
	}
		   //Exit
	private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Zamknąć program?", "Do potem", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
	}
		   //do 2
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	wynik = Math::Pow(pierwsza, 2);
	this->txtokno->Text = Convert::ToString(wynik);
	status = true;
}
	   
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	status = true;
	operacja = 'n';
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	status = true;
	operacja = 'b';
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ losuj = gcnew Random;
	pierwsza = losuj->Next(1, 20);
	druga = losuj->Next(1, pierwsza);
	testuj = pierwsza - druga;

	this->txtokno->Text = pierwsza + " - " + druga + " =?";
	status = true;
	operacja = 't';
	pictureBox1->Image = imageList1->Images[0];
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ losuj = gcnew Random;
	pierwsza = losuj->Next(1, 15);
	druga = losuj->Next(1, 15);
	testuj = pierwsza + druga;

	this->txtokno->Text = pierwsza + " + " + druga + " =?";
	status = true;
	operacja = 't';
	pictureBox1->Image = imageList1->Images[0];


}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ losuj = gcnew Random;
	pierwsza = losuj->Next(1, 9);
	druga = losuj->Next(1, 9);
	testuj = pierwsza * druga;

	this->txtokno->Text = pierwsza + " * " + druga + " =?";
	status = true;
	operacja = 't';
	pictureBox1->Image = imageList1->Images[0];
}

	   //przyciksi liczby
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");
}
	   //dodawnie
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	operacja = '+';
	status = true;

}
	   //mnozenie
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	operacja = '*';
	status = true;
}
	   //odejmowanie
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	operacja = '-';
	status = true;

}
	   //dzielnie
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	operacja = '/';
	status = true;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	druga = Convert::ToDouble(txtokno->Text);
	
	

	

	switch (operacja)
	{
	case '+':
		//dodwanie
		wynik = pierwsza + druga;
		
		break;
	case '-':
		//odejmowanie
		wynik = pierwsza - druga;
		break;
	case '*':
		//mnozenie
		wynik = pierwsza * druga;
		break;
	case '/':
		//dzielnie
		if (druga == 0) {
			MessageBox::Show("Niepowodzenie (dzielenie przez 0)");
		}
		else {
			wynik = pierwsza / druga;
		}
		break;
		//procent
	case 'p':
		wynik = (pierwsza / 100) * druga;
		break;
		//brutto
	case 'b':
		wynik = pierwsza * (1 + (druga / 100));
		break;
		//netto
	case 'n':
		wynik = pierwsza / (1 + (druga / 100));
		break;
		//marża
	case 'm':
		wynik = ((druga - pierwsza) / druga) * 100;
		break;
		//nazut
	case 'x':
		wynik = ((druga - pierwsza) / pierwsza) * 100;
		break;
	case 't':
		if (druga == testuj) {
			this->txtokno->Text = "SUPER!";
			this->pictureBox1->Image = imageList1->Images[2];
		}
		else {
			this->txtokno->Text = "ZLE..";
			this->pictureBox1->Image = imageList1->Images[1];
		}
		status = true;
		break;



		
	default:
		//brak akcji
		break;
	}
	status = true;
	if (operacja != 't') {
		this->txtokno->Text = Convert::ToString(wynik);
	}

	

	//Czyszczenie C
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtokno->Text = "0";
	pierwsza = 0;
	druga = 0;
	status = false;
}
	   //pierwiastkowanie
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	wynik = Math::Sqrt(pierwsza);
	this->txtokno->Text = Convert::ToString(wynik);
	status = true;
}
	   //do 3
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	wynik = Math::Pow(pierwsza, 3);
	this->txtokno->Text = Convert::ToString(wynik);
	status = true;
}
	   //%
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	status = true;
	operacja = 'p';

}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	status = true;
	operacja = 'm';
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtokno->Text);
	status = true;
	operacja = 'x';

}
private: System::Void MyPlansza_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
