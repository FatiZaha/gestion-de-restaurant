#pragma once
#include "panier.h"
namespace gestionrestaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ addGratin;
	private: System::Windows::Forms::Button^ addLasagne;
	private: System::Windows::Forms::Button^ addPasta;
	private: System::Windows::Forms::Button^ addSushi;
	private: System::Windows::Forms::Button^ addPoisson;
	private: System::Windows::Forms::Button^ addPoulet;
	private: System::Windows::Forms::Button^ addTajine;
	private: System::Windows::Forms::Button^ addSalade;








	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Button^ valider;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->addGratin = (gcnew System::Windows::Forms::Button());
			this->addLasagne = (gcnew System::Windows::Forms::Button());
			this->addPasta = (gcnew System::Windows::Forms::Button());
			this->addSushi = (gcnew System::Windows::Forms::Button());
			this->addPoisson = (gcnew System::Windows::Forms::Button());
			this->addPoulet = (gcnew System::Windows::Forms::Button());
			this->addTajine = (gcnew System::Windows::Forms::Button());
			this->addSalade = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->valider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(410, 162);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 126);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(410, 294);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(148, 119);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(410, 419);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(149, 126);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(410, 551);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(148, 119);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(962, 296);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(137, 119);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(962, 164);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(137, 126);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(962, 553);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(137, 119);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(962, 421);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(137, 126);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::MidnightBlue;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox9->Location = System::Drawing::Point(398, 152);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(171, 528);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::MidnightBlue;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox10->Location = System::Drawing::Point(950, 152);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(160, 530);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			// 
			// addGratin
			// 
			this->addGratin->BackColor = System::Drawing::Color::Transparent;
			this->addGratin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addGratin.BackgroundImage")));
			this->addGratin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addGratin->FlatAppearance->BorderSize = 0;
			this->addGratin->Location = System::Drawing::Point(256, 194);
			this->addGratin->Name = L"addGratin";
			this->addGratin->Size = System::Drawing::Size(124, 44);
			this->addGratin->TabIndex = 10;
			this->addGratin->UseVisualStyleBackColor = false;
			this->addGratin->Click += gcnew System::EventHandler(this, &menu::addGratin_Click);
			// 
			// addLasagne
			// 
			this->addLasagne->BackColor = System::Drawing::Color::Transparent;
			this->addLasagne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addLasagne.BackgroundImage")));
			this->addLasagne->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addLasagne->Location = System::Drawing::Point(256, 326);
			this->addLasagne->Name = L"addLasagne";
			this->addLasagne->Size = System::Drawing::Size(124, 47);
			this->addLasagne->TabIndex = 11;
			this->addLasagne->UseVisualStyleBackColor = false;
			this->addLasagne->Click += gcnew System::EventHandler(this, &menu::addLasagne_Click);
			// 
			// addPasta
			// 
			this->addPasta->BackColor = System::Drawing::Color::Transparent;
			this->addPasta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addPasta.BackgroundImage")));
			this->addPasta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addPasta->Location = System::Drawing::Point(256, 453);
			this->addPasta->Name = L"addPasta";
			this->addPasta->Size = System::Drawing::Size(124, 45);
			this->addPasta->TabIndex = 12;
			this->addPasta->UseVisualStyleBackColor = false;
			this->addPasta->Click += gcnew System::EventHandler(this, &menu::addPasta_Click);
			// 
			// addSushi
			// 
			this->addSushi->BackColor = System::Drawing::Color::Transparent;
			this->addSushi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addSushi.BackgroundImage")));
			this->addSushi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addSushi->Location = System::Drawing::Point(256, 583);
			this->addSushi->Name = L"addSushi";
			this->addSushi->Size = System::Drawing::Size(124, 45);
			this->addSushi->TabIndex = 13;
			this->addSushi->UseVisualStyleBackColor = false;
			this->addSushi->Click += gcnew System::EventHandler(this, &menu::addSushi_Click);
			// 
			// addPoisson
			// 
			this->addPoisson->BackColor = System::Drawing::Color::Transparent;
			this->addPoisson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addPoisson.BackgroundImage")));
			this->addPoisson->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addPoisson->Location = System::Drawing::Point(819, 196);
			this->addPoisson->Name = L"addPoisson";
			this->addPoisson->Size = System::Drawing::Size(125, 44);
			this->addPoisson->TabIndex = 14;
			this->addPoisson->UseVisualStyleBackColor = false;
			this->addPoisson->Click += gcnew System::EventHandler(this, &menu::addPoisson_Click);
			// 
			// addPoulet
			// 
			this->addPoulet->BackColor = System::Drawing::Color::Transparent;
			this->addPoulet->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addPoulet.BackgroundImage")));
			this->addPoulet->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addPoulet->Location = System::Drawing::Point(819, 328);
			this->addPoulet->Name = L"addPoulet";
			this->addPoulet->Size = System::Drawing::Size(125, 45);
			this->addPoulet->TabIndex = 15;
			this->addPoulet->UseVisualStyleBackColor = false;
			this->addPoulet->Click += gcnew System::EventHandler(this, &menu::addPoulet_Click);
			// 
			// addTajine
			// 
			this->addTajine->BackColor = System::Drawing::Color::Transparent;
			this->addTajine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addTajine.BackgroundImage")));
			this->addTajine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addTajine->Location = System::Drawing::Point(819, 453);
			this->addTajine->Name = L"addTajine";
			this->addTajine->Size = System::Drawing::Size(125, 45);
			this->addTajine->TabIndex = 16;
			this->addTajine->UseVisualStyleBackColor = false;
			this->addTajine->Click += gcnew System::EventHandler(this, &menu::addTajine_Click);
			// 
			// addSalade
			// 
			this->addSalade->BackColor = System::Drawing::Color::Transparent;
			this->addSalade->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addSalade.BackgroundImage")));
			this->addSalade->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addSalade->Location = System::Drawing::Point(819, 583);
			this->addSalade->Name = L"addSalade";
			this->addSalade->Size = System::Drawing::Size(125, 45);
			this->addSalade->TabIndex = 17;
			this->addSalade->UseVisualStyleBackColor = false;
			this->addSalade->Click += gcnew System::EventHandler(this, &menu::addSalade_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Gold;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(18, 192);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(362, 48);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"Gratin    90Dhs";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Gold;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(18, 326);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(362, 47);
			this->richTextBox2->TabIndex = 19;
			this->richTextBox2->Text = L"Lasagne   50Dhs";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Gold;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(18, 453);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(362, 45);
			this->richTextBox3->TabIndex = 20;
			this->richTextBox3->Text = L"Pasta   45Dhs";
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::Gold;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(18, 583);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(362, 45);
			this->richTextBox4->TabIndex = 21;
			this->richTextBox4->Text = L"Sushi   300Dhs";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::Gold;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(587, 196);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(357, 44);
			this->richTextBox5->TabIndex = 22;
			this->richTextBox5->Text = L"Poisson   200Dhs";
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::Color::Gold;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(587, 328);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(357, 45);
			this->richTextBox6->TabIndex = 23;
			this->richTextBox6->Text = L"Poulet   100Dhs";
			// 
			// richTextBox7
			// 
			this->richTextBox7->BackColor = System::Drawing::Color::Gold;
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox7->Location = System::Drawing::Point(587, 585);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(357, 43);
			this->richTextBox7->TabIndex = 24;
			this->richTextBox7->Text = L"Salade   120Dhs";
			// 
			// richTextBox8
			// 
			this->richTextBox8->BackColor = System::Drawing::Color::Gold;
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox8->Location = System::Drawing::Point(587, 453);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(357, 45);
			this->richTextBox8->TabIndex = 25;
			this->richTextBox8->Text = L"Tajine   150Dhs";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(1108, 121);
			this->pictureBox11->TabIndex = 26;
			this->pictureBox11->TabStop = false;
			// 
			// valider
			// 
			this->valider->BackColor = System::Drawing::Color::MidnightBlue;
			this->valider->Font = (gcnew System::Drawing::Font(L"Stencil", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valider->ForeColor = System::Drawing::Color::Gold;
			this->valider->Location = System::Drawing::Point(909, 36);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(191, 61);
			this->valider->TabIndex = 27;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = false;
			this->valider->Click += gcnew System::EventHandler(this, &menu::valider_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1121, 695);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->addSalade);
			this->Controls->Add(this->addTajine);
			this->Controls->Add(this->addPoulet);
			this->Controls->Add(this->addPoisson);
			this->Controls->Add(this->addSushi);
			this->Controls->Add(this->addPasta);
			this->Controls->Add(this->addLasagne);
			this->Controls->Add(this->addGratin);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->richTextBox8);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->richTextBox7);
			this->Name = L"menu";
			this->Text = L"menu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//------------------------------------------------------------------------------add gratin
		int gratin = 0;
private: System::Void addGratin_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		gratin++;
		String^ sqlQuery = "UPDATE commande SET qte= @qte WHERE idplt=1;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", gratin);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
		

	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add lasagne
	   int lasagne = 0;
private: System::Void addLasagne_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		lasagne++;
		String^ sqlQuery = "UPDATE commande SET qte= @qte WHERE idplt=2;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", lasagne);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add pasta
	   int pasta = 0;
private: System::Void addPasta_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		pasta++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte  WHERE idplt=3;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", pasta);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add sushi
	   int sushi = 0;
private: System::Void addSushi_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		sushi++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte WHERE idplt=7;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", sushi);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add poisson
	   int poisson = 0;
private: System::Void addPoisson_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		poisson++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte WHERE idplt=4;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", poisson);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add poulet
	   int poulet = 0;
private: System::Void addPoulet_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		poulet++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte WHERE idplt=5;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", poulet);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add tajine
	   int tajine = 0;
private: System::Void addTajine_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		tajine++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte WHERE idplt=8;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", tajine);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}



//------------------------------------------------------------------------------add salade
	   int salade = 0;
private: System::Void addSalade_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		salade++;
		String^ sqlQuery = "UPDATE commande SET qte=@qte WHERE idplt=6;";
		SqlCommand commande(sqlQuery, % sqlConn);
		commande.Parameters->AddWithValue("@qte", salade);
		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to add new commande", "Commande Failure",
			MessageBoxButtons::OK);
	}
}


//------------------------------------------------------------------------------validation de la commande
	   
private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

	/*this->Hide();

		menu^ objet1 = gcnew menu();
		objet1->ShowDialog();*/
	this->Hide();
	panier^ p = gcnew panier();
	p->ShowDialog();
}


};
}
