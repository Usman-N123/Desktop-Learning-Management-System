#include "StudentForm.h"
#include"Classes.h"
#include<Windows.h>
#include <string>
#include <vector>
#include <sstream>
using namespace FlexGui;

// To Verify Student in attendance
string rollNo;

//Making Student array------------------
student* studentData();


//Loading in Student Table
Void StudentForm::buttonImportStd_Click(System::Object^ sender, System::EventArgs^ e) {


	string  str(String ^ s);

	


	admin a("admin", "admin");

	student* s = studentData();

	for (int i = 0; i < stoi(a.getCount('s')); i++) {
		if (s[i].getUsername() == str(userNameStd))
		{
			//	To verify student in attendance Tab
				rollNo = s[i].getID();
			//----------------
			labelID->Text = gcnew String(s[i].getID().c_str());
			labelFname->Text = gcnew String(s[i].getFirstName().c_str());
			labelLname->Text = gcnew String(s[i].getLastName().c_str());
			labelMarks->Text = s[i].getMarks().ToString();
			if (s[i].getFeeStatus() == 'P')
				labelFee->Text = "Paid";
			else
				labelFee->Text = "Not Paid";
			String^ str = gcnew String(s[i].getDept().c_str());
			if (str->Trim() == "Computer Science (CS)") {
				labelCourse1->Text = "Programming Fundamentals";
				labelCourse2->Text = "Digital Logic Design";
				labelCourse3->Text = "OOP";
				labelCourse4->Text = "OOP Lab";
			}
			else
			{
				labelCourse1->Text = "Calculus";
				labelCourse2->Text = "Linear Algebra";
				labelCourse3->Text = "Applied Physics";
				labelCourse4->Text = "Physics Lab";
			}
			labelID->Visible = true;
			labelFname->Visible = true;
			labelLname->Visible = true;
			labelFee->Visible = true;
			labelMarks->Visible = true;
			labelCourse1->Visible = true;
			labelCourse2->Visible = true;
			labelCourse3->Visible = true;
			labelCourse4->Visible = true;

			break;
		}
	}

}

Void StudentForm::buttonImportAtdStd_Click(System::Object^ sender, System::EventArgs^ e) {

	//Attendance Percentage
	int Pcount = 0, total = 0;

	// Clear the DataGridView
	attendanceTable->Rows->Clear();

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
		dataGridViewAtdStd->DataSource = table;
		// Parse and add the attendance data rows to the DataGridView
		string line;
		while (getline(file, line))
		{
			vector<string> rowData;
			istringstream lineStream(line);
			string data;

			size_t found = line.find(rollNo);
			

			if (found != string::npos) {
				while (getline(lineStream, data, ','))
				{
					++total;
					if (data[0] == 'P')
						++Pcount;

					rowData.push_back(data);
				}
				List<Object^>^ row = gcnew List<Object^>();
				for (const auto& data : rowData)
				{
					row->Add(gcnew String(data.c_str()));
				}
				table->Rows->Add(row->ToArray());
				break;
			}
		}

		file.close();

		
		int attendance = Pcount * 100 / total;

		progressBarAtd->Value = attendance;

		labelAtdPercent->Text = attendance + "%";

		if(attendance < 80)
			labelAtdPercent->ForeColor = Color::Red;


	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to import attendance data: " + ex->Message);
	}

}