#pragma once

namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::GroupBox^ groupBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kalkulator za putovanje kroz vrijeme";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Kojom brzinom se krecete:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(259, 245);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Pozdrav, upravo se nalazis u svemiru.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"I vjerovao ili ne mozes da putujes u buducnost!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(253, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Ako mi ne vjerujes isprobaj kalkulator i uvjeri se sam!";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Koliko dugo zelis da se kreces tom brzinom:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(259, 301);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(253, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Ali zapamti ne mozes da se kreces brze od svjetlosti!";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(58, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Izracunaj koliko je vremena proslo na zemlji";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(222, 366);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 15);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Danima";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 35);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(57, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->Text = L"Satima";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 58);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(67, 17);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->Text = L"Minutima";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(345, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"km/s";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(2, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 16;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->ForeColor = System::Drawing::Color::Cornsilk;
			this->groupBox1->Location = System::Drawing::Point(348, 272);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(89, 88);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vrijeme u:";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(57, 17);
			this->radioButton6->TabIndex = 20;
			this->radioButton6->Text = L"Minute";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(43, 17);
			this->radioButton5->TabIndex = 19;
			this->radioButton5->Text = L"Sati";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(47, 17);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->Text = L"Dani";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Checked = true;
			this->radioButton7->Location = System::Drawing::Point(6, 88);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(68, 17);
			this->radioButton7->TabIndex = 21;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Sekunde";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->ForeColor = System::Drawing::Color::Cornsilk;
			this->groupBox2->Location = System::Drawing::Point(232, 401);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(107, 116);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Razultat zelim u:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(445, 529);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::Cornsilk;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Zekin kalkulator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	float vrijeme_na_zemlji;
	float selektovano = 1;
	String^ s = " Sekundi"; 

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//potrebno prebaciti brzina_kretanje i vrijeme_kretanja iz int u float
		//bug ako je jedno od polja prazno

		int brzina_svjetlosti = 299792;
		int brzina_kretanja = 0;
		int vrijeme_kretanja = 0;

		if (Convert::ToInt32(textBox1->Text) < brzina_svjetlosti && 
			Convert::ToInt32(textBox2->Text) != 0 && 
			textBox1->Text->Length != 0 && 
			textBox2->Text->Length != 0) {

			brzina_kretanja = Convert::ToInt32(textBox1->Text);
			vrijeme_kretanja = Convert::ToInt32(textBox2->Text);

			//Dani
			if (radioButton1->Checked){
					long double brzina_kretanja_2 = Math::Pow(brzina_kretanja, 2);
					long double brzina_svjetlosti_2 = Math::Pow(brzina_svjetlosti, 2);
					float razlomak = (brzina_kretanja_2) / (brzina_svjetlosti_2);
					float d = Math::Sqrt(1 - razlomak);
					vrijeme_na_zemlji = (vrijeme_kretanja * 86400) / d;
					textBox3->Text = Convert::ToString(vrijeme_na_zemlji / selektovano) + s;
			}

			//Sati
			if (radioButton2->Checked) {
				long double brzina_kretanja_2 = Math::Pow(brzina_kretanja, 2);
				long double brzina_svjetlosti_2 = Math::Pow(brzina_svjetlosti, 2);
				float razlomak = (brzina_kretanja_2) / (brzina_svjetlosti_2);
				float d = Math::Sqrt(1 - razlomak);
				vrijeme_na_zemlji = (vrijeme_kretanja * 3600) / d;
				textBox3->Text = Convert::ToString(vrijeme_na_zemlji / selektovano) + s;
			}

			//Minuti
			if (radioButton3->Checked) {
				long double brzina_kretanja_2 = Math::Pow(brzina_kretanja, 2);
				long double brzina_svjetlosti_2 = Math::Pow(brzina_svjetlosti, 2);
				float razlomak = (brzina_kretanja_2) / (brzina_svjetlosti_2);
				float d = Math::Sqrt(1 - razlomak);
				vrijeme_na_zemlji = (vrijeme_kretanja * 60) / d;
				textBox3->Text = Convert::ToString(vrijeme_na_zemlji / selektovano) + s;
			}
		}
		else if (Convert::ToInt32(textBox1->Text) >= brzina_svjetlosti) {
			MessageBox::Show("Tvoja brzina ne moze biti veca od brzine svjetlosti.");
			textBox3->Text = "";
		}
		else if (Convert::ToInt32(textBox2->Text) == 0) {
			MessageBox::Show("Vrijeme kretanje ne moze biti 0.");
			textBox3->Text = "";
		}
		else if (textBox2->Text->Length == 0){
			MessageBox::Show("Unesite vrijeme kretanja.");
			textBox3->Text = "";
		}
		else{
			MessageBox::Show("Unesite brzinu kretanja.");
			textBox3->Text = "";
		}
	}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->textBox1->Text->Contains(".") && !this->textBox1->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}

private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton4->Checked) {
		selektovano = 86400;
		s = " Dana";
	}
}

private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton5->Checked) {
		selektovano = 3600;
		s = " Sati";
	}
}

private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton6->Checked) {
		selektovano = 60;
		s = " Minuta";
	}
}

private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton7->Checked) {
		selektovano = 1;
		s = " Sekundi";
	}
}

};
	[STAThreadAttribute]
	void Main(array<String^>^ args) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Projekat::MyForm form;
		Application::Run(% form);
}
	
}
