#pragma once
#include "Memories.h"

namespace ProjektZwolskiMemories_02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->memories = gcnew Memories();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox;
	protected: 

	private: System::Windows::Forms::Button^  button_stop;
	protected: 

	private: System::Windows::Forms::Button^  button_start;


	private: Osoba *temp;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  motywToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  minecraftToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  starWarsToolStripMenuItem;

			 Memories ^memories;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->button_stop = (gcnew System::Windows::Forms::Button());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->motywToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->minecraftToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->starWarsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox
			// 
			this->textBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox->Location = System::Drawing::Point(234, 366);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(367, 38);
			this->textBox->TabIndex = 7;
			// 
			// button_stop
			// 
			this->button_stop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_stop.BackgroundImage")));
			this->button_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_stop->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button_stop->Location = System::Drawing::Point(441, 420);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(160, 70);
			this->button_stop->TabIndex = 6;
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &Form1::button_stop_Click);
			// 
			// button_start
			// 
			this->button_start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_start.BackgroundImage")));
			this->button_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_start->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button_start->Location = System::Drawing::Point(234, 420);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(160, 70);
			this->button_start->TabIndex = 5;
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &Form1::button_start_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(441, 521);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(399, 314);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(291, 299);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(268, 73);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->motywToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(834, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// motywToolStripMenuItem
			// 
			this->motywToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->minecraftToolStripMenuItem, 
				this->starWarsToolStripMenuItem});
			this->motywToolStripMenuItem->Name = L"motywToolStripMenuItem";
			this->motywToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->motywToolStripMenuItem->Text = L"Motyw";
			// 
			// minecraftToolStripMenuItem
			// 
			this->minecraftToolStripMenuItem->Name = L"minecraftToolStripMenuItem";
			this->minecraftToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->minecraftToolStripMenuItem->Text = L"Minecraft";
			this->minecraftToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::minecraftToolStripMenuItem_Click);
			// 
			// starWarsToolStripMenuItem
			// 
			this->starWarsToolStripMenuItem->Name = L"starWarsToolStripMenuItem";
			this->starWarsToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->starWarsToolStripMenuItem->Text = L"Star Wars";
			this->starWarsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::starWarsToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 811);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->button_stop);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(850, 850);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(850, 850);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Start";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_start_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //Memories ^memoriesTemp = gcnew Memories();
				
				
				 //memories->getGra()->gracz->setImie(marshal_as<std::string>(this->textBox->Text));
				 this->memories->getGra()->getGracz()->setImie(marshal_as<std::string>(this->textBox->Text));

				 this->memories->Show();

				 this->Visible = false;
				 this->Enabled = false;

				 
				 //this->Visible = false;

				 if(temp != nullptr)
				 {
					 delete temp;
				 }
			 }


private: System::Void button_stop_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 exit(0);
			 
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
		 }
private: System::Void minecraftToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			   memories->getGra()->setMotyw(1);
			   this->pictureBox1->Image = Image::FromFile("Grafiki\\Character.png");
			   this->BackgroundImage = Image::FromFile("Grafiki\\TloCave.png");
			   this->pictureBox2->BackgroundImage = Image::FromFile("Grafiki\\PodajImie.png");
			   this->button_start->Image = Image::FromFile("Grafiki\\Play.png");
			   this->button_stop->Image = Image::FromFile("Grafiki\\Exit.png"); 
		 }
private: System::Void starWarsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			   memories->getGra()->setMotyw(2);
			  
			  
			   this->pictureBox1->Image = Image::FromFile("Grafiki\\darthvader.png");
			   this->BackgroundImage = Image::FromFile("Grafiki\\formMenu.png");
			   this->pictureBox2->BackgroundImage = Image::FromFile("Grafiki\\nameSetStar.png");
			   this->button_start->Image = Image::FromFile("Grafiki\\startStar.png");
			   this->button_stop->Image = Image::FromFile("Grafiki\\exitStar.png");


		 }
private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(memories == nullptr || memories->getGra() == nullptr)
				 {
					 this->menuStrip1->Enabled = false;
					 this->menuStrip1->Visible = false;

				 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->memories->getGra()->setMotyw(1);

		 }
};
}

