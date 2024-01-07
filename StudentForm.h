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
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ userNameStd;
		DataTable^ attendanceTable = gcnew DataTable(); //Attendance Table
	private: System::Windows::Forms::Label^ labelCourse4;
	public:
	private: System::Windows::Forms::Label^ labelCourse2;
	private: System::Windows::Forms::Label^ labelCourse3;
	private: System::Windows::Forms::Label^ labelCourse1;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelFee;
	private: System::Windows::Forms::Label^ labelLname;
	private: System::Windows::Forms::Label^ labelFname;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelMarks;
	private: System::Windows::Forms::DataGridView^ dataGridViewAtdStd;
	private: System::Windows::Forms::Label^ labelAtdPercent;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ProgressBar^ progressBarAtd;

	private: System::Windows::Forms::Button^ buttonImportAtdStd;
	private: System::Windows::Forms::Label^ label36;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentForm()
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

	protected:
	private: System::Windows::Forms::TabPage^ tabPageViewMarks;
	private: System::Windows::Forms::TabPage^ tabPageAtdStd;

	private: System::Windows::Forms::Button^ buttonImportStd;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageViewMarks = (gcnew System::Windows::Forms::TabPage());
			this->labelMarks = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelCourse4 = (gcnew System::Windows::Forms::Label());
			this->labelCourse2 = (gcnew System::Windows::Forms::Label());
			this->labelCourse3 = (gcnew System::Windows::Forms::Label());
			this->labelCourse1 = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelFee = (gcnew System::Windows::Forms::Label());
			this->labelLname = (gcnew System::Windows::Forms::Label());
			this->labelFname = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->buttonImportStd = (gcnew System::Windows::Forms::Button());
			this->tabPageAtdStd = (gcnew System::Windows::Forms::TabPage());
			this->buttonImportAtdStd = (gcnew System::Windows::Forms::Button());
			this->labelAtdPercent = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->progressBarAtd = (gcnew System::Windows::Forms::ProgressBar());
			this->dataGridViewAtdStd = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPageViewMarks->SuspendLayout();
			this->tabPageAtdStd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAtdStd))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPageViewMarks);
			this->tabControl1->Controls->Add(this->tabPageAtdStd);
			this->tabControl1->Location = System::Drawing::Point(0, 36);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(688, 353);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageViewMarks
			// 
			this->tabPageViewMarks->Controls->Add(this->labelMarks);
			this->tabPageViewMarks->Controls->Add(this->label5);
			this->tabPageViewMarks->Controls->Add(this->labelCourse4);
			this->tabPageViewMarks->Controls->Add(this->labelCourse2);
			this->tabPageViewMarks->Controls->Add(this->labelCourse3);
			this->tabPageViewMarks->Controls->Add(this->labelCourse1);
			this->tabPageViewMarks->Controls->Add(this->labelID);
			this->tabPageViewMarks->Controls->Add(this->labelFee);
			this->tabPageViewMarks->Controls->Add(this->labelLname);
			this->tabPageViewMarks->Controls->Add(this->labelFname);
			this->tabPageViewMarks->Controls->Add(this->label4);
			this->tabPageViewMarks->Controls->Add(this->label3);
			this->tabPageViewMarks->Controls->Add(this->label2);
			this->tabPageViewMarks->Controls->Add(this->label1);
			this->tabPageViewMarks->Controls->Add(this->label36);
			this->tabPageViewMarks->Controls->Add(this->buttonImportStd);
			this->tabPageViewMarks->Location = System::Drawing::Point(4, 22);
			this->tabPageViewMarks->Name = L"tabPageViewMarks";
			this->tabPageViewMarks->Padding = System::Windows::Forms::Padding(3);
			this->tabPageViewMarks->Size = System::Drawing::Size(680, 327);
			this->tabPageViewMarks->TabIndex = 0;
			this->tabPageViewMarks->Text = L"View Marks";
			this->tabPageViewMarks->UseVisualStyleBackColor = true;
			// 
			// labelMarks
			// 
			this->labelMarks->AutoSize = true;
			this->labelMarks->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMarks->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelMarks->Location = System::Drawing::Point(598, 41);
			this->labelMarks->Name = L"labelMarks";
			this->labelMarks->Size = System::Drawing::Size(24, 23);
			this->labelMarks->TabIndex = 101;
			this->labelMarks->Text = L"hi";
			this->labelMarks->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(497, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 23);
			this->label5->TabIndex = 100;
			this->label5->Text = L"Marks:";
			// 
			// labelCourse4
			// 
			this->labelCourse4->AutoSize = true;
			this->labelCourse4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCourse4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelCourse4->Location = System::Drawing::Point(309, 269);
			this->labelCourse4->Name = L"labelCourse4";
			this->labelCourse4->Size = System::Drawing::Size(24, 23);
			this->labelCourse4->TabIndex = 99;
			this->labelCourse4->Text = L"hi";
			this->labelCourse4->Visible = false;
			// 
			// labelCourse2
			// 
			this->labelCourse2->AutoSize = true;
			this->labelCourse2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCourse2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelCourse2->Location = System::Drawing::Point(309, 215);
			this->labelCourse2->Name = L"labelCourse2";
			this->labelCourse2->Size = System::Drawing::Size(24, 23);
			this->labelCourse2->TabIndex = 98;
			this->labelCourse2->Text = L"hi";
			this->labelCourse2->Visible = false;
			// 
			// labelCourse3
			// 
			this->labelCourse3->AutoSize = true;
			this->labelCourse3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCourse3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelCourse3->Location = System::Drawing::Point(17, 269);
			this->labelCourse3->Name = L"labelCourse3";
			this->labelCourse3->Size = System::Drawing::Size(24, 23);
			this->labelCourse3->TabIndex = 97;
			this->labelCourse3->Text = L"hi";
			this->labelCourse3->Visible = false;
			// 
			// labelCourse1
			// 
			this->labelCourse1->AutoSize = true;
			this->labelCourse1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCourse1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelCourse1->Location = System::Drawing::Point(17, 215);
			this->labelCourse1->Name = L"labelCourse1";
			this->labelCourse1->Size = System::Drawing::Size(24, 23);
			this->labelCourse1->TabIndex = 96;
			this->labelCourse1->Text = L"hi";
			this->labelCourse1->Visible = false;
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelID->Location = System::Drawing::Point(277, 41);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(24, 23);
			this->labelID->TabIndex = 95;
			this->labelID->Text = L"hi";
			this->labelID->Visible = false;
			// 
			// labelFee
			// 
			this->labelFee->AutoSize = true;
			this->labelFee->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFee->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelFee->Location = System::Drawing::Point(598, 110);
			this->labelFee->Name = L"labelFee";
			this->labelFee->Size = System::Drawing::Size(24, 23);
			this->labelFee->TabIndex = 94;
			this->labelFee->Text = L"hi";
			this->labelFee->Visible = false;
			// 
			// labelLname
			// 
			this->labelLname->AutoSize = true;
			this->labelLname->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelLname->Location = System::Drawing::Point(339, 110);
			this->labelLname->Name = L"labelLname";
			this->labelLname->Size = System::Drawing::Size(24, 23);
			this->labelLname->TabIndex = 93;
			this->labelLname->Text = L"hi";
			this->labelLname->Visible = false;
			// 
			// labelFname
			// 
			this->labelFname->AutoSize = true;
			this->labelFname->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelFname->Location = System::Drawing::Point(121, 110);
			this->labelFname->Name = L"labelFname";
			this->labelFname->Size = System::Drawing::Size(24, 23);
			this->labelFname->TabIndex = 92;
			this->labelFname->Text = L"hi";
			this->labelFname->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(17, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 23);
			this->label4->TabIndex = 91;
			this->label4->Text = L"Registered Courses";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(498, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 23);
			this->label3->TabIndex = 90;
			this->label3->Text = L"Fee Status:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(238, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 23);
			this->label2->TabIndex = 89;
			this->label2->Text = L"ID:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(238, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 23);
			this->label1->TabIndex = 88;
			this->label1->Text = L"Last Name:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label36->Location = System::Drawing::Point(17, 110);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(98, 23);
			this->label36->TabIndex = 87;
			this->label36->Text = L"First Name:";
			// 
			// buttonImportStd
			// 
			this->buttonImportStd->Location = System::Drawing::Point(21, 23);
			this->buttonImportStd->Name = L"buttonImportStd";
			this->buttonImportStd->Size = System::Drawing::Size(166, 41);
			this->buttonImportStd->TabIndex = 86;
			this->buttonImportStd->Text = L"Import Data";
			this->buttonImportStd->UseVisualStyleBackColor = true;
			this->buttonImportStd->Click += gcnew System::EventHandler(this, &StudentForm::buttonImportStd_Click);
			// 
			// tabPageAtdStd
			// 
			this->tabPageAtdStd->Controls->Add(this->buttonImportAtdStd);
			this->tabPageAtdStd->Controls->Add(this->labelAtdPercent);
			this->tabPageAtdStd->Controls->Add(this->label6);
			this->tabPageAtdStd->Controls->Add(this->progressBarAtd);
			this->tabPageAtdStd->Controls->Add(this->dataGridViewAtdStd);
			this->tabPageAtdStd->Location = System::Drawing::Point(4, 22);
			this->tabPageAtdStd->Name = L"tabPageAtdStd";
			this->tabPageAtdStd->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAtdStd->Size = System::Drawing::Size(680, 327);
			this->tabPageAtdStd->TabIndex = 1;
			this->tabPageAtdStd->Text = L"Attendance";
			this->tabPageAtdStd->UseVisualStyleBackColor = true;
			// 
			// buttonImportAtdStd
			// 
			this->buttonImportAtdStd->Location = System::Drawing::Point(53, 225);
			this->buttonImportAtdStd->Name = L"buttonImportAtdStd";
			this->buttonImportAtdStd->Size = System::Drawing::Size(166, 41);
			this->buttonImportAtdStd->TabIndex = 87;
			this->buttonImportAtdStd->Text = L"Import Data";
			this->buttonImportAtdStd->UseVisualStyleBackColor = true;
			this->buttonImportAtdStd->Click += gcnew System::EventHandler(this, &StudentForm::buttonImportAtdStd_Click);
			// 
			// labelAtdPercent
			// 
			this->labelAtdPercent->AutoSize = true;
			this->labelAtdPercent->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAtdPercent->Location = System::Drawing::Point(237, 80);
			this->labelAtdPercent->Name = L"labelAtdPercent";
			this->labelAtdPercent->Size = System::Drawing::Size(34, 23);
			this->labelAtdPercent->TabIndex = 4;
			this->labelAtdPercent->Text = L"0%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(194, 23);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Attendance Percentage";
			// 
			// progressBarAtd
			// 
			this->progressBarAtd->Location = System::Drawing::Point(8, 80);
			this->progressBarAtd->Name = L"progressBarAtd";
			this->progressBarAtd->Size = System::Drawing::Size(223, 23);
			this->progressBarAtd->TabIndex = 2;
			// 
			// dataGridViewAtdStd
			// 
			this->dataGridViewAtdStd->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewAtdStd->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewAtdStd->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAtdStd->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewAtdStd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAtdStd->EnableHeadersVisualStyles = false;
			this->dataGridViewAtdStd->GridColor = System::Drawing::Color::DodgerBlue;
			this->dataGridViewAtdStd->Location = System::Drawing::Point(291, 15);
			this->dataGridViewAtdStd->Name = L"dataGridViewAtdStd";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAtdStd->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewAtdStd->Size = System::Drawing::Size(335, 293);
			this->dataGridViewAtdStd->TabIndex = 1;
			this->dataGridViewAtdStd->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &StudentForm::dataGridViewAtdStd_CellFormatting);
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(688, 387);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StudentForm";
			this->Text = L"Student Page";
			this->tabControl1->ResumeLayout(false);
			this->tabPageViewMarks->ResumeLayout(false);
			this->tabPageViewMarks->PerformLayout();
			this->tabPageAtdStd->ResumeLayout(false);
			this->tabPageAtdStd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAtdStd))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void buttonImportStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonImportAtdStd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridViewAtdStd_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {

	// Check if the current cell contains 'A'
	if (e->Value != nullptr && e->Value->ToString()->Contains("A"))
	{
		// Change the forecolor to red
		e->CellStyle->ForeColor = System::Drawing::Color::Red;
	}

}
};
}
