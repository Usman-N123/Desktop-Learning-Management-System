#pragma once

namespace FlexGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;	//For Data View
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::DataGridView^ dataGridViewTeacher;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ buttonSearchStd;
	private: System::Windows::Forms::TextBox^ textBoxSearchStd;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Button^ buttonSearchTh;
	private: System::Windows::Forms::TextBox^ textBoxSearchTh;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Button^ buttonViewTh;

	public:
		DataTable^ table = gcnew DataTable();
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxContChngStd;
	public:

	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBoxAddressChngStd;


	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBoxLnameChngStd;

	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBoxFnameChngStd;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::CheckedListBox^ checkedListBoxFeeChngStd;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ buttonEditStd;
	private: System::Windows::Forms::Button^ buttonEditTeacher;

	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxContChngTh;

	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBoxAddressChngTh;

	private: System::Windows::Forms::Label^ label46;

	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::TextBox^ textBoxQualChngTh;

	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxSalryChngTh;




		   DataTable^ tableTeacher = gcnew DataTable();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControlAdmin;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::TabPage^ tabPageAddTeacher;
	private: System::Windows::Forms::TabPage^ tabPageAddStudent;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxDepartmentTh;
	private: System::Windows::Forms::TextBox^ textBoxLastTh;



	private: System::Windows::Forms::TextBox^ textBoxFirstTh;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPasswordTh;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxUsernameTh;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBoxPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerTh;
	private: System::Windows::Forms::ComboBox^ comboBoxGenderTh;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxcontTh;
	private: System::Windows::Forms::TextBox^ textBoxAddressTh;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxQualTh;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonAddTh;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxSalryTh;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::Button^ buttonAddStd;
	private: System::Windows::Forms::TextBox^ textBoxAddressStd;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBoxQualStd;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxContactStd;

	private: System::Windows::Forms::ComboBox^ comboBoxGenderStd;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerRegStd;


	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::CheckBox^ checkBoxPasswordStd;

	private: System::Windows::Forms::TextBox^ textBoxPasswordStd;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBoxUsernameStd;

	private: System::Windows::Forms::ComboBox^ comboBoxDeptStd;

	private: System::Windows::Forms::TextBox^ textBoxLastStd;

	private: System::Windows::Forms::TextBox^ textBoxFirstStd;


	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::CheckedListBox^ checkedListBoxFeeStd;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBoxMarksStd;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::CheckedListBox^ checkedListBoxBloodStd;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TabPage^ tabPageViewStd;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Button^ buttonImportStd;

private: System::Windows::Forms::DataGridView^ dataGridView1;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->tabControlAdmin = (gcnew System::Windows::Forms::TabControl());
			this->tabPageAddTeacher = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->maskedTextBoxSalryTh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonAddTh = (gcnew System::Windows::Forms::Button());
			this->textBoxAddressTh = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxQualTh = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxcontTh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBoxGenderTh = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerTh = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBoxPassword = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxPasswordTh = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsernameTh = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDepartmentTh = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxLastTh = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstTh = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPageAddStudent = (gcnew System::Windows::Forms::TabPage());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarksStd = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->checkedListBoxBloodStd = (gcnew System::Windows::Forms::CheckedListBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->checkedListBoxFeeStd = (gcnew System::Windows::Forms::CheckedListBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAddStd = (gcnew System::Windows::Forms::Button());
			this->textBoxAddressStd = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBoxQualStd = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxContactStd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBoxGenderStd = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerRegStd = (gcnew System::Windows::Forms::DateTimePicker());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->checkBoxPasswordStd = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxPasswordStd = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsernameStd = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxDeptStd = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxLastStd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstStd = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPageViewStd = (gcnew System::Windows::Forms::TabPage());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->buttonEditStd = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->checkedListBoxFeeChngStd = (gcnew System::Windows::Forms::CheckedListBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxContChngStd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddressChngStd = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBoxLnameChngStd = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBoxFnameChngStd = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchStd = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchStd = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->buttonImportStd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBoxSalryChngTh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonEditTeacher = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxContChngTh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddressChngTh = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBoxQualChngTh = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchTh = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchTh = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->buttonViewTh = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTeacher = (gcnew System::Windows::Forms::DataGridView());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControlAdmin->SuspendLayout();
			this->tabPageAddTeacher->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPageAddStudent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPageViewStd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTeacher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControlAdmin
			// 
			this->tabControlAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControlAdmin->Controls->Add(this->tabPageAddTeacher);
			this->tabControlAdmin->Controls->Add(this->tabPageAddStudent);
			this->tabControlAdmin->Controls->Add(this->tabPageViewStd);
			this->tabControlAdmin->Controls->Add(this->tabPage1);
			this->tabControlAdmin->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControlAdmin->Location = System::Drawing::Point(1, 34);
			this->tabControlAdmin->Multiline = true;
			this->tabControlAdmin->Name = L"tabControlAdmin";
			this->tabControlAdmin->SelectedIndex = 0;
			this->tabControlAdmin->Size = System::Drawing::Size(972, 653);
			this->tabControlAdmin->TabIndex = 0;
			// 
			// tabPageAddTeacher
			// 
			this->tabPageAddTeacher->AutoScroll = true;
			this->tabPageAddTeacher->Controls->Add(this->label14);
			this->tabPageAddTeacher->Controls->Add(this->label13);
			this->tabPageAddTeacher->Controls->Add(this->label12);
			this->tabPageAddTeacher->Controls->Add(this->pictureBox1);
			this->tabPageAddTeacher->Controls->Add(this->maskedTextBoxSalryTh);
			this->tabPageAddTeacher->Controls->Add(this->label11);
			this->tabPageAddTeacher->Controls->Add(this->buttonAddTh);
			this->tabPageAddTeacher->Controls->Add(this->textBoxAddressTh);
			this->tabPageAddTeacher->Controls->Add(this->label10);
			this->tabPageAddTeacher->Controls->Add(this->textBoxQualTh);
			this->tabPageAddTeacher->Controls->Add(this->label9);
			this->tabPageAddTeacher->Controls->Add(this->label8);
			this->tabPageAddTeacher->Controls->Add(this->maskedTextBoxcontTh);
			this->tabPageAddTeacher->Controls->Add(this->comboBoxGenderTh);
			this->tabPageAddTeacher->Controls->Add(this->label7);
			this->tabPageAddTeacher->Controls->Add(this->dateTimePickerTh);
			this->tabPageAddTeacher->Controls->Add(this->label6);
			this->tabPageAddTeacher->Controls->Add(this->checkBoxPassword);
			this->tabPageAddTeacher->Controls->Add(this->textBoxPasswordTh);
			this->tabPageAddTeacher->Controls->Add(this->label5);
			this->tabPageAddTeacher->Controls->Add(this->textBoxUsernameTh);
			this->tabPageAddTeacher->Controls->Add(this->label4);
			this->tabPageAddTeacher->Controls->Add(this->label3);
			this->tabPageAddTeacher->Controls->Add(this->comboBoxDepartmentTh);
			this->tabPageAddTeacher->Controls->Add(this->textBoxLastTh);
			this->tabPageAddTeacher->Controls->Add(this->textBoxFirstTh);
			this->tabPageAddTeacher->Controls->Add(this->label2);
			this->tabPageAddTeacher->Controls->Add(this->label1);
			this->tabPageAddTeacher->Location = System::Drawing::Point(4, 22);
			this->tabPageAddTeacher->Name = L"tabPageAddTeacher";
			this->tabPageAddTeacher->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAddTeacher->Size = System::Drawing::Size(964, 627);
			this->tabPageAddTeacher->TabIndex = 0;
			this->tabPageAddTeacher->Text = L"Add Teacher";
			this->tabPageAddTeacher->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label14->Location = System::Drawing::Point(3, 155);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(234, 23);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Enter details to add a Teacher";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 614);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 23);
			this->label13->TabIndex = 26;
			this->label13->Text = L"📞 Contact";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label12->Location = System::Drawing::Point(3, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(141, 23);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Welcome Admin!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(228, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// maskedTextBoxSalryTh
			// 
			this->maskedTextBoxSalryTh->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxSalryTh->Location = System::Drawing::Point(326, 554);
			this->maskedTextBoxSalryTh->Mask = L"000000";
			this->maskedTextBoxSalryTh->Name = L"maskedTextBoxSalryTh";
			this->maskedTextBoxSalryTh->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxSalryTh->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(322, 528);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 23);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Salary";
			// 
			// buttonAddTh
			// 
			this->buttonAddTh->BackColor = System::Drawing::SystemColors::HotTrack;
			this->buttonAddTh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddTh->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddTh->ForeColor = System::Drawing::Color::White;
			this->buttonAddTh->Location = System::Drawing::Point(326, 586);
			this->buttonAddTh->Name = L"buttonAddTh";
			this->buttonAddTh->Size = System::Drawing::Size(104, 39);
			this->buttonAddTh->TabIndex = 22;
			this->buttonAddTh->Text = L"Add Teacher";
			this->buttonAddTh->UseVisualStyleBackColor = false;
			this->buttonAddTh->Click += gcnew System::EventHandler(this, &AdminForm::buttonAddTh_Click);
			// 
			// textBoxAddressTh
			// 
			this->textBoxAddressTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddressTh->Location = System::Drawing::Point(326, 500);
			this->textBoxAddressTh->Name = L"textBoxAddressTh";
			this->textBoxAddressTh->Size = System::Drawing::Size(210, 23);
			this->textBoxAddressTh->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(322, 474);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 23);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Address";
			// 
			// textBoxQualTh
			// 
			this->textBoxQualTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQualTh->Location = System::Drawing::Point(326, 446);
			this->textBoxQualTh->Name = L"textBoxQualTh";
			this->textBoxQualTh->Size = System::Drawing::Size(210, 23);
			this->textBoxQualTh->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(322, 420);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 23);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Qualification";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(322, 368);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 23);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Contact No";
			// 
			// maskedTextBoxcontTh
			// 
			this->maskedTextBoxcontTh->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxcontTh->Location = System::Drawing::Point(326, 394);
			this->maskedTextBoxcontTh->Mask = L"000-0000000";
			this->maskedTextBoxcontTh->Name = L"maskedTextBoxcontTh";
			this->maskedTextBoxcontTh->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxcontTh->TabIndex = 16;
			// 
			// comboBoxGenderTh
			// 
			this->comboBoxGenderTh->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxGenderTh->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxGenderTh->FormattingEnabled = true;
			this->comboBoxGenderTh->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Male", L"Female", L"LGTV+", L"Boeing 747-400ERF Jumbo Jet four engine wide-body cruising speed 917 km/h up to 8"
					L"000 nautical miles ",
					L"Prefer Not Say", L"Other"
			});
			this->comboBoxGenderTh->Location = System::Drawing::Point(326, 341);
			this->comboBoxGenderTh->Name = L"comboBoxGenderTh";
			this->comboBoxGenderTh->Size = System::Drawing::Size(210, 22);
			this->comboBoxGenderTh->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(322, 315);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 23);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Gender";
			// 
			// dateTimePickerTh
			// 
			this->dateTimePickerTh->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerTh->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerTh->Location = System::Drawing::Point(326, 289);
			this->dateTimePickerTh->Name = L"dateTimePickerTh";
			this->dateTimePickerTh->Size = System::Drawing::Size(210, 21);
			this->dateTimePickerTh->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(322, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Registration Date";
			// 
			// checkBoxPassword
			// 
			this->checkBoxPassword->AutoSize = true;
			this->checkBoxPassword->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->checkBoxPassword->Location = System::Drawing::Point(542, 237);
			this->checkBoxPassword->Name = L"checkBoxPassword";
			this->checkBoxPassword->Size = System::Drawing::Size(109, 19);
			this->checkBoxPassword->TabIndex = 10;
			this->checkBoxPassword->Text = L"Show Password";
			this->checkBoxPassword->UseVisualStyleBackColor = true;
			this->checkBoxPassword->CheckedChanged += gcnew System::EventHandler(this, &AdminForm::checkBoxPassword_CheckedChanged);
			// 
			// textBoxPasswordTh
			// 
			this->textBoxPasswordTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxPasswordTh->Location = System::Drawing::Point(326, 235);
			this->textBoxPasswordTh->Name = L"textBoxPasswordTh";
			this->textBoxPasswordTh->PasswordChar = '*';
			this->textBoxPasswordTh->Size = System::Drawing::Size(210, 23);
			this->textBoxPasswordTh->TabIndex = 9;
			this->textBoxPasswordTh->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBoxPasswordTh_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(322, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Password";
			// 
			// textBoxUsernameTh
			// 
			this->textBoxUsernameTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxUsernameTh->Location = System::Drawing::Point(326, 181);
			this->textBoxUsernameTh->Name = L"textBoxUsernameTh";
			this->textBoxUsernameTh->Size = System::Drawing::Size(210, 23);
			this->textBoxUsernameTh->TabIndex = 7;
			this->textBoxUsernameTh->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBoxUsernameTh_TextChanged);
			this->textBoxUsernameTh->Leave += gcnew System::EventHandler(this, &AdminForm::textBoxUsernameTh_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(322, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(322, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Department";
			// 
			// comboBoxDepartmentTh
			// 
			this->comboBoxDepartmentTh->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxDepartmentTh->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDepartmentTh->FormattingEnabled = true;
			this->comboBoxDepartmentTh->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Computer Science (CS)", L"Software Engineering (SE)",
					L"Electrical Engineering (EE)", L"Buisness", L"Social Sciences"
			});
			this->comboBoxDepartmentTh->Location = System::Drawing::Point(326, 122);
			this->comboBoxDepartmentTh->Name = L"comboBoxDepartmentTh";
			this->comboBoxDepartmentTh->Size = System::Drawing::Size(210, 22);
			this->comboBoxDepartmentTh->TabIndex = 4;
			this->comboBoxDepartmentTh->Leave += gcnew System::EventHandler(this, &AdminForm::comboBoxDepartment_Leave);
			// 
			// textBoxLastTh
			// 
			this->textBoxLastTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxLastTh->Location = System::Drawing::Point(436, 60);
			this->textBoxLastTh->Name = L"textBoxLastTh";
			this->textBoxLastTh->Size = System::Drawing::Size(100, 23);
			this->textBoxLastTh->TabIndex = 3;
			// 
			// textBoxFirstTh
			// 
			this->textBoxFirstTh->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFirstTh->Location = System::Drawing::Point(326, 60);
			this->textBoxFirstTh->Name = L"textBoxFirstTh";
			this->textBoxFirstTh->Size = System::Drawing::Size(100, 23);
			this->textBoxFirstTh->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(432, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Last Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(322, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// tabPageAddStudent
			// 
			this->tabPageAddStudent->AutoScroll = true;
			this->tabPageAddStudent->Controls->Add(this->label30);
			this->tabPageAddStudent->Controls->Add(this->textBoxMarksStd);
			this->tabPageAddStudent->Controls->Add(this->label29);
			this->tabPageAddStudent->Controls->Add(this->checkedListBoxBloodStd);
			this->tabPageAddStudent->Controls->Add(this->label18);
			this->tabPageAddStudent->Controls->Add(this->checkedListBoxFeeStd);
			this->tabPageAddStudent->Controls->Add(this->label28);
			this->tabPageAddStudent->Controls->Add(this->label27);
			this->tabPageAddStudent->Controls->Add(this->label15);
			this->tabPageAddStudent->Controls->Add(this->label16);
			this->tabPageAddStudent->Controls->Add(this->label17);
			this->tabPageAddStudent->Controls->Add(this->pictureBox2);
			this->tabPageAddStudent->Controls->Add(this->buttonAddStd);
			this->tabPageAddStudent->Controls->Add(this->textBoxAddressStd);
			this->tabPageAddStudent->Controls->Add(this->label19);
			this->tabPageAddStudent->Controls->Add(this->textBoxQualStd);
			this->tabPageAddStudent->Controls->Add(this->label20);
			this->tabPageAddStudent->Controls->Add(this->label21);
			this->tabPageAddStudent->Controls->Add(this->maskedTextBoxContactStd);
			this->tabPageAddStudent->Controls->Add(this->comboBoxGenderStd);
			this->tabPageAddStudent->Controls->Add(this->label22);
			this->tabPageAddStudent->Controls->Add(this->dateTimePickerRegStd);
			this->tabPageAddStudent->Controls->Add(this->label23);
			this->tabPageAddStudent->Controls->Add(this->checkBoxPasswordStd);
			this->tabPageAddStudent->Controls->Add(this->textBoxPasswordStd);
			this->tabPageAddStudent->Controls->Add(this->label24);
			this->tabPageAddStudent->Controls->Add(this->textBoxUsernameStd);
			this->tabPageAddStudent->Controls->Add(this->comboBoxDeptStd);
			this->tabPageAddStudent->Controls->Add(this->textBoxLastStd);
			this->tabPageAddStudent->Controls->Add(this->textBoxFirstStd);
			this->tabPageAddStudent->Controls->Add(this->label25);
			this->tabPageAddStudent->Controls->Add(this->label26);
			this->tabPageAddStudent->Location = System::Drawing::Point(4, 22);
			this->tabPageAddStudent->Name = L"tabPageAddStudent";
			this->tabPageAddStudent->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAddStudent->Size = System::Drawing::Size(964, 627);
			this->tabPageAddStudent->TabIndex = 1;
			this->tabPageAddStudent->Text = L"Add Student";
			this->tabPageAddStudent->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(106, 263);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(59, 23);
			this->label30->TabIndex = 61;
			this->label30->Text = L"Marks";
			// 
			// textBoxMarksStd
			// 
			this->textBoxMarksStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarksStd->Location = System::Drawing::Point(110, 290);
			this->textBoxMarksStd->Name = L"textBoxMarksStd";
			this->textBoxMarksStd->Size = System::Drawing::Size(189, 23);
			this->textBoxMarksStd->TabIndex = 60;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(106, 337);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(107, 23);
			this->label29->TabIndex = 59;
			this->label29->Text = L"Blood Group";
			// 
			// checkedListBoxBloodStd
			// 
			this->checkedListBoxBloodStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBoxBloodStd->FormattingEnabled = true;
			this->checkedListBoxBloodStd->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"A", L"B", L"O" });
			this->checkedListBoxBloodStd->Location = System::Drawing::Point(110, 368);
			this->checkedListBoxBloodStd->Name = L"checkedListBoxBloodStd";
			this->checkedListBoxBloodStd->Size = System::Drawing::Size(189, 70);
			this->checkedListBoxBloodStd->TabIndex = 58;
			this->checkedListBoxBloodStd->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &AdminForm::checkedListBoxBloodStd_ItemCheck);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(106, 443);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 23);
			this->label18->TabIndex = 57;
			this->label18->Text = L"Fee Status";
			// 
			// checkedListBoxFeeStd
			// 
			this->checkedListBoxFeeStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBoxFeeStd->FormattingEnabled = true;
			this->checkedListBoxFeeStd->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Paid", L"Unpaid" });
			this->checkedListBoxFeeStd->Location = System::Drawing::Point(110, 474);
			this->checkedListBoxFeeStd->Name = L"checkedListBoxFeeStd";
			this->checkedListBoxFeeStd->Size = System::Drawing::Size(189, 48);
			this->checkedListBoxFeeStd->TabIndex = 56;
			this->checkedListBoxFeeStd->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &AdminForm::checkedListBoxFeeStd_ItemCheck);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(326, 155);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(89, 23);
			this->label28->TabIndex = 55;
			this->label28->Text = L"Username";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(326, 96);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(103, 23);
			this->label27->TabIndex = 54;
			this->label27->Text = L"Department";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label15->Location = System::Drawing::Point(7, 155);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(235, 23);
			this->label15->TabIndex = 53;
			this->label15->Text = L"Enter details to add a Student";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(6, 564);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(93, 23);
			this->label16->TabIndex = 52;
			this->label16->Text = L"📞 Contact";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label17->Location = System::Drawing::Point(7, 118);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 23);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Welcome Admin!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(228, 94);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// buttonAddStd
			// 
			this->buttonAddStd->BackColor = System::Drawing::SystemColors::HotTrack;
			this->buttonAddStd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddStd->ForeColor = System::Drawing::Color::White;
			this->buttonAddStd->Location = System::Drawing::Point(330, 548);
			this->buttonAddStd->Name = L"buttonAddStd";
			this->buttonAddStd->Size = System::Drawing::Size(104, 39);
			this->buttonAddStd->TabIndex = 48;
			this->buttonAddStd->Text = L"Add Student";
			this->buttonAddStd->UseVisualStyleBackColor = false;
			this->buttonAddStd->Click += gcnew System::EventHandler(this, &AdminForm::buttonAddStd_Click);
			// 
			// textBoxAddressStd
			// 
			this->textBoxAddressStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddressStd->Location = System::Drawing::Point(330, 500);
			this->textBoxAddressStd->Name = L"textBoxAddressStd";
			this->textBoxAddressStd->Size = System::Drawing::Size(210, 23);
			this->textBoxAddressStd->TabIndex = 47;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(326, 474);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 23);
			this->label19->TabIndex = 46;
			this->label19->Text = L"Address";
			// 
			// textBoxQualStd
			// 
			this->textBoxQualStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQualStd->Location = System::Drawing::Point(330, 446);
			this->textBoxQualStd->Name = L"textBoxQualStd";
			this->textBoxQualStd->Size = System::Drawing::Size(210, 23);
			this->textBoxQualStd->TabIndex = 45;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(326, 420);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(108, 23);
			this->label20->TabIndex = 44;
			this->label20->Text = L"Qualification";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(326, 368);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 23);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Contact No";
			// 
			// maskedTextBoxContactStd
			// 
			this->maskedTextBoxContactStd->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxContactStd->Location = System::Drawing::Point(330, 394);
			this->maskedTextBoxContactStd->Mask = L"000-0000000";
			this->maskedTextBoxContactStd->Name = L"maskedTextBoxContactStd";
			this->maskedTextBoxContactStd->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxContactStd->TabIndex = 42;
			// 
			// comboBoxGenderStd
			// 
			this->comboBoxGenderStd->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxGenderStd->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxGenderStd->FormattingEnabled = true;
			this->comboBoxGenderStd->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Male", L"Female", L"LGTV+", L"Boeing 747-400ERF Jumbo Jet four engine wide-body cruising speed 917 km/h up to 8"
					L"000 nautical miles ",
					L"Prefer Not Say", L"Other"
			});
			this->comboBoxGenderStd->Location = System::Drawing::Point(330, 341);
			this->comboBoxGenderStd->Name = L"comboBoxGenderStd";
			this->comboBoxGenderStd->Size = System::Drawing::Size(210, 22);
			this->comboBoxGenderStd->TabIndex = 41;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(326, 315);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 23);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Gender";
			// 
			// dateTimePickerRegStd
			// 
			this->dateTimePickerRegStd->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerRegStd->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerRegStd->Location = System::Drawing::Point(330, 289);
			this->dateTimePickerRegStd->MaxDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerRegStd->MinDate = System::DateTime(2019, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerRegStd->Name = L"dateTimePickerRegStd";
			this->dateTimePickerRegStd->Size = System::Drawing::Size(210, 21);
			this->dateTimePickerRegStd->TabIndex = 39;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(326, 263);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(143, 23);
			this->label23->TabIndex = 38;
			this->label23->Text = L"Registration Date";
			// 
			// checkBoxPasswordStd
			// 
			this->checkBoxPasswordStd->AutoSize = true;
			this->checkBoxPasswordStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->checkBoxPasswordStd->Location = System::Drawing::Point(546, 237);
			this->checkBoxPasswordStd->Name = L"checkBoxPasswordStd";
			this->checkBoxPasswordStd->Size = System::Drawing::Size(109, 19);
			this->checkBoxPasswordStd->TabIndex = 37;
			this->checkBoxPasswordStd->Text = L"Show Password";
			this->checkBoxPasswordStd->UseVisualStyleBackColor = true;
			this->checkBoxPasswordStd->CheckedChanged += gcnew System::EventHandler(this, &AdminForm::checkBoxPasswordStd_CheckedChanged);
			// 
			// textBoxPasswordStd
			// 
			this->textBoxPasswordStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxPasswordStd->Location = System::Drawing::Point(330, 235);
			this->textBoxPasswordStd->Name = L"textBoxPasswordStd";
			this->textBoxPasswordStd->PasswordChar = '*';
			this->textBoxPasswordStd->Size = System::Drawing::Size(210, 23);
			this->textBoxPasswordStd->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(326, 209);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(86, 23);
			this->label24->TabIndex = 35;
			this->label24->Text = L"Password";
			// 
			// textBoxUsernameStd
			// 
			this->textBoxUsernameStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxUsernameStd->Location = System::Drawing::Point(330, 181);
			this->textBoxUsernameStd->Name = L"textBoxUsernameStd";
			this->textBoxUsernameStd->Size = System::Drawing::Size(210, 23);
			this->textBoxUsernameStd->TabIndex = 34;
			this->textBoxUsernameStd->Leave += gcnew System::EventHandler(this, &AdminForm::textBoxUsernameStd_Leave);
			// 
			// comboBoxDeptStd
			// 
			this->comboBoxDeptStd->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxDeptStd->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDeptStd->FormattingEnabled = true;
			this->comboBoxDeptStd->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Computer Science (CS)", L"Software Engineering (SE)",
					L"Electrical Engineering (EE)", L"Buisness", L"Social Sciences"
			});
			this->comboBoxDeptStd->Location = System::Drawing::Point(330, 122);
			this->comboBoxDeptStd->Name = L"comboBoxDeptStd";
			this->comboBoxDeptStd->Size = System::Drawing::Size(210, 22);
			this->comboBoxDeptStd->TabIndex = 33;
			// 
			// textBoxLastStd
			// 
			this->textBoxLastStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F));
			this->textBoxLastStd->Location = System::Drawing::Point(440, 60);
			this->textBoxLastStd->Name = L"textBoxLastStd";
			this->textBoxLastStd->Size = System::Drawing::Size(100, 23);
			this->textBoxLastStd->TabIndex = 32;
			// 
			// textBoxFirstStd
			// 
			this->textBoxFirstStd->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFirstStd->Location = System::Drawing::Point(330, 60);
			this->textBoxFirstStd->Name = L"textBoxFirstStd";
			this->textBoxFirstStd->Size = System::Drawing::Size(100, 23);
			this->textBoxFirstStd->TabIndex = 31;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(436, 34);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(90, 23);
			this->label25->TabIndex = 30;
			this->label25->Text = L"Last Name";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(326, 34);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 28;
			this->label26->Text = L"First Name";
			// 
			// tabPageViewStd
			// 
			this->tabPageViewStd->Controls->Add(this->label41);
			this->tabPageViewStd->Controls->Add(this->buttonEditStd);
			this->tabPageViewStd->Controls->Add(this->label40);
			this->tabPageViewStd->Controls->Add(this->checkedListBoxFeeChngStd);
			this->tabPageViewStd->Controls->Add(this->label39);
			this->tabPageViewStd->Controls->Add(this->maskedTextBoxContChngStd);
			this->tabPageViewStd->Controls->Add(this->label38);
			this->tabPageViewStd->Controls->Add(this->textBoxAddressChngStd);
			this->tabPageViewStd->Controls->Add(this->label37);
			this->tabPageViewStd->Controls->Add(this->textBoxLnameChngStd);
			this->tabPageViewStd->Controls->Add(this->label36);
			this->tabPageViewStd->Controls->Add(this->textBoxFnameChngStd);
			this->tabPageViewStd->Controls->Add(this->buttonSearchStd);
			this->tabPageViewStd->Controls->Add(this->textBoxSearchStd);
			this->tabPageViewStd->Controls->Add(this->label34);
			this->tabPageViewStd->Controls->Add(this->label32);
			this->tabPageViewStd->Controls->Add(this->buttonImportStd);
			this->tabPageViewStd->Controls->Add(this->dataGridView1);
			this->tabPageViewStd->Controls->Add(this->label31);
			this->tabPageViewStd->Controls->Add(this->pictureBox3);
			this->tabPageViewStd->Location = System::Drawing::Point(4, 22);
			this->tabPageViewStd->Name = L"tabPageViewStd";
			this->tabPageViewStd->Padding = System::Windows::Forms::Padding(3);
			this->tabPageViewStd->Size = System::Drawing::Size(964, 627);
			this->tabPageViewStd->TabIndex = 2;
			this->tabPageViewStd->Text = L"View Student";
			this->tabPageViewStd->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label41->Location = System::Drawing::Point(8, 107);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(188, 23);
			this->label41->TabIndex = 71;
			this->label41->Text = L"Enter Details to Change";
			this->label41->Visible = false;
			// 
			// buttonEditStd
			// 
			this->buttonEditStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEditStd->Location = System::Drawing::Point(249, 544);
			this->buttonEditStd->Name = L"buttonEditStd";
			this->buttonEditStd->Size = System::Drawing::Size(125, 42);
			this->buttonEditStd->TabIndex = 70;
			this->buttonEditStd->Text = L"Edit";
			this->buttonEditStd->UseVisualStyleBackColor = true;
			this->buttonEditStd->Click += gcnew System::EventHandler(this, &AdminForm::buttonEditStd_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(8, 453);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(89, 23);
			this->label40->TabIndex = 69;
			this->label40->Text = L"Fee Status";
			this->label40->Visible = false;
			// 
			// checkedListBoxFeeChngStd
			// 
			this->checkedListBoxFeeChngStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBoxFeeChngStd->FormattingEnabled = true;
			this->checkedListBoxFeeChngStd->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Paid", L"Unpaid" });
			this->checkedListBoxFeeChngStd->Location = System::Drawing::Point(12, 484);
			this->checkedListBoxFeeChngStd->Name = L"checkedListBoxFeeChngStd";
			this->checkedListBoxFeeChngStd->Size = System::Drawing::Size(189, 48);
			this->checkedListBoxFeeChngStd->TabIndex = 68;
			this->checkedListBoxFeeChngStd->Visible = false;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(7, 399);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(95, 23);
			this->label39->TabIndex = 67;
			this->label39->Text = L"Contact No";
			this->label39->Visible = false;
			// 
			// maskedTextBoxContChngStd
			// 
			this->maskedTextBoxContChngStd->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxContChngStd->Location = System::Drawing::Point(11, 425);
			this->maskedTextBoxContChngStd->Mask = L"000-0000000";
			this->maskedTextBoxContChngStd->Name = L"maskedTextBoxContChngStd";
			this->maskedTextBoxContChngStd->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxContChngStd->TabIndex = 66;
			this->maskedTextBoxContChngStd->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label38->Location = System::Drawing::Point(7, 347);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(73, 23);
			this->label38->TabIndex = 65;
			this->label38->Text = L"Address";
			this->label38->Visible = false;
			// 
			// textBoxAddressChngStd
			// 
			this->textBoxAddressChngStd->Location = System::Drawing::Point(12, 373);
			this->textBoxAddressChngStd->Name = L"textBoxAddressChngStd";
			this->textBoxAddressChngStd->Size = System::Drawing::Size(167, 21);
			this->textBoxAddressChngStd->TabIndex = 64;
			this->textBoxAddressChngStd->Visible = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label37->Location = System::Drawing::Point(7, 295);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(90, 23);
			this->label37->TabIndex = 63;
			this->label37->Text = L"Last Name";
			this->label37->Visible = false;
			// 
			// textBoxLnameChngStd
			// 
			this->textBoxLnameChngStd->Location = System::Drawing::Point(12, 321);
			this->textBoxLnameChngStd->Name = L"textBoxLnameChngStd";
			this->textBoxLnameChngStd->Size = System::Drawing::Size(167, 21);
			this->textBoxLnameChngStd->TabIndex = 62;
			this->textBoxLnameChngStd->Visible = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label36->Location = System::Drawing::Point(6, 243);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(93, 23);
			this->label36->TabIndex = 61;
			this->label36->Text = L"First Name";
			this->label36->Visible = false;
			// 
			// textBoxFnameChngStd
			// 
			this->textBoxFnameChngStd->Location = System::Drawing::Point(11, 269);
			this->textBoxFnameChngStd->Name = L"textBoxFnameChngStd";
			this->textBoxFnameChngStd->Size = System::Drawing::Size(167, 21);
			this->textBoxFnameChngStd->TabIndex = 60;
			this->textBoxFnameChngStd->Visible = false;
			// 
			// buttonSearchStd
			// 
			this->buttonSearchStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearchStd->Location = System::Drawing::Point(11, 207);
			this->buttonSearchStd->Name = L"buttonSearchStd";
			this->buttonSearchStd->Size = System::Drawing::Size(137, 33);
			this->buttonSearchStd->TabIndex = 59;
			this->buttonSearchStd->Text = L"Search";
			this->buttonSearchStd->UseVisualStyleBackColor = true;
			this->buttonSearchStd->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchStd_Click);
			// 
			// textBoxSearchStd
			// 
			this->textBoxSearchStd->Location = System::Drawing::Point(11, 180);
			this->textBoxSearchStd->Name = L"textBoxSearchStd";
			this->textBoxSearchStd->Size = System::Drawing::Size(167, 21);
			this->textBoxSearchStd->TabIndex = 58;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label34->Location = System::Drawing::Point(7, 145);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(171, 23);
			this->label34->TabIndex = 57;
			this->label34->Text = L"Search Student by ID";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label32->Location = System::Drawing::Point(706, 71);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(260, 23);
			this->label32->TabIndex = 56;
			this->label32->Text = L"Fee Status(P = Paid / U = Unpaid)";
			// 
			// buttonImportStd
			// 
			this->buttonImportStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonImportStd->Location = System::Drawing::Point(710, 190);
			this->buttonImportStd->Name = L"buttonImportStd";
			this->buttonImportStd->Size = System::Drawing::Size(137, 33);
			this->buttonImportStd->TabIndex = 55;
			this->buttonImportStd->Text = L"Vew All Students";
			this->buttonImportStd->UseVisualStyleBackColor = true;
			this->buttonImportStd->Click += gcnew System::EventHandler(this, &AdminForm::buttonImport_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(249, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(442, 499);
			this->dataGridView1->TabIndex = 54;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label31->Location = System::Drawing::Point(706, 145);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(141, 23);
			this->label31->TabIndex = 53;
			this->label31->Text = L"Welcome Admin!";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(228, 94);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 52;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->maskedTextBoxSalryChngTh);
			this->tabPage1->Controls->Add(this->buttonEditTeacher);
			this->tabPage1->Controls->Add(this->label44);
			this->tabPage1->Controls->Add(this->maskedTextBoxContChngTh);
			this->tabPage1->Controls->Add(this->label45);
			this->tabPage1->Controls->Add(this->textBoxAddressChngTh);
			this->tabPage1->Controls->Add(this->label46);
			this->tabPage1->Controls->Add(this->label47);
			this->tabPage1->Controls->Add(this->textBoxQualChngTh);
			this->tabPage1->Controls->Add(this->label42);
			this->tabPage1->Controls->Add(this->buttonSearchTh);
			this->tabPage1->Controls->Add(this->textBoxSearchTh);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->buttonViewTh);
			this->tabPage1->Controls->Add(this->dataGridViewTeacher);
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(964, 627);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"View Teacher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// maskedTextBoxSalryChngTh
			// 
			this->maskedTextBoxSalryChngTh->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxSalryChngTh->Location = System::Drawing::Point(11, 320);
			this->maskedTextBoxSalryChngTh->Mask = L"000000";
			this->maskedTextBoxSalryChngTh->Name = L"maskedTextBoxSalryChngTh";
			this->maskedTextBoxSalryChngTh->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxSalryChngTh->TabIndex = 84;
			// 
			// buttonEditTeacher
			// 
			this->buttonEditTeacher->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEditTeacher->Location = System::Drawing::Point(249, 544);
			this->buttonEditTeacher->Name = L"buttonEditTeacher";
			this->buttonEditTeacher->Size = System::Drawing::Size(125, 42);
			this->buttonEditTeacher->TabIndex = 83;
			this->buttonEditTeacher->Text = L"Edit";
			this->buttonEditTeacher->UseVisualStyleBackColor = true;
			this->buttonEditTeacher->Click += gcnew System::EventHandler(this, &AdminForm::buttonEditTeacher_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(8, 398);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(95, 23);
			this->label44->TabIndex = 80;
			this->label44->Text = L"Contact No";
			this->label44->Visible = false;
			// 
			// maskedTextBoxContChngTh
			// 
			this->maskedTextBoxContChngTh->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxContChngTh->Location = System::Drawing::Point(12, 424);
			this->maskedTextBoxContChngTh->Mask = L"000-0000000";
			this->maskedTextBoxContChngTh->Name = L"maskedTextBoxContChngTh";
			this->maskedTextBoxContChngTh->Size = System::Drawing::Size(210, 21);
			this->maskedTextBoxContChngTh->TabIndex = 79;
			this->maskedTextBoxContChngTh->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label45->Location = System::Drawing::Point(8, 346);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(73, 23);
			this->label45->TabIndex = 78;
			this->label45->Text = L"Address";
			this->label45->Visible = false;
			// 
			// textBoxAddressChngTh
			// 
			this->textBoxAddressChngTh->Location = System::Drawing::Point(13, 372);
			this->textBoxAddressChngTh->Name = L"textBoxAddressChngTh";
			this->textBoxAddressChngTh->Size = System::Drawing::Size(167, 21);
			this->textBoxAddressChngTh->TabIndex = 77;
			this->textBoxAddressChngTh->Visible = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label46->Location = System::Drawing::Point(8, 294);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(57, 23);
			this->label46->TabIndex = 76;
			this->label46->Text = L"Salary";
			this->label46->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label47->Location = System::Drawing::Point(7, 242);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(108, 23);
			this->label47->TabIndex = 74;
			this->label47->Text = L"Qualification";
			this->label47->Visible = false;
			// 
			// textBoxQualChngTh
			// 
			this->textBoxQualChngTh->Location = System::Drawing::Point(12, 268);
			this->textBoxQualChngTh->Name = L"textBoxQualChngTh";
			this->textBoxQualChngTh->Size = System::Drawing::Size(167, 21);
			this->textBoxQualChngTh->TabIndex = 73;
			this->textBoxQualChngTh->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label42->Location = System::Drawing::Point(7, 104);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(188, 23);
			this->label42->TabIndex = 72;
			this->label42->Text = L"Enter Details to Change";
			this->label42->Visible = false;
			// 
			// buttonSearchTh
			// 
			this->buttonSearchTh->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearchTh->Location = System::Drawing::Point(11, 193);
			this->buttonSearchTh->Name = L"buttonSearchTh";
			this->buttonSearchTh->Size = System::Drawing::Size(137, 33);
			this->buttonSearchTh->TabIndex = 64;
			this->buttonSearchTh->Text = L"Search";
			this->buttonSearchTh->UseVisualStyleBackColor = true;
			this->buttonSearchTh->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchTh_Click);
			// 
			// textBoxSearchTh
			// 
			this->textBoxSearchTh->Location = System::Drawing::Point(11, 166);
			this->textBoxSearchTh->Name = L"textBoxSearchTh";
			this->textBoxSearchTh->Size = System::Drawing::Size(167, 21);
			this->textBoxSearchTh->TabIndex = 63;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label35->Location = System::Drawing::Point(7, 140);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(171, 23);
			this->label35->TabIndex = 62;
			this->label35->Text = L"Search Student by ID";
			// 
			// buttonViewTh
			// 
			this->buttonViewTh->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonViewTh->Location = System::Drawing::Point(714, 140);
			this->buttonViewTh->Name = L"buttonViewTh";
			this->buttonViewTh->Size = System::Drawing::Size(137, 33);
			this->buttonViewTh->TabIndex = 61;
			this->buttonViewTh->Text = L"Vew All Teachers";
			this->buttonViewTh->UseVisualStyleBackColor = true;
			this->buttonViewTh->Click += gcnew System::EventHandler(this, &AdminForm::buttonViewTh_Click);
			// 
			// dataGridViewTeacher
			// 
			this->dataGridViewTeacher->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewTeacher->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridViewTeacher->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTeacher->Location = System::Drawing::Point(249, 39);
			this->dataGridViewTeacher->Name = L"dataGridViewTeacher";
			this->dataGridViewTeacher->Size = System::Drawing::Size(442, 499);
			this->dataGridViewTeacher->TabIndex = 58;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label33->Location = System::Drawing::Point(710, 104);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(141, 23);
			this->label33->TabIndex = 57;
			this->label33->Text = L"Welcome Admin!";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(228, 94);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 56;
			this->pictureBox4->TabStop = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(972, 686);
			this->Controls->Add(this->tabControlAdmin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->tabControlAdmin->ResumeLayout(false);
			this->tabPageAddTeacher->ResumeLayout(false);
			this->tabPageAddTeacher->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPageAddStudent->ResumeLayout(false);
			this->tabPageAddStudent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPageViewStd->ResumeLayout(false);
			this->tabPageViewStd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTeacher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	

private: System::Void comboBoxDepartment_Leave(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBoxUsernameTh_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBoxPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBoxUsernameTh_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxPasswordTh_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAddTh_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkedListBoxFeeStd_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e);
private: System::Void buttonAddStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkedListBoxBloodStd_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e);
private: System::Void checkBoxPasswordStd_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxUsernameStd_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonImport_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSearchStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonViewTh_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSearchTh_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonEditStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEditTeacher_Click(System::Object^ sender, System::EventArgs^ e);
};
}
