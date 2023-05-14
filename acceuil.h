#pragma once
#include "menu.h"
#include "about.h"
namespace gestionrestaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de acceuil
	/// </summary>
	public ref class acceuil : public System::Windows::Forms::Form
	{
	public:
		acceuil(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~acceuil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnMenu;
	private: System::Windows::Forms::Button^ btnAbout;
	protected:


	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(acceuil::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(648, 125);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// btnMenu
			// 
			this->btnMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMenu.BackgroundImage")));
			this->btnMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMenu->Location = System::Drawing::Point(233, 201);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->Size = System::Drawing::Size(232, 224);
			this->btnMenu->TabIndex = 1;
			this->btnMenu->UseVisualStyleBackColor = true;
			this->btnMenu->Click += gcnew System::EventHandler(this, &acceuil::btnMenu_Click);
			// 
			// btnAbout
			// 
			this->btnAbout->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Stencil", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->ForeColor = System::Drawing::Color::Goldenrod;
			this->btnAbout->Location = System::Drawing::Point(270, 57);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(178, 58);
			this->btnAbout->TabIndex = 2;
			this->btnAbout->Text = L"About us";
			this->btnAbout->UseVisualStyleBackColor = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &acceuil::btnAbout_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MidnightBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Goldenrod;
			this->button3->Location = System::Drawing::Point(476, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 58);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Quitter";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &acceuil::button3_Click);
			// 
			// acceuil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(687, 476);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnMenu);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"acceuil";
			this->Text = L"acceuil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		menu^ objet1 = gcnew menu();
		objet1->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();

	about^ objet2 = gcnew about();
	objet2->ShowDialog();
	objet2 = nullptr;
	this->Show();
}
};

}
