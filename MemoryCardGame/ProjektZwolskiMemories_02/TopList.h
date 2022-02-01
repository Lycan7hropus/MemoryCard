#pragma once
#include "StdAfx.h"
//#include "Game.h"
#include "msclr\marshal_cppstd.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace msclr::interop;



namespace ProjektZwolskiMemories_02 {

	/// <summary>
	/// Summary for TopList
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class TopList : public System::Windows::Forms::Form
	{
	public:
		TopList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//this->temporary = new Osoba();
			this->tablicaNames = gcnew array<Label ^>(5);
			this->tablicaPoints = gcnew array<Label ^>(5);

			for( int i = 0; i < 5 ; i++)
			{
				this->tablicaNames[i] = gcnew Label();
				this->tablicaPoints[i] = gcnew Label();

				this->tablicaNames[i]->Location = System::Drawing::Point(327, 206+42*i);
				this->tablicaPoints[i]->Location = System::Drawing::Point(493, 206+42*i);

				this->tablicaNames[i]->BackColor = BackColor.Transparent;
				this->tablicaPoints[i]->BackColor = BackColor.Transparent;

				this->tablicaNames[i]->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26));
				this->tablicaNames[i]->AutoSize = true;

				this->tablicaPoints[i]->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26));
				this->tablicaPoints[i]->AutoSize = true;

				

				this->Controls->Add(tablicaNames[i]);
				this->Controls->Add(tablicaPoints[i]);
				
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TopList()
		{
			if (components)
			{
				delete components;
			}

			
			/* if(temporary != nullptr)
			 {
				 delete temporary;
			 }*/
		}
	private: array< Label^> ^tablicaNames;
    private: array< Label^> ^tablicaPoints;

	private: System::Windows::Forms::Label^  labelPoints1;
	private: System::Windows::Forms::Label^  labelPoints2;
	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::Label^  labelName2;
	private: System::Windows::Forms::Label^  labelPoints3;


	private: System::Windows::Forms::Label^  labelName3;
	private: System::Windows::Forms::Label^  labelPoints4;


	private: System::Windows::Forms::Label^  labelName4;
	private: System::Windows::Forms::Label^  labelPoints5;


	private: System::Windows::Forms::Label^  labelName5;


	private: System::Windows::Forms::Label^  labelHeader;

	public: 
		
	void setLabel1(String^ argName, String^ argPoints, int indeks);
	private: System::Windows::Forms::Label^  labelnr5;
	public: 


	private: System::Windows::Forms::Label^  labelnr4;

	private: System::Windows::Forms::Label^  labelnr3;

	private: System::Windows::Forms::Label^  labelnr2;

	private: System::Windows::Forms::Label^  labelnr1;


	//private: Osoba *temporary;
	private: System::Windows::Forms::Label^  labelName1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TopList::typeid));
			this->labelHeader = (gcnew System::Windows::Forms::Label());
			this->labelnr5 = (gcnew System::Windows::Forms::Label());
			this->labelnr4 = (gcnew System::Windows::Forms::Label());
			this->labelnr3 = (gcnew System::Windows::Forms::Label());
			this->labelnr2 = (gcnew System::Windows::Forms::Label());
			this->labelnr1 = (gcnew System::Windows::Forms::Label());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelPoints1 = (gcnew System::Windows::Forms::Label());
			this->labelPoints2 = (gcnew System::Windows::Forms::Label());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->labelPoints3 = (gcnew System::Windows::Forms::Label());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->labelPoints4 = (gcnew System::Windows::Forms::Label());
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->labelPoints5 = (gcnew System::Windows::Forms::Label());
			this->labelName5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelHeader
			// 
			this->labelHeader->AutoSize = true;
			this->labelHeader->BackColor = System::Drawing::Color::Transparent;
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelHeader->Location = System::Drawing::Point(284, 121);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(263, 57);
			this->labelHeader->TabIndex = 0;
			this->labelHeader->Text = L"Top Gracze:";
			// 
			// labelnr5
			// 
			this->labelnr5->AutoSize = true;
			this->labelnr5->BackColor = System::Drawing::Color::Transparent;
			this->labelnr5->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnr5->Location = System::Drawing::Point(284, 374);
			this->labelnr5->Name = L"labelnr5";
			this->labelnr5->Size = System::Drawing::Size(46, 42);
			this->labelnr5->TabIndex = 15;
			this->labelnr5->Text = L"5.";
			// 
			// labelnr4
			// 
			this->labelnr4->AutoSize = true;
			this->labelnr4->BackColor = System::Drawing::Color::Transparent;
			this->labelnr4->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnr4->Location = System::Drawing::Point(284, 332);
			this->labelnr4->Name = L"labelnr4";
			this->labelnr4->Size = System::Drawing::Size(46, 42);
			this->labelnr4->TabIndex = 14;
			this->labelnr4->Text = L"4.";
			// 
			// labelnr3
			// 
			this->labelnr3->AutoSize = true;
			this->labelnr3->BackColor = System::Drawing::Color::Transparent;
			this->labelnr3->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnr3->Location = System::Drawing::Point(284, 290);
			this->labelnr3->Name = L"labelnr3";
			this->labelnr3->Size = System::Drawing::Size(46, 42);
			this->labelnr3->TabIndex = 13;
			this->labelnr3->Text = L"3.";
			// 
			// labelnr2
			// 
			this->labelnr2->AutoSize = true;
			this->labelnr2->BackColor = System::Drawing::Color::Transparent;
			this->labelnr2->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnr2->Location = System::Drawing::Point(284, 248);
			this->labelnr2->Name = L"labelnr2";
			this->labelnr2->Size = System::Drawing::Size(46, 42);
			this->labelnr2->TabIndex = 12;
			this->labelnr2->Text = L"2.";
			// 
			// labelnr1
			// 
			this->labelnr1->AutoSize = true;
			this->labelnr1->BackColor = System::Drawing::Color::Transparent;
			this->labelnr1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnr1->Location = System::Drawing::Point(284, 206);
			this->labelnr1->Name = L"labelnr1";
			this->labelnr1->Size = System::Drawing::Size(46, 42);
			this->labelnr1->TabIndex = 11;
			this->labelnr1->Text = L"1.";
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->BackColor = System::Drawing::Color::Transparent;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelName1->Location = System::Drawing::Point(327, 206);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(102, 42);
			this->labelName1->TabIndex = 1;
			this->labelName1->Text = L"label1";
			this->labelName1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(360, 468);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// labelPoints1
			// 
			this->labelPoints1->AutoSize = true;
			this->labelPoints1->BackColor = System::Drawing::Color::Transparent;
			this->labelPoints1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPoints1->Location = System::Drawing::Point(493, 206);
			this->labelPoints1->Name = L"labelPoints1";
			this->labelPoints1->Size = System::Drawing::Size(54, 42);
			this->labelPoints1->TabIndex = 17;
			this->labelPoints1->Text = L"99";
			this->labelPoints1->Visible = false;
			// 
			// labelPoints2
			// 
			this->labelPoints2->AutoSize = true;
			this->labelPoints2->BackColor = System::Drawing::Color::Transparent;
			this->labelPoints2->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPoints2->Location = System::Drawing::Point(493, 248);
			this->labelPoints2->Name = L"labelPoints2";
			this->labelPoints2->Size = System::Drawing::Size(54, 42);
			this->labelPoints2->TabIndex = 19;
			this->labelPoints2->Text = L"99";
			this->labelPoints2->Visible = false;
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->BackColor = System::Drawing::Color::Transparent;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelName2->Location = System::Drawing::Point(327, 248);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(102, 42);
			this->labelName2->TabIndex = 18;
			this->labelName2->Text = L"label4";
			this->labelName2->Visible = false;
			// 
			// labelPoints3
			// 
			this->labelPoints3->AutoSize = true;
			this->labelPoints3->BackColor = System::Drawing::Color::Transparent;
			this->labelPoints3->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPoints3->Location = System::Drawing::Point(493, 290);
			this->labelPoints3->Name = L"labelPoints3";
			this->labelPoints3->Size = System::Drawing::Size(54, 42);
			this->labelPoints3->TabIndex = 21;
			this->labelPoints3->Text = L"99";
			this->labelPoints3->Visible = false;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->BackColor = System::Drawing::Color::Transparent;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelName3->Location = System::Drawing::Point(327, 290);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(102, 42);
			this->labelName3->TabIndex = 20;
			this->labelName3->Text = L"label6";
			this->labelName3->Visible = false;
			// 
			// labelPoints4
			// 
			this->labelPoints4->AutoSize = true;
			this->labelPoints4->BackColor = System::Drawing::Color::Transparent;
			this->labelPoints4->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPoints4->Location = System::Drawing::Point(493, 332);
			this->labelPoints4->Name = L"labelPoints4";
			this->labelPoints4->Size = System::Drawing::Size(54, 42);
			this->labelPoints4->TabIndex = 23;
			this->labelPoints4->Text = L"99";
			this->labelPoints4->Visible = false;
			// 
			// labelName4
			// 
			this->labelName4->AutoSize = true;
			this->labelName4->BackColor = System::Drawing::Color::Transparent;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelName4->Location = System::Drawing::Point(327, 332);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Size = System::Drawing::Size(102, 42);
			this->labelName4->TabIndex = 22;
			this->labelName4->Text = L"label8";
			this->labelName4->Visible = false;
			// 
			// labelPoints5
			// 
			this->labelPoints5->AutoSize = true;
			this->labelPoints5->BackColor = System::Drawing::Color::Transparent;
			this->labelPoints5->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPoints5->Location = System::Drawing::Point(493, 374);
			this->labelPoints5->Name = L"labelPoints5";
			this->labelPoints5->Size = System::Drawing::Size(54, 42);
			this->labelPoints5->TabIndex = 25;
			this->labelPoints5->Text = L"99";
			this->labelPoints5->Visible = false;
			// 
			// labelName5
			// 
			this->labelName5->AutoSize = true;
			this->labelName5->BackColor = System::Drawing::Color::Transparent;
			this->labelName5->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelName5->Location = System::Drawing::Point(327, 374);
			this->labelName5->Name = L"labelName5";
			this->labelName5->Size = System::Drawing::Size(120, 42);
			this->labelName5->TabIndex = 24;
			this->labelName5->Text = L"label10";
			this->labelName5->Visible = false;
			// 
			// TopList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(795, 594);
			this->Controls->Add(this->labelPoints5);
			this->Controls->Add(this->labelName5);
			this->Controls->Add(this->labelPoints4);
			this->Controls->Add(this->labelName4);
			this->Controls->Add(this->labelPoints3);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->labelPoints2);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelPoints1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelnr5);
			this->Controls->Add(this->labelnr4);
			this->Controls->Add(this->labelnr3);
			this->Controls->Add(this->labelnr2);
			this->Controls->Add(this->labelnr1);
			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelHeader);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(811, 633);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(811, 633);
			this->Name = L"TopList";
			this->Text = L"TopList";
			this->Load += gcnew System::EventHandler(this, &TopList::TopList_Load);
			this->Leave += gcnew System::EventHandler(this, &TopList::TopList_Leave);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void TopList_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			  
		 }
private: System::Void TopList_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
	
		 }	

};
}
