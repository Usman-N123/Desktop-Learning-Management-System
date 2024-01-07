#include "AdminForm.h"
#include "Classes.h"
#include<Windows.h>
#include<iomanip>
using namespace FlexGui;

//Making Student array------------------
student* studentData() {

	try {
		string count;

		ifstream fin("student.txt");

		fin >> count >> count;
		student* s = new student[stoi(count)];

		for (int i = 0; i < stoi(count); i++) {
			fin >> s[i];
		}

		fin.close();
		return s;
	}
	catch (exception e) {
		MessageBox::Show("Error in studentData() function");
	}

	return nullptr;
}

//Making Teacher array---------------
teacher* teacherData() {
	try {
		string count;
		ifstream fin("teacher.txt");
		fin >> count >> count;
		teacher* t = new teacher[stoi(count)];
		for (int i = 0; i < stoi(count); i++) {
			fin >> t[i];
		}
		fin.close();
		return t;
	}
	catch (exception e) {
		MessageBox::Show("Error in teacherData() function");
	}
	return nullptr;
}

//checks if user selected a vaild Department
Void AdminForm:: comboBoxDepartment_Leave(System::Object^ sender, System::EventArgs^ e) {
	//check if the user selected a vaild Department
	bool vaildSelection = false;
	for (int i = 0; i < comboBoxDepartmentTh->Items->Count; i++)
	{
		if (comboBoxDepartmentTh->Text == comboBoxDepartmentTh->Items[i]->ToString())
		{
			vaildSelection = true;
			break;
		}
	}
	if (!vaildSelection)
	{
		comboBoxDepartmentTh->Text = "";
		MessageBox::Show("Please select a vaild ID");
	}

}

//Checks if the user entered a vaild username
Void AdminForm::textBoxUsernameTh_Leave(System::Object^ sender, System::EventArgs^ e) {

	login a;

	string  str(String ^ s);
	
	if (textBoxUsernameTh->Text == "")
	{
		MessageBox::Show("Please enter a username");
	}
	else
	{
		//check if username is already taken
		//if it is, clear the textbox and display a message
		//if it isn't, do nothing
		if (a.check(str(textBoxUsernameTh->Text), str(textBoxPasswordTh->Text), 'v')) {
			MessageBox::Show("This username is already taken");
			textBoxUsernameTh->Text = "";
		}
	}
}

//Show Password
Void AdminForm :: checkBoxPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxPassword->Checked) {
		textBoxPasswordTh->PasswordChar = '\0';
	}
	else {
		textBoxPasswordTh->PasswordChar = '*';
	}
}

// Remove Spaces from Username
Void AdminForm :: textBoxUsernameTh_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (textBoxUsernameTh->Text->EndsWith(" ")) {
		textBoxUsernameTh->Text = textBoxUsernameTh->Text->TrimEnd();
		int index = textBoxUsernameTh->Text->Length;
		textBoxUsernameTh->SelectionStart = index;
	};
}

// Remove Spaces from Password
Void AdminForm :: textBoxPasswordTh_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (textBoxPasswordTh->Text->EndsWith(" ")) {
		textBoxPasswordTh->Text = textBoxPasswordTh->Text->TrimEnd();
		int index = textBoxPasswordTh->Text->Length;
		textBoxPasswordTh->SelectionStart = index;
	};
}

// Teacher Add Button
Void AdminForm::buttonAddTh_Click(System::Object^ sender, System::EventArgs^ e) {

	// Checking if all fields are filled
	if (textBoxUsernameTh->Text == "" || textBoxPasswordTh->Text == "" || textBoxFirstTh->Text == "" || textBoxLastTh->Text == "" || comboBoxDepartmentTh->Text == "" || dateTimePickerTh->Text == "" || comboBoxGenderTh->Text == "" || maskedTextBoxcontTh->Text == "" || textBoxAddressTh->Text == "" || textBoxQualTh->Text == "" || maskedTextBoxSalryTh->Text == "") {
		MessageBox::Show("Please fill all the fields");
		return;
	}


	string  str(String ^ s);

	admin a("admin", "admin");

	// Creating ID
	string ID;

	switch (comboBoxDepartmentTh->SelectedIndex)
	{
	case 0:
		ID = "CS";
		break;
	case 1:
		ID = "SE";
		break;
	case 2:
		ID = "EE";
		break;
	case 3:
		ID = "BA";
		break;
	case 4:
		ID = "SS";
		break;
	default:
		ID = "";
		MessageBox::Show("Please select a ID");
		break;
	}
	//Getting count of teachers and incrementing it by 1 and converting it into string
	string count = to_string(stoi(a.getCount('t')) + 1);

	ID = ID + '-' + string(4 - count.length(), '0') + count;

	// Converting Gender into character
	char gender;
	switch (comboBoxGenderTh->SelectedIndex)
	{
	case 0:
		gender = 'M';
		break;
	case 1:
		gender = 'F';
		break;
	default:
		MessageBox::Show("Please select a Gender");
	}
	
	// Converting Salary into float
	float salary = 0.00;
	
	salary = float::Parse(maskedTextBoxSalryTh->Text);
	


	//Adding Teacher
	a.addTeacher(str(textBoxUsernameTh->Text), str(textBoxPasswordTh->Text), str(textBoxFirstTh->Text), str(textBoxLastTh->Text), ID, str(comboBoxDepartmentTh->Text), str(dateTimePickerTh->Text), gender, str(maskedTextBoxcontTh->Text), str(textBoxAddressTh->Text), str(textBoxQualTh->Text), salary);
	MessageBox::Show("Teacher Successfully Added!");
}

//---STUDENT TAB---------------------------//

//checks if user entered a vaild username
Void AdminForm::textBoxUsernameStd_Leave(System::Object^ sender, System::EventArgs^ e) {
	
	login a;
	string  str(String ^ s);
	if (textBoxUsernameStd->Text == "")
	{
		MessageBox::Show("Please enter a username");
	}
	else
	{
		//check if username is already taken
		//if it is, clear the textbox and display a message
		//if it isn't, do nothing
		if (a.check(str(textBoxUsernameTh->Text), str(textBoxPasswordTh->Text), 'v')) {
			MessageBox::Show("This username is already taken");
			textBoxUsernameTh->Text = "";
		}
	}
}


//Show Password
Void AdminForm::checkBoxPasswordStd_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxPassword->Checked) {
		textBoxPasswordTh->PasswordChar = '\0';
	}
	else {
		textBoxPasswordTh->PasswordChar = '*';
	}
}

//Check list box for selecting fee status only one at a time
Void AdminForm::checkedListBoxFeeStd_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
	for (int ix = 0; ix < checkedListBoxFeeStd->Items->Count; ++ix)
		if (ix != e->Index) checkedListBoxFeeStd->SetItemChecked(ix, false);
}

//Check list box for selecting blood group only one at a time
Void AdminForm::checkedListBoxBloodStd_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
	for (int ix = 0; ix < checkedListBoxBloodStd->Items->Count; ++ix)
		if (ix != e->Index) checkedListBoxBloodStd->SetItemChecked(ix, false);
}

//Student add button
Void AdminForm::buttonAddStd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Checking if all fields are filled
	if (textBoxUsernameStd->Text == "" || textBoxPasswordStd->Text == "" || textBoxFirstStd->Text == "" || textBoxLastStd->Text == "" || comboBoxDeptStd->Text == "" || dateTimePickerTh->Text == "" || comboBoxGenderStd->Text == "" || maskedTextBoxContactStd->Text == "" || textBoxAddressStd->Text == "" || textBoxQualStd->Text == "" || textBoxMarksStd->Text == "") {
		MessageBox::Show("Please fill all the fields");
		return;
	}


	string  str(String ^ s);

	admin a("admin", "admin");

	// Creating ID
	string ID;

	int year = dateTimePickerRegStd->Value.Year;

	switch (year)
	{
	case 2019:
		ID = "19F";
		break;
	case 2020:
		ID = "20F";
		break;
	case 2021:
		ID = "21F";
		break;
	case 2022:
		ID = "22F";
		break;
	case 2023:
		ID = "23F";
		break;
	default:
		ID = "";
		MessageBox::Show("Please select a Registration Date");
		break;
	}
	//Getting count of students and incrementing it by 1 and converting it into string
	string count = to_string(stoi(a.getCount('s')) + 1);

	ID = ID + '-' + string(4 - count.length(), '0') + count;

	// Converting Gender into character
	char gender;
	switch (comboBoxGenderStd->SelectedIndex)
	{
	case 0:
		gender = 'M';
		break;
	case 1:
		gender = 'F';
		break;
	default:
		gender = ' ';
		MessageBox::Show("Please select a Gender");
	}

	// Converting fee Status into character
	char feeStatus;
	switch (checkedListBoxFeeStd->SelectedIndex)
	{case 0:
		feeStatus = 'P';
		break;
	case 1:
		feeStatus = 'U';
	break;
	default:
		MessageBox::Show("Please select a Fee Status");
		break;
	}

	// Converting Blood Group into character
	char bloodGroup;
	switch (checkedListBoxBloodStd->SelectedIndex)
	{
	case 0:
		bloodGroup = 'A';
		break;
	case 1:
		bloodGroup = 'B';
		break;
	case 2:
		bloodGroup = 'O';
		break;
	default:
		MessageBox::Show("Please select a Blood Group");
		break;
	}

	// Converting Marks into float
	float marks = float::Parse(textBoxMarksStd->Text);
	



	//Adding Teacher
	a.addStudent(str(textBoxUsernameStd->Text), str(textBoxPasswordStd->Text), str(textBoxFirstStd->Text), str(textBoxLastStd->Text), ID, str(comboBoxDeptStd->Text), str(dateTimePickerRegStd->Text), gender, str(maskedTextBoxContactStd->Text), str(textBoxAddressStd->Text), str(textBoxQualStd->Text), bloodGroup, feeStatus, marks);
	MessageBox::Show("Student Successfully Added!");

}

Void AdminForm::AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//Student Table
	table->Columns->Add("ID", String::typeid);
	table->Columns->Add("First Name", String::typeid);
	table->Columns->Add("Last Name", String::typeid);
	table->Columns->Add("Gender", Char::typeid);
	table->Columns->Add("Username", String::typeid);
	table->Columns->Add("Contact", String::typeid);
	table->Columns->Add("Department", String::typeid);
	table->Columns->Add("Qualification", String::typeid);
	table->Columns->Add("Registration Date", String::typeid);
	table->Columns->Add("Blood Group", Char::typeid);
	table->Columns->Add("Fee Status", Char::typeid);
	table->Columns->Add("Marks", float::typeid);

	dataGridView1->DataSource = table;

	//Teacher Table
	tableTeacher->Columns->Add("ID", String::typeid);
	tableTeacher->Columns->Add("First Name", String::typeid);
	tableTeacher->Columns->Add("Last Name", String::typeid);
	tableTeacher->Columns->Add("Gender", Char::typeid);
	tableTeacher->Columns->Add("Username", String::typeid);
	tableTeacher->Columns->Add("Contact", String::typeid);
	tableTeacher->Columns->Add("Department", String::typeid);
	tableTeacher->Columns->Add("Qualification", String::typeid);
	tableTeacher->Columns->Add("Registration Date", String::typeid);
	tableTeacher->Columns->Add("Salary", float::typeid);

	dataGridViewTeacher->DataSource = tableTeacher;
}

//Import Button To import data from student file
Void AdminForm::buttonImport_Click(System::Object^ sender, System::EventArgs^ e) {
	table->Rows->Clear();
	admin a("admin", "admin");

	student* s = studentData();
	
	if (s == NULL) {
		MessageBox::Show("No data found");
		return;
	}
	

	for (int i = 0; i < stoi(a.getCount('s')); i++) {
		List<Object^>^ row = gcnew List<Object^>();
		for (int j = 0; j < 12; j++) {
			switch (j) {
			case 0:
				row->Add(gcnew String(s[i].getID().c_str()));
				break;
			case 1:
				row->Add(gcnew String(s[i].getFirstName().c_str()));
				break;
			case 2:
				row->Add(gcnew String(s[i].getLastName().c_str()));
				break;
			case 3:
				row->Add(s[i].getGender());
				break;
			case 4:
				row->Add(gcnew String(s[i].getUsername().c_str()));
				break;
			case 5:
				row->Add(gcnew String(s[i].getContact().c_str()));
				break;
			case 6:
				row->Add(gcnew String(s[i].getDept().c_str()));
				break;
			case 7:
				row->Add(gcnew String(s[i].getQualification().c_str()));
				break;
			case 8:
				row->Add(gcnew String(s[i].getRegDate().c_str()));
				break;
			case 9:
				row->Add(s[i].getBloodGroup());
				break;
			case 10:
				row->Add(s[i].getFeeStatus());
				break;
			case 11:
				row->Add(s[i].getMarks());
				break;
			default:
				MessageBox::Show("Error");
				break;
			}
		}
		table->Rows->Add(row->ToArray());
	}

}

//Search Button to search student
Void AdminForm::buttonSearchStd_Click(System::Object^ sender, System::EventArgs^ e) {

	string  str(String ^ s);

	string id = str(textBoxSearchStd->Text);
	
	if (id == "") {
		MessageBox::Show("Please enter ID to search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

		admin a("admin", "admin");

		student* s = studentData();

		List<Object^>^ row = gcnew List<Object^>();
		for (int i = 0; stoi(a.getCount('s')); i++) {
			if (id == s[i].getID()) {
				table->Rows->Clear();
				for (int j = 0; j < 12; j++) {
					switch (j) {
					case 0:
						row->Add(gcnew String(s[i].getID().c_str()));
						break;
					case 1:
						row->Add(gcnew String(s[i].getFirstName().c_str()));
						break;
					case 2:
						row->Add(gcnew String(s[i].getLastName().c_str()));
						break;
					case 3:
						row->Add(s[i].getGender());
						break;
					case 4:
						row->Add(gcnew String(s[i].getUsername().c_str()));
						break;
					case 5:
						row->Add(gcnew String(s[i].getContact().c_str()));
						break;
					case 6:
						row->Add(gcnew String(s[i].getDept().c_str()));
						break;
					case 7:
						row->Add(gcnew String(s[i].getQualification().c_str()));
						break;
					case 8:
						row->Add(gcnew String(s[i].getRegDate().c_str()));
						break;
					case 9:
						row->Add(s[i].getBloodGroup());
						break;
					case 10:
						row->Add(s[i].getFeeStatus());
						break;
					case 11:
						row->Add(s[i].getMarks());
						break;
					default:
						MessageBox::Show("Error");
						break;
					}
				}
				break;
			}
		}
		table->Rows->Add(row->ToArray());
}

//View All Button to view all Teachers
Void AdminForm::buttonViewTh_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try{ tableTeacher->Rows->Clear(); }
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	admin a("admin", "admin");

	teacher* s = teacherData();

	if (s == NULL) {
		MessageBox::Show("No data found");
		return;
	}


	for (int i = 0; i < stoi(a.getCount('t')); i++) {
		List<Object^>^ row = gcnew List<Object^>();
		for (int j = 0; j < 10; j++) {
			switch (j) {
			case 0:
				row->Add(gcnew String(s[i].getID().c_str()));
				break;
			case 1:
				row->Add(gcnew String(s[i].getFirstName().c_str()));
				break;
			case 2:
				row->Add(gcnew String(s[i].getLastName().c_str()));
				break;
			case 3:
				row->Add(s[i].getGender());
				break;
			case 4:
				row->Add(gcnew String(s[i].getUsername().c_str()));
				break;
			case 5:
				row->Add(gcnew String(s[i].getContact().c_str()));
				break;
			case 6:
				row->Add(gcnew String(s[i].getDept().c_str()));
				break;
			case 7:
				row->Add(gcnew String(s[i].getQualification().c_str()));
				break;
			case 8:
				row->Add(gcnew String(s[i].getRegDate().c_str()));
				break;
			case 9:
				row->Add(s[i].getSalary());
				break;
			default:
				MessageBox::Show("Error");
				break;
			}
		}
		tableTeacher->Rows->Add(row->ToArray());
	}


}
//Search Teacher by ID
Void AdminForm::buttonSearchTh_Click(System::Object^ sender, System::EventArgs^ e) {

	tableTeacher->Rows->Clear();
	admin a("admin", "admin");

	teacher* s = teacherData();

	string  str(String ^ s);

	string id = str(textBoxSearchTh->Text);

	if (id == "") {
		MessageBox::Show("Please enter ID to search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (s == NULL) {
		MessageBox::Show("No data found");
		return;
	}


	for (int i = 0; i < stoi(a.getCount('t')); i++) {
		List<Object^>^ row = gcnew List<Object^>();
		if (id == s[i].getID()) {
			for (int j = 0; j < 10; j++) {
				switch (j) {
				case 0:
					row->Add(gcnew String(s[i].getID().c_str()));
					break;
				case 1:
					row->Add(gcnew String(s[i].getFirstName().c_str()));
					break;
				case 2:
					row->Add(gcnew String(s[i].getLastName().c_str()));
					break;
				case 3:
					row->Add(s[i].getGender());
					break;
				case 4:
					row->Add(gcnew String(s[i].getUsername().c_str()));
					break;
				case 5:
					row->Add(gcnew String(s[i].getContact().c_str()));
					break;
				case 6:
					row->Add(gcnew String(s[i].getDept().c_str()));
					break;
				case 7:
					row->Add(gcnew String(s[i].getQualification().c_str()));
					break;
				case 8:
					row->Add(gcnew String(s[i].getRegDate().c_str()));
					break;
				case 9:
					row->Add(s[i].getSalary());
					break;
				default:
					MessageBox::Show("Error");
					break;
				}
			}
			tableTeacher->Rows->Add(row->ToArray());
			break;
		}
	}
}

//Edit Button to edit Student
Void AdminForm::buttonEditStd_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonEditStd->Text != "Update") {
		buttonEditStd->Text = "Update";
		// Turning Edit functions visible
		label41->Visible = true;
		label36->Visible = true;
		label37->Visible = true;
		label38->Visible = true;
		label39->Visible = true;
		label40->Visible = true;
		textBoxFnameChngStd->Visible = true;
		textBoxLnameChngStd->Visible = true;
		textBoxAddressChngStd->Visible = true;
		maskedTextBoxContChngStd->Visible = true;
		checkedListBoxFeeChngStd->Visible = true;

		return;
	}
	

		admin a("admin", "admin");

		student* s = studentData();

		string  str(String ^ s);

		string id = str(textBoxSearchStd->Text);

		if (id == "") {
			MessageBox::Show("Please enter ID to search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		if (s == NULL) {
			MessageBox::Show("No data found");
			return;
		}

		int count = stoi(a.getCount('s'));

		for (int i = 0; i < count; i++) {
			if (id == s[i].getID()) {
				s[i].setFirstName(str(textBoxFnameChngStd->Text));
				s[i].setLastName(str(textBoxLnameChngStd->Text));
				s[i].setAddress(str(textBoxAddressChngStd->Text));
				s[i].setContact(str(maskedTextBoxContChngStd->Text));
				s[i].setFeeStatus((checkedListBoxFeeChngStd->SelectedIndex) ? 'U' : 'P');
				break;
			}
		}

		ofstream fout;

			fout.open("student.txt", ios::out);

			fout << "Total: " << count << endl << endl;

			fout.close();

			for (int i = 0; i < count; i++)
			{
				s[i].saveStudent();
			}

			MessageBox::Show("Data Updated Successfully!");
}

//Edit Button to edit Teacher
Void AdminForm::buttonEditTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonEditTeacher->Text != "Update") {
		buttonEditTeacher->Text = "Update";
		// Turning Edit functions visible
		label42->Visible = true;
		label44->Visible = true;
		label45->Visible = true;
		label46->Visible = true;
		label47->Visible = true;

		maskedTextBoxContChngTh->Visible = true;
		textBoxAddressChngTh->Visible = true;
		textBoxQualChngTh->Visible = true;
		maskedTextBoxSalryChngTh->Visible = true;
		return;
	}

	admin a("admin", "admin");

	teacher* t = teacherData();

	string  str(String ^ s);

	string id = str(textBoxSearchTh->Text);

	if (id == "") {
		MessageBox::Show("Please enter ID to search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (t == NULL) {
		MessageBox::Show("No data found");
		return;
	}

	int count = stoi(a.getCount('t'));



	for (int i = 0; i < count; i++) {
		if (id == t[i].getID()) {
			t[i].setAddress(str(textBoxAddressChngTh->Text));
			t[i].setContact(str(maskedTextBoxContChngTh->Text));
			t[i].setQual(str(textBoxQualChngTh->Text));
			t[i].setSalary(stof(str(maskedTextBoxSalryChngTh->Text)));
			break;
		}
	}

	ofstream fout;

	fout.open("Teacher.txt", ios::out);

	fout << "Total: " << count << endl << endl;

	fout.close();

	for (int i = 0; i < count; i++)
	{
		t[i].saveTeacher();
	}

	MessageBox::Show("Data Updated Successfully!");
	
}