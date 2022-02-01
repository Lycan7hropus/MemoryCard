#pragma once
#include "StdAfx.h"
#include "Antek.h"
#include "TopList.h"



//#include "msclr\marshal_cppstd.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//using namespace msclr::interop;

namespace ProjektZwolskiMemories_02 {

	/// <summary>
	/// Summary for Memories
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Memories : public System::Windows::Forms::Form
	{
	public:
		Memories(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->gra = new Game();

			this->lista = gcnew TopList();

			for(int x=0; x<5; x++)
						{
							this->lista->setLabel1(	marshal_as<String ^>(this->gra->getListOfTopPlayers(x).getImie()),
													this->gra->getListOfTopPlayers(x).getLiczbaRuchowOsoba().ToString(),x);
						}
			
			this->tablica = gcnew array<PictureBox ^>(16);

			array<String^>^ filesMine = System::IO::Directory::GetFiles("Grafiki\\Karta");
		    array<String^>^ filesStar = System::IO::Directory::GetFiles("Grafiki\\Karta2");
	

			for( int i = 0; i < 4 ; i++)
			{
				

				for( int j = 0; j < 4 ; j++)
				{
					int z = i*4+j;
					this->tablica[z] = gcnew PictureBox();

					 if(this->gra->getMotyw() == 1)
					 {
		    		 	this->tablica[z] -> Image = gcnew Drawing::Bitmap(filesMine[0]);
					 }
 
					 if(this->gra->getMotyw() == 2)
				  	 {
		   				this->tablica[z] -> Image = gcnew Drawing::Bitmap(filesStar[0]);
					 }

					
					this->tablica[z] -> Location = System::Drawing::Point(85+210*j, 37+210*i);
					this->tablica[z]-> SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
					this->Controls->Add(tablica[z]);
					this->tablica[z]->Click += gcnew System::EventHandler(this, &Memories::picture_Click);

				}

			}

			//this->osoba = new Osoba();
		}
		Memories(String ^tekst)
		{
			InitializeComponent();
			
			this->Text = tekst;  //imie z konstruktora
			//this->osoba = new Osoba();
			//this->gra->gracz->setImie(marshal_as<std::string>(tekst));
			this->gra->getGracz()->setImie(marshal_as<std::string>(tekst));

			//this->label->Text = marshal_as<String ^>(this->gra->gracz->getImie());
			this->label->Text = marshal_as<String ^>(this->gra->getGracz()->getImie());
		}

	
		void setLabelImie();
		

		Game* getGra();
		Osoba *getOsoba();
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Memories()
		{
			if (components)
			{
				delete components;
			}
			

			// Tradycyjnie zwolnij pamiec
			 if ( gra )
			 {
				 delete gra ;
			 }
			 gra = nullptr ;
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::Label^  label1;

			


		

		private: //Osoba *osoba;
				 
				 Game *gra;
				 TopList ^lista;

		// nowe 
	    private: array< PictureBox^> ^tablica;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  eXITToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  topListToolStripMenuItem;

private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;



	    private: int seconds;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Memories::typeid));
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Enabled = false;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(715, 667);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(160, 160);
			this->pictureBox16->TabIndex = 65;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Memories::pictureBox16_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Enabled = false;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(505, 667);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(160, 160);
			this->pictureBox15->TabIndex = 64;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Memories::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Enabled = false;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(295, 667);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(160, 160);
			this->pictureBox14->TabIndex = 63;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Memories::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Enabled = false;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(85, 667);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(160, 160);
			this->pictureBox13->TabIndex = 62;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Memories::pictureBox13_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Enabled = false;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(715, 457);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(160, 160);
			this->pictureBox12->TabIndex = 61;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Memories::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Enabled = false;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(505, 457);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(160, 160);
			this->pictureBox11->TabIndex = 59;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Memories::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Enabled = false;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(295, 457);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(160, 160);
			this->pictureBox10->TabIndex = 60;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Memories::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Enabled = false;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(85, 457);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(160, 160);
			this->pictureBox9->TabIndex = 58;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Memories::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Enabled = false;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(715, 247);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(160, 160);
			this->pictureBox8->TabIndex = 57;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Memories::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Enabled = false;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(505, 247);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(160, 160);
			this->pictureBox7->TabIndex = 56;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Memories::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Enabled = false;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(295, 247);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(160, 160);
			this->pictureBox6->TabIndex = 55;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Memories::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Enabled = false;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(85, 247);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(160, 160);
			this->pictureBox5->TabIndex = 54;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Memories::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(715, 37);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(160, 160);
			this->pictureBox4->TabIndex = 53;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Memories::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(505, 37);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(160, 160);
			this->pictureBox3->TabIndex = 52;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Memories::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(295, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(160, 160);
			this->pictureBox2->TabIndex = 51;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Memories::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(85, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 160);
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Memories::pictureBox1_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::Transparent;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label->Location = System::Drawing::Point(942, 169);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(86, 31);
			this->label->TabIndex = 66;
			this->label->Text = L"Name";
			this->label->Click += gcnew System::EventHandler(this, &Memories::label_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(941, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 37);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Player name:";
			this->label1->Click += gcnew System::EventHandler(this, &Memories::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Memories::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Memories::timer2_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->menuToolStripMenuItem, 
				this->topListToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1278, 24);
			this->menuStrip1->TabIndex = 68;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->eXITToolStripMenuItem, 
				this->newGameToolStripMenuItem});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->menuToolStripMenuItem->Text = L"File";
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->eXITToolStripMenuItem->Text = L"Exit";
			this->eXITToolStripMenuItem->Click += gcnew System::EventHandler(this, &Memories::eXITToolStripMenuItem_Click);
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Memories::newGameToolStripMenuItem_Click);
			// 
			// topListToolStripMenuItem
			// 
			this->topListToolStripMenuItem->Name = L"topListToolStripMenuItem";
			this->topListToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->topListToolStripMenuItem->Text = L"Top List";
			this->topListToolStripMenuItem->Click += gcnew System::EventHandler(this, &Memories::topListToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Memories::helpToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(941, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 37);
			this->label2->TabIndex = 67;
			this->label2->Text = L"Number of moves:";
			this->label2->Click += gcnew System::EventHandler(this, &Memories::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(942, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 31);
			this->label3->TabIndex = 69;
			this->label3->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(925, 373);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 53);
			this->textBox1->TabIndex = 70;
			this->textBox1->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(944, 498);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(289, 20);
			this->label4->TabIndex = 71;
			this->label4->Text = L"Click \"space\" to open list of best players";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(944, 566);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(288, 20);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Click \"Cltr+Shift+N\" to start a new game";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(944, 638);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(288, 120);
			this->label6->TabIndex = 73;
			this->label6->Text = L"Click \"\r\nCltr+Shift+H\" to get more info about the author";
			// 
			// Memories
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1278, 845);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1294, 884);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1294, 884);
			this->Name = L"Memories";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L",";
			this->Load += gcnew System::EventHandler(this, &Memories::Memories_Load);
			this->Leave += gcnew System::EventHandler(this, &Memories::Memories_Leave);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Memories::Memories_KeyPress);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Memories::Memories_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Memories::Memories_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private : void fastSwitch(int variable, int chosenId) //DrawBitmap
		  {

		  array<String^>^ filesMine = System::IO::Directory::GetFiles("Grafiki\\Karta");
		  array<String^>^ filesStar = System::IO::Directory::GetFiles("Grafiki\\Karta2");
		
		  if(this->gra->getMotyw() == 1)
		  {
			  this->tablica[variable-1] -> Image = gcnew Drawing::Bitmap(filesMine[chosenId]);
		  }

		  if(this->gra->getMotyw() == 2)
		  {
			  this->tablica[variable-1] -> Image = gcnew Drawing::Bitmap(filesStar[chosenId]);
		  }
	
		  
		  
		  
		  }

private : void cardSet(int pictureBoxId,int pictureBoxPositionX,int pictureBoxPositionY)
		  {
		  

		  if (this->gra->getNrKlikniecia() == 1)
			 {
				 this->timer1->Stop();
				 
				 //cardOneId = pictureBoxId;
				 this->gra->setKartaPierwszaId(pictureBoxId);

				 //Pobierz zawartosc z planszy i wrzuc do niewiadomych
				 this->gra->setX(pictureBoxPositionX,pictureBoxPositionY);

				 this->gra->podmienX(); //podmienia z par do niewiadomych pierwsza karte

				 //blockId = this->gra->get(pictureBoxPositionX-1,pictureBoxPositionY-1); //pobieramy wartosc z tablicy losowych wartosci [0][0]
				 this->gra->setBloczekId(this->gra->get(pictureBoxPositionX-1,pictureBoxPositionY-1));

				 fastSwitch(pictureBoxId,this->gra->getBloczekId());//fastDrawSwitch
			 	
				 this->gra->setNrKlikniecia(999);

				 this->gra->setFirstBlockId(pictureBoxId);

				 
			 }

			 else if(this->gra->getNrKlikniecia() == 2)
			 {
				//this->gra->setLiczbaRuchów(999);
				 this->gra->getGracz()->setLiczbaRuchowOsoba(999);

				//this->label3->Text = this->gra->getLiczbaRuchów().ToString();
				this->label3->Text = this->gra->getGracz()->getLiczbaRuchowOsoba().ToString();

				//cardTwoId = pictureBoxId;
				this->gra->setKartaDrugaId(pictureBoxId);

				this->gra->setY(pictureBoxPositionX,pictureBoxPositionY);

				this->gra->podmienY();

				//blockId = this->gra->get(pictureBoxPositionX-1,pictureBoxPositionY-1);
				this->gra->setBloczekId(this->gra->get(pictureBoxPositionX-1,pictureBoxPositionY-1));

			    fastSwitch(pictureBoxId,this->gra->getBloczekId());
				
				if(this->gra->check()== true)
				{
					
					this->timer2->Start();


				}
				


				else if(this->gra->check()== false)
						{
						
							this->gra->cofnij();

							

							this->timer1->Start();

							
					
							
						}
				
				
				
				this->gra->setNrKlikniecia(999); // 999 to wywolanie inkrementacji

			
			
			
			 }

		  }

private : void cardChange(int a, int b) //card clear (set 0)
		  {


			//fastSwitch(cardOneId,0);
			fastSwitch(this->gra->getKartaPierwszaId(),0);

			//fastSwitch(cardTwoId,0);
			fastSwitch(this->gra->getKartaDrugaId(),0);

			this->timer1->Stop();

			this->gra->setNrKlikniecia(1);


		
		  }

private: void cardSetTop(int pictureBoxId,int pictureBoxPositionX,int pictureBoxPositionY, int clickNumber)
		 {
			 if(this->gra->get(pictureBoxPositionX-1,pictureBoxPositionY-1) == 0)
			 {
				 if(this->gra->getNrKlikniecia() < 3) // DO klasy gra + imie gracza, zliczanie liczby krokow, zapis satystk, high score
					 {
						 cardSet(pictureBoxId, pictureBoxPositionX, pictureBoxPositionY);
						 
					 }
		 
			 }

			 if(this->gra->wygrana() == false)
			 {
				MessageBox::Show("  Wygrales!");



				//this->gra->getGracz()->saveTopList(this->gra->getGracz()->getImie(),this->gra->getGracz()->getLiczbaRuchowOsoba());
				this->gra->saveTopList(this->gra->getGracz()->getImie(),this->gra->getGracz()->getLiczbaRuchowOsoba());



                exit(0);
			 
			 }

		 }

private: System::Void Memories_Load(System::Object^  sender, System::EventArgs^  e) 
			 { //if(this->gra->gracz)
				 if(this->gra->getGracz())
				 {
					 this->setLabelImie();

					 this->Text = gcnew String("Memories");
					 
					 this->gra->setNrKlikniecia(1);
					 seconds = 1;

					 //this->gra->setLiczbaRuchów(0); //przenies do osoba (gracz) funkcje get/set.
					 this->gra->getGracz()->setLiczbaRuchowOsoba(0);

					 array<String^>^ filesMine = System::IO::Directory::GetFiles("Grafiki\\Karta");
					 array<String^>^ filesStar = System::IO::Directory::GetFiles("Grafiki\\Karta2");

					 for( int i = 0; i < 4 ; i++)
					 {
						

						for( int j = 0; j < 4 ; j++)
						{
							int z = i*4+j;

							 if(this->gra->getMotyw() == 1)
							 {
		    		 			this->tablica[z] -> Image = gcnew Drawing::Bitmap(filesMine[0]);
								this->BackgroundImage = Image::FromFile("Grafiki\\imageMine.png");


								 Bitmap bm = gcnew Bitmap(filesMine[0]);
								  this->Icon = Icon->FromHandle(bm.GetHicon());
								
									
								
							 }
		 
if(this->gra->getMotyw() == 2)
				  			 {
		   						this->tablica[z] -> Image = gcnew Drawing::Bitmap(filesStar[0]);
								this->BackgroundImage = Image::FromFile("Grafiki\\imageStar.png");
								
								Bitmap bmDark = gcnew Bitmap(filesStar[0]);
								this->Icon = Icon->FromHandle(bmDark.GetHicon());

								this->label1->ForeColor = ForeColor.White;
								this->label2->ForeColor = ForeColor.White;
								
							 }
						}


						//this->lista->label1->Text = this->gra->getListOfTopPlayers(i).getLiczbaRuchowOsoba().ToString();
						
				  	 }	
					 
				
				

				 }
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 

			 cardChange(this->gra->getKartaPierwszaId(),this->gra->getKartaDrugaId()); //card clear (set 0)

		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
				

				this->gra->setNrKlikniecia(1);
				

					this->tablica[this->gra->getKartaDrugaId()-1]-> BackColor = BackColor.Transparent;
					this->tablica[this->gra->getKartaDrugaId()-1]-> Image = nullptr;
					this->tablica[this->gra->getKartaDrugaId()-1]-> Enabled = false;
					
					this->tablica[this->gra->getFirstBlockId()-1] -> BackColor = BackColor.Transparent;
					this->tablica[this->gra->getFirstBlockId()-1] -> Image = nullptr;
					this->tablica[this->gra->getFirstBlockId()-1] -> Enabled = false;

				this->timer2->Stop();
				
		 }

private: System::Void picture_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int X,Y;
			 int index = tablica->IndexOf(tablica, (PictureBox ^)sender);
			 //this->gra->setSecondBlockId(tablica->IndexOf(tablica, (PictureBox ^)sender));

			 this->textBox1->AppendText("Sender: " + sender->GetType()
					+ " Index: " +index + "\r\n");

			if(index+1 <= 4)
			{
			 X = 1;
			}
			else if( index+1 > 4 && index+1 <= 8)
			{
			 X = 2;
			}
			else if( index+1 > 8 && index+1 <= 12)
			{
			 X = 3;
			}
			else if( index+1 > 12 && index+1 <= 16)
			{
			 X = 4;
			}


			if(index+1 == 1	|| index+1 == 5 || index+1 == 9 || index+1 == 13)
			{
			 Y = 1;
			}
			else if(index+1 == 2 || index+1 == 6 || index+1 == 10 || index+1 == 14)
			{
			 Y = 2;
			}
			else if(index+1 == 3 || index+1 == 7 || index+1 == 11 || index+1 == 15)
			{
			 Y = 3;
			}
			else if(index+1 == 4 || index+1 == 8 || index+1 == 12 || index+1 == 16)
			{
			 Y = 4;
			}
			 
			 cardSetTop(index+1,X,Y,this->gra->getNrKlikniecia());

		 } 

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(1,1,1,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  cardSetTop(2,1,2,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(3,1,3,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(4,1,4,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(5,2,1,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(6,2,2,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(7,2,3,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(8,2,4,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardSetTop(9,3,1,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardSetTop(10,3,2,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  cardSetTop(11,3,3,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(12,3,4,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(13,4,1,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(14,4,2,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(15,4,3,this->gra->getNrKlikniecia());
		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSetTop(16,4,4,this->gra->getNrKlikniecia());
		 }

private: System::Void label_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Memories_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  
			 Antek ^antek = gcnew Antek();
			 
			 antek->Show();
		 }
private: System::Void eXITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			exit(0);
		 }
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->gra->wyczysc();
			 this->gra->getGracz()->setLiczbaRuchowOsoba(0);
				
			 //this->label3->Text = this->gra->getLiczbaRuchów().ToString();
			 this->label3->Text = this->gra->getGracz()->getLiczbaRuchowOsoba().ToString();
			
			 

			 for(int j=1; j < 17; j++)
			 {
				fastSwitch(j,0);
				this->tablica[j-1] -> Visible = true;
				this->tablica[j-1] ->Enabled = true;
				this->gra->losuj();
				//this->gra->getGracz()->imie2;
				

			
			 }

			 
		 }



private: System::Void topListToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				
			
				 lista->ShowDialog();
		

		 }
private: System::Void Memories_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			 exit(0);
		
		 }
private: System::Void Memories_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 if(e->KeyChar == (char)Keys::Space)
			 {
				 lista->ShowDialog();
			 }

		 }
private: System::Void Memories_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
				 if(e->Control && e->Shift && e->KeyCode == Keys::N)
				 {
					 this->gra->wyczysc();
					 this->gra->getGracz()->setLiczbaRuchowOsoba(0);
					
					 //this->label3->Text = this->gra->getLiczbaRuchów().ToString();
					 this->label3->Text = this->gra->getGracz()->getLiczbaRuchowOsoba().ToString();
				
				 

					 for(int j=1; j < 17; j++)
					 {
						fastSwitch(j,0);
						this->tablica[j-1] -> Visible = true;
						this->tablica[j-1] ->Enabled = true;
						this->gra->losuj();
						//this->gra->getGracz()->imie2;
					
					 }
				 }


				 if(e->Control && e->Shift && e->KeyCode == Keys::H)
				 {

					Antek ^antek = gcnew Antek();
			 
					antek->Show();

				 
				 }

		 }
};
}
