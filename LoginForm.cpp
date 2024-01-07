#include "LoginForm.h"
#include"AdminForm.h"
#include"TeacherForm.h"
#include"StudentForm.h"
#include"Classes.h"
#include<Windows.h>


using namespace FlexGui; // This is your project name

using namespace System;
using namespace System::Windows::Forms;



int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew LoginForm());


	/*LoginForm loginForm;
	loginForm.ShowDialog();*/ //Does same thing as above


	return 0;
}

//Character to select login type(Admin, Teacher, Student)
char selectlogin;

// This is the function that converts System::String^ to std::string
string  str(String^ s) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	string os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

// Login Details Check
Void LoginForm::buttonlogin_Click(System::Object^ sender, System::EventArgs^ e) {
	//Storing data from login textboxes in to variables
	String^ username = textBoxUserName->Text;
	String^ password = textBoxPassword->Text;

	//Creating AdminForm
	AdminForm^ adminForm = gcnew AdminForm();
	//Creating TeacherForm
	TeacherForm^ teacherForm = gcnew TeacherForm();
	//Creating StudentForm
	StudentForm^ studentForm = gcnew StudentForm();

	//Creating object of login class to check login credentials
	login a;

	if (username == "admin" && password == "admin") {
		this->Hide();
		/*AdminForm^ adminForm = gcnew AdminForm();
		adminForm->ShowDialog();*/
		MessageBox::Show("Welcome Admin");
		adminForm->ShowDialog();
		this->Close();
	}
	else if (username == "user" && password == "user") {
		this->Hide();
		/*UserForm^ userForm = gcnew UserForm();
		userForm->ShowDialog();*/
		this->Close();
	}
	else if (a.check(str(username), str(password), selectlogin)) {

		this->Hide();

		//Opening forms according to the user type

		switch (selectlogin) {
		case 'a':
			MessageBox::Show("Welcome Admin");
			adminForm->ShowDialog();
			break;
		case 't':
			teacherForm->userNameTh = username;
			MessageBox::Show("Welcome " + username);
			teacherForm->ShowDialog();
			break;
		case 's':
			studentForm->userNameStd = username;
			studentForm->ShowDialog();
			break;
		default:
			MessageBox::Show("Welcome " + username);
			break;
		}

		this->Close();
	}
	else {
		MessageBox::Show("Invalid Username or Password");
	}
}

//Show password
Void LoginForm::checkBoxPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxPassword->Checked) {
		textBoxPassword->PasswordChar = '\0';
	}
	else {
		textBoxPassword->PasswordChar = '*';
	}
}

//--Buttons to Show login details-------------
Void LoginForm::buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {

	selectlogin = 'a';

	buttonAdmin->Visible = false;
	buttonTeacher->Visible = false;
	buttonStudent->Visible = false;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	textBoxUserName->Visible = true;
	textBoxPassword->Visible = true;
	buttonlogin->Visible = true;
	checkBoxPassword->Visible = true;

}

Void LoginForm::buttonStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	selectlogin = 's';

	buttonStudent->Visible = false;
	buttonTeacher->Visible = false;
	buttonAdmin->Visible = false;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	textBoxUserName->Visible = true;
	textBoxPassword->Visible = true;
	buttonlogin->Visible = true;
	checkBoxPassword->Visible = true;

}

Void LoginForm::buttonTeacher_Click(System::Object^ sender, System::EventArgs^ e) {
	selectlogin = 't';
	buttonTeacher->Visible = false;
	buttonAdmin->Visible = false;
	buttonStudent->Visible = false;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	textBoxUserName->Visible = true;
	textBoxPassword->Visible = true;
	buttonlogin->Visible = true;
	checkBoxPassword->Visible = true;
}