#include "TeacherForm.h"
#include"Classes.h"
#include<Windows.h>
#include <string>
#include <vector>
#include <sstream>

using namespace FlexGui;



//Writing Attendance to attendance.csv file


void writeAttendanceCSV(const vector<vector<string>>& attendance)
{
	ofstream file("Attendance.csv");

	if (file.is_open())
	{
		

		// Write attendance for each student
		for (const auto& student : attendance)
		{
			for (const auto& data : student)
			{
				file << data << ",";
			}
			file << "\n";
		}

		file.close();
		MessageBox::Show("Attendance Saved Successfully");
	}
	else
	{
		MessageBox::Show("Failed to open the attendance file.");
	}
}

//Saving Attendance Edit to attendance.csv file
Void TeacherForm::dataGridViewAtd_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	//Storing current cell index in i and j
	int i = dataGridViewAtd->CurrentCell->RowIndex;
	int j = dataGridViewAtd->CurrentCell->ColumnIndex;

	//Roll no is stored in first column, so if j=0, it means user is trying to edit roll no, which is not allowed
	if (j == 0)
		return;

	//Checking if the input is valid
	if (dataGridViewAtd->Rows[i]->Cells[j]->Value->ToString() == "P" || dataGridViewAtd->Rows[i]->Cells[j]->Value->ToString() == "p")
		dataGridViewAtd->Rows[i]->Cells[j]->Value = "P";
	else if (dataGridViewAtd->Rows[i]->Cells[j]->Value->ToString() == "A" || dataGridViewAtd->Rows[i]->Cells[j]->Value->ToString() == "a")
		dataGridViewAtd->Rows[i]->Cells[j]->Value = "A";
	else {
		MessageBox::Show("Invalid Input, Select Either 'P' or 'A'");
		dataGridViewAtd->Rows[i]->Cells[j]->Value = "L";
	}

	string str(String ^ s);

//Reading Attendance from attendance.csv file into a vector

	vector<vector<string>> dataVector;

	ifstream file("Attendance.csv");
	if (!file.is_open())
	{
		// Handle file open error
		MessageBox::Show("Failed to open the attendance file.");
	}

	string line;
	while (getline(file, line))
	{

		vector<string> rowVector;
		istringstream lineStream(line);
		string value;

		while (getline(lineStream, value, ','))
		{
			rowVector.push_back(value);
		}

		dataVector.push_back(rowVector);
	}

	file.close();
	

	

	//Updating attendance data vector
	dataVector[i+1][j] = str(dataGridViewAtd->Rows[i]->Cells[j]->Value->ToString());


	// Writing attendance data to a CSV file
	writeAttendanceCSV(dataVector);

}


//Reading Attendance from attendance.csv file
Void TeacherForm::buttonImportAtdTh_Click(System::Object^ sender, System::EventArgs^ e) {

	// Clear the DataGridView
	table->Rows->Clear();

	DataTable^ table = gcnew DataTable();
	// Specify the path to the attendance file
	string filename = "attendance.csv";

	try
	{
		// Read the attendance file
		ifstream file(filename);
		if (!file.is_open())
		{
			throw gcnew Exception("Failed to open the attendance file.");
		}

		// Parse the header row
		string headerLine;
		getline(file, headerLine);
		vector<string> headers;
		istringstream headerStream(headerLine);
		string header;
		while (getline(headerStream, header, ','))
		{
			headers.push_back(header);
		}

		// Add columns to the DataGridView with headers
		for (const auto& header : headers)
		{

			table->Columns->Add(gcnew String(header.c_str()), String::typeid);
		}
		dataGridViewAtd->DataSource = table;
		// Parse and add the attendance data rows to the DataGridView
		string line;
		while (getline(file, line))
		{
			vector<string> rowData;
			istringstream lineStream(line);
			string data;
			while (getline(lineStream, data, ','))
			{
				rowData.push_back(data);
			}
			List<Object^>^ row = gcnew List<Object^>();
			for (const auto& data : rowData)
			{
				row->Add(gcnew String(data.c_str()));
			}
			table->Rows->Add(row->ToArray());
		}

		file.close();
		MessageBox::Show("Attendance data imported successfully.");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to import attendance data: " + ex->Message);
	}

}





//Making Student array------------------
student* studentData();


Void TeacherForm::TeacherForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//Time Table
	timeTable->Columns->Add("Time", String::typeid);
	timeTable->Columns->Add("Monday", String::typeid);
	timeTable->Columns->Add("Tuesday", String::typeid);
	timeTable->Columns->Add("Wednesday", String::typeid);
	timeTable->Columns->Add("Thursday", String::typeid);
	timeTable->Columns->Add("Friday", String::typeid);

	dataGridViewTimeTable->DataSource = timeTable;

	//Student Table
	table->Columns->Add("ID", String::typeid);
	table->Columns->Add("First Name", String::typeid);
	table->Columns->Add("Last Name", String::typeid);
	table->Columns->Add("Department", String::typeid);
	table->Columns->Add("Marks", float::typeid);



	dataGridView1->DataSource = table;
	
}
////Loading in Time Table
Void TeacherForm::buttonImportTimetable_Click(System::Object^ sender, System::EventArgs^ e) {
	
	string  str(String ^ s);

	ifstream find("Teacher.txt");
	string temp;

	while (temp != str(userNameTh)){
		find >> temp;
		if (temp == str(userNameTh)) {
			break;
		}
	}
	while (temp != "Department:" && !find.eof())
	{
		find >> temp;
	}
	find >> temp;

	find.close();
	ifstream fin;
	if(temp == "Computer")
		fin.open("ComputerScience.txt");
	else if(temp == "Software")
		fin.open("SoftwareEngineering.txt");
	else if (temp == "Electrical")
		fin.open("ElectricalEngineering.txt");
	else if (temp == "Buisness")
		fin.open("BuisnessAdministration.txt");
	else if (temp == "Social")
		fin.open("SocialSciences.txt");
	else
		MessageBox::Show("Error");

	for (int i = 0; i < 9; i++)
	{
		List<Object^>^ row = gcnew List<Object^>();
		for (int j = 0; j < 6; j++)
		{
			fin >> temp;
			row->Add(gcnew String(temp.c_str()));
		}
		if (i != 0)
			timeTable->Rows->Add(row->ToArray());
	}

	fin.close();

}
// Loading all students in table
Void TeacherForm::buttonImportStd_Click(System::Object^ sender, System::EventArgs^ e) {
	table->Rows->Clear();
	admin a("admin", "admin");

	student* s = studentData();

	if (s == NULL) {
		MessageBox::Show("No data found");
		return;
	}

	for (int i = 0; i < stoi(a.getCount('s')); i++) {
		List<Object^>^ row = gcnew List<Object^>();
		for (int j = 0; j < 5; j++) {
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
				row->Add(gcnew String(s[i].getDept().c_str()));
				break;
			case 4:
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
Void TeacherForm::buttonSearchStd_Click(System::Object^ sender, System::EventArgs^ e) {
	string  str(String ^ s);

	string id = str(textBoxSearchStd1->Text);

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
			for (int j = 0; j < 5; j++) {
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
					row->Add(gcnew String(s[i].getDept().c_str()));
					break;
				case 4:
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

Void TeacherForm::buttonUpdateMarks_Click(System::Object^ sender, System::EventArgs^ e) {

	admin a("admin", "admin");

	student* s = studentData();

	string  str(String ^ s);

	string id = str(textBoxSearchStd1->Text);

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
			s[i].setMarks(stof(str(textBoxMarksChngStd->Text)));
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