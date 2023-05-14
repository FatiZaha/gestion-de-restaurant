#pragma once

namespace gestionrestaurant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Description résumée de facture
	/// </summary>
	public ref class facture : public System::Windows::Forms::Form
	{
	public:
		facture(void)
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
		~facture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(facture::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1291, 109);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Gold;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(433, 454);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Gold;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(451, 190);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(787, 463);
			this->dataGridView2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Your Commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(759, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Your INFO";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MidnightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Gold;
			this->button1->Location = System::Drawing::Point(1069, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 57);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &facture::button1_Click);
			// 
			// facture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1336, 702);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"facture";
			this->Text = L"facture";
			this->Load += gcnew System::EventHandler(this, &facture::facture_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void facture_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection^ contaDataBase = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT nom,qte,prix*qte AS 'totale' FROM commande c JOIN plat p ON c.idplt=p.idplt WHERE qte>0;", contaDataBase);

		SqlDataReader^ Reader();
		try {
			SqlDataAdapter^ sda = gcnew SqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dbdataset;
			dataGridView1->DataSource = bsource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		String^ constring1 = L"Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection^ contaDataBase1 = gcnew SqlConnection(constring1);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT * FROM client ;", contaDataBase1);

		SqlDataReader^ Reader();
		try {
			SqlDataAdapter^ sda1 = gcnew SqlDataAdapter();
			sda1->SelectCommand = cmdDataBase1;
			DataTable^ dbdataset1 = gcnew DataTable();
			sda1->Fill(dbdataset1);
			BindingSource^ bsource1 = gcnew BindingSource();
			bsource1->DataSource = dbdataset1;
			dataGridView2->DataSource = bsource1;
			sda1->Update(dbdataset1);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=master;Integrated Security=True";
		SqlConnection sqlConn2(connString2);
		sqlConn2.Open();
		int n = 0;


		String^ sqlQuery2 = "UPDATE commande SET qte=@qte WHERE qte<>0;";
		SqlCommand commande(sqlQuery2, % sqlConn2);
		commande.Parameters->AddWithValue("@qte", n);

		SqlDataReader^ reader = commande.ExecuteReader();
		reader->Read();

		MessageBox::Show("La validation est effectuée", "Commande Validé",
			MessageBoxButtons::OK);
		this->Close();
	}


	};




	}

