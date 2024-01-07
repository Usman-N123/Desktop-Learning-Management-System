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
	/// Summary for TeacherForm
	/// </summary>
	public ref class TeacherForm : public System::Windows::Forms::Form
	{
	public:
		TeacherForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		} 
	private: System::Windows::Forms::Button^ buttonImportTimetable;
	public:
		DataTable^ timeTable = gcnew DataTable();
		DataTable^ table = gcnew DataTable(); //Student Table
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonUpdateMarks;


	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBoxMarksChngStd;
	private: System::Windows::Forms::Button^ buttonSearchStd;
	private: System::Windows::Forms::TextBox^ textBoxSearchStd1;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Button^ buttonImportStd;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridViewAtd;

	private: System::Windows::Forms::Button^ buttonUpdateGrade;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonImportAtdTh;

	public:
		String^ userNameTh;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeacherForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPageAssignMarks;

	private: System::Windows::Forms::DataGridView^ dataGridViewTimeTable;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->buttonImportTimetable = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTimeTable = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageAssignMarks = (gcnew System::Windows::Forms::TabPage());
			this->buttonUpdateGrade = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonImportStd = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateMarks = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarksChngStd = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchStd = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchStd1 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonImportAtdTh = (gcnew System::Windows::Forms::Button());
			this->dataGridViewAtd = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTimeTable))->BeginInit();
			this->tabPageAssignMarks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAtd))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPageAssignMarks);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(692, 580);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonImportTimetable);
			this->tabPage1->Controls->Add(this->dataGridViewTimeTable);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(684, 554);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"TimeTable";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonImportTimetable
			// 
			this->buttonImportTimetable->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonImportTimetable->Location = System::Drawing::Point(7, 267);
			this->buttonImportTimetable->Name = L"buttonImportTimetable";
			this->buttonImportTimetable->Size = System::Drawing::Size(118, 42);
			this->buttonImportTimetable->TabIndex = 1;
			this->buttonImportTimetable->Text = L"Import Table";
			this->buttonImportTimetable->UseVisualStyleBackColor = true;
			this->buttonImportTimetable->Click += gcnew System::EventHandler(this, &TeacherForm::buttonImportTimetable_Click);
			// 
			// dataGridViewTimeTable
			// 
			this->dataGridViewTimeTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewTimeTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewTimeTable->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewTimeTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTimeTable->Location = System::Drawing::Point(3, 3);
			this->dataGridViewTimeTable->Name = L"dataGridViewTimeTable";
			this->dataGridViewTimeTable->Size = System::Drawing::Size(678, 258);
			this->dataGridViewTimeTable->TabIndex = 0;
			// 
			// tabPageAssignMarks
			// 
			this->tabPageAssignMarks->Controls->Add(this->buttonUpdateGrade);
			this->tabPageAssignMarks->Controls->Add(this->label5);
			this->tabPageAssignMarks->Controls->Add(this->label4);
			this->tabPageAssignMarks->Controls->Add(this->textBox4);
			this->tabPageAssignMarks->Controls->Add(this->label3);
			this->tabPageAssignMarks->Controls->Add(this->textBox3);
			this->tabPageAssignMarks->Controls->Add(this->label2);
			this->tabPageAssignMarks->Controls->Add(this->textBox2);
			this->tabPageAssignMarks->Controls->Add(this->label1);
			this->tabPageAssignMarks->Controls->Add(this->textBox1);
			this->tabPageAssignMarks->Controls->Add(this->buttonImportStd);
			this->tabPageAssignMarks->Controls->Add(this->buttonUpdateMarks);
			this->tabPageAssignMarks->Controls->Add(this->label41);
			this->tabPageAssignMarks->Controls->Add(this->label36);
			this->tabPageAssignMarks->Controls->Add(this->textBoxMarksChngStd);
			this->tabPageAssignMarks->Controls->Add(this->buttonSearchStd);
			this->tabPageAssignMarks->Controls->Add(this->textBoxSearchStd1);
			this->tabPageAssignMarks->Controls->Add(this->label34);
			this->tabPageAssignMarks->Controls->Add(this->dataGridView1);
			this->tabPageAssignMarks->Location = System::Drawing::Point(4, 22);
			this->tabPageAssignMarks->Name = L"tabPageAssignMarks";
			this->tabPageAssignMarks->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAssignMarks->Size = System::Drawing::Size(684, 554);
			this->tabPageAssignMarks->TabIndex = 1;
			this->tabPageAssignMarks->Text = L"Assign Marks";
			this->tabPageAssignMarks->UseVisualStyleBackColor = true;
			// 
			// buttonUpdateGrade
			// 
			this->buttonUpdateGrade->Location = System::Drawing::Point(25, 400);
			this->buttonUpdateGrade->Name = L"buttonUpdateGrade";
			this->buttonUpdateGrade->Size = System::Drawing::Size(166, 41);
			this->buttonUpdateGrade->TabIndex = 91;
			this->buttonUpdateGrade->Text = L"Update";
			this->buttonUpdateGrade->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(21, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 23);
			this->label5->TabIndex = 90;
			this->label5->Text = L"Edit Grades";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(262, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 23);
			this->label4->TabIndex = 89;
			this->label4->Text = L"Course 4";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(267, 373);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(73, 21);
			this->textBox4->TabIndex = 88;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(182, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 23);
			this->label3->TabIndex = 87;
			this->label3->Text = L"Course 3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(186, 373);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(73, 21);
			this->textBox3->TabIndex = 86;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(99, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 23);
			this->label2->TabIndex = 85;
			this->label2->Text = L"Course 2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 373);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(73, 21);
			this->textBox2->TabIndex = 84;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(16, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 23);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Course 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 373);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 21);
			this->textBox1->TabIndex = 82;
			// 
			// buttonImportStd
			// 
			this->buttonImportStd->Location = System::Drawing::Point(243, 256);
			this->buttonImportStd->Name = L"buttonImportStd";
			this->buttonImportStd->Size = System::Drawing::Size(166, 41);
			this->buttonImportStd->TabIndex = 81;
			this->buttonImportStd->Text = L"Import Data";
			this->buttonImportStd->UseVisualStyleBackColor = true;
			this->buttonImportStd->Click += gcnew System::EventHandler(this, &TeacherForm::buttonImportStd_Click);
			// 
			// buttonUpdateMarks
			// 
			this->buttonUpdateMarks->Location = System::Drawing::Point(12, 209);
			this->buttonUpdateMarks->Name = L"buttonUpdateMarks";
			this->buttonUpdateMarks->Size = System::Drawing::Size(166, 41);
			this->buttonUpdateMarks->TabIndex = 80;
			this->buttonUpdateMarks->Text = L"Update";
			this->buttonUpdateMarks->UseVisualStyleBackColor = true;
			this->buttonUpdateMarks->Click += gcnew System::EventHandler(this, &TeacherForm::buttonUpdateMarks_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label41->Location = System::Drawing::Point(8, 20);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(181, 23);
			this->label41->TabIndex = 77;
			this->label41->Text = L"Enter Details to Assign";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label36->Location = System::Drawing::Point(6, 156);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(59, 23);
			this->label36->TabIndex = 76;
			this->label36->Text = L"Marks";
			// 
			// textBoxMarksChngStd
			// 
			this->textBoxMarksChngStd->Location = System::Drawing::Point(11, 182);
			this->textBoxMarksChngStd->Name = L"textBoxMarksChngStd";
			this->textBoxMarksChngStd->Size = System::Drawing::Size(167, 21);
			this->textBoxMarksChngStd->TabIndex = 75;
			// 
			// buttonSearchStd
			// 
			this->buttonSearchStd->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearchStd->Location = System::Drawing::Point(11, 120);
			this->buttonSearchStd->Name = L"buttonSearchStd";
			this->buttonSearchStd->Size = System::Drawing::Size(137, 33);
			this->buttonSearchStd->TabIndex = 74;
			this->buttonSearchStd->Text = L"Search";
			this->buttonSearchStd->UseVisualStyleBackColor = true;
			this->buttonSearchStd->Click += gcnew System::EventHandler(this, &TeacherForm::buttonSearchStd_Click);
			// 
			// textBoxSearchStd1
			// 
			this->textBoxSearchStd1->Location = System::Drawing::Point(11, 93);
			this->textBoxSearchStd1->Name = L"textBoxSearchStd1";
			this->textBoxSearchStd1->Size = System::Drawing::Size(167, 21);
			this->textBoxSearchStd1->TabIndex = 73;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label34->Location = System::Drawing::Point(7, 58);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(171, 23);
			this->label34->TabIndex = 72;
			this->label34->Text = L"Search Student by ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(243, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(409, 244);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->buttonImportAtdTh);
			this->tabPage2->Controls->Add(this->dataGridViewAtd);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(684, 554);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"Mark Attendance";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(60, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 23);
			this->label6->TabIndex = 83;
			this->label6->Text = L"Attendance";
			// 
			// buttonImportAtdTh
			// 
			this->buttonImportAtdTh->Location = System::Drawing::Point(29, 270);
			this->buttonImportAtdTh->Name = L"buttonImportAtdTh";
			this->buttonImportAtdTh->Size = System::Drawing::Size(166, 41);
			this->buttonImportAtdTh->TabIndex = 82;
			this->buttonImportAtdTh->Text = L"Import Data";
			this->buttonImportAtdTh->UseVisualStyleBackColor = true;
			this->buttonImportAtdTh->Click += gcnew System::EventHandler(this, &TeacherForm::buttonImportAtdTh_Click);
			// 
			// dataGridViewAtd
			// 
			this->dataGridViewAtd->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewAtd->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewAtd->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAtd->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewAtd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAtd->EnableHeadersVisualStyles = false;
			this->dataGridViewAtd->GridColor = System::Drawing::Color::DodgerBlue;
			this->dataGridViewAtd->Location = System::Drawing::Point(222, 18);
			this->dataGridViewAtd->Name = L"dataGridViewAtd";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAtd->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewAtd->Size = System::Drawing::Size(453, 293);
			this->dataGridViewAtd->TabIndex = 0;
			this->dataGridViewAtd->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeacherForm::dataGridViewAtd_CellEndEdit);
			// 
			// TeacherForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(692, 592);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TeacherForm";
			this->Text = L"Teacher Page";
			this->Load += gcnew System::EventHandler(this, &TeacherForm::TeacherForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTimeTable))->EndInit();
			this->tabPageAssignMarks->ResumeLayout(false);
			this->tabPageAssignMarks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAtd))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void TeacherForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonImportTimetable_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonImportStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSearchStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonUpdateMarks_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonImportAtdTh_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridViewAtd_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
