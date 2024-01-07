#pragma once


namespace FlexGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	



	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{

	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ buttonlogin;
	private: System::Windows::Forms::CheckBox^ checkBoxPassword;
	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Button^ buttonTeacher;
	private: System::Windows::Forms::Button^ buttonStudent;





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
		/// 
		///
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonlogin = (gcnew System::Windows::Forms::Button());
			this->checkBoxPassword = (gcnew System::Windows::Forms::CheckBox());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonTeacher = (gcnew System::Windows::Forms::Button());
			this->buttonStudent = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(256, 8);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(223, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 163);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 204);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(379, 232);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 14);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Forget Password";
			this->label3->Visible = false;
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(275, 166);
			this->textBoxUserName->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(204, 20);
			this->textBoxUserName->TabIndex = 6;
			this->textBoxUserName->Text = L"username";
			this->textBoxUserName->Visible = false;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(275, 207);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(204, 20);
			this->textBoxPassword->TabIndex = 7;
			this->textBoxPassword->Text = L"password";
			this->textBoxPassword->Visible = false;
			// 
			// buttonlogin
			// 
			this->buttonlogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonlogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonlogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonlogin->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonlogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->buttonlogin->Location = System::Drawing::Point(275, 264);
			this->buttonlogin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonlogin->Name = L"buttonlogin";
			this->buttonlogin->Size = System::Drawing::Size(204, 43);
			this->buttonlogin->TabIndex = 8;
			this->buttonlogin->Text = L"Login";
			this->buttonlogin->UseVisualStyleBackColor = false;
			this->buttonlogin->Visible = false;
			this->buttonlogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonlogin_Click);
			// 
			// checkBoxPassword
			// 
			this->checkBoxPassword->AutoSize = true;
			this->checkBoxPassword->Location = System::Drawing::Point(487, 209);
			this->checkBoxPassword->Name = L"checkBoxPassword";
			this->checkBoxPassword->Size = System::Drawing::Size(113, 18);
			this->checkBoxPassword->TabIndex = 9;
			this->checkBoxPassword->Text = L"Show Password";
			this->checkBoxPassword->UseVisualStyleBackColor = true;
			this->checkBoxPassword->Visible = false;
			this->checkBoxPassword->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBoxPassword_CheckedChanged);
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdmin->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->buttonAdmin->Location = System::Drawing::Point(275, 184);
			this->buttonAdmin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(204, 43);
			this->buttonAdmin->TabIndex = 10;
			this->buttonAdmin->Text = L"Admin";
			this->buttonAdmin->UseVisualStyleBackColor = false;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &LoginForm::buttonAdmin_Click);
			// 
			// buttonTeacher
			// 
			this->buttonTeacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTeacher->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTeacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->buttonTeacher->Location = System::Drawing::Point(63, 184);
			this->buttonTeacher->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonTeacher->Name = L"buttonTeacher";
			this->buttonTeacher->Size = System::Drawing::Size(204, 43);
			this->buttonTeacher->TabIndex = 11;
			this->buttonTeacher->Text = L"Teacher";
			this->buttonTeacher->UseVisualStyleBackColor = false;
			this->buttonTeacher->Click += gcnew System::EventHandler(this, &LoginForm::buttonTeacher_Click);
			// 
			// buttonStudent
			// 
			this->buttonStudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStudent->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->buttonStudent->Location = System::Drawing::Point(487, 184);
			this->buttonStudent->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonStudent->Name = L"buttonStudent";
			this->buttonStudent->Size = System::Drawing::Size(204, 43);
			this->buttonStudent->TabIndex = 12;
			this->buttonStudent->Text = L"Student";
			this->buttonStudent->UseVisualStyleBackColor = false;
			this->buttonStudent->Click += gcnew System::EventHandler(this, &LoginForm::buttonStudent_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(741, 401);
			this->Controls->Add(this->buttonStudent);
			this->Controls->Add(this->buttonTeacher);
			this->Controls->Add(this->buttonAdmin);
			this->Controls->Add(this->checkBoxPassword);
			this->Controls->Add(this->buttonlogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login Page";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		// Login Details Check
private: System::Void buttonlogin_Click(System::Object^ sender, System::EventArgs^ e);

	   //Show password
private: System::Void checkBoxPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	   //Buttons to Show login details
private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStudent_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTeacher_Click(System::Object^ sender, System::EventArgs^ e);
};
}
