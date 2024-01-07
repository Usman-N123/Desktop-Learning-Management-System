#include"Classes.h"
using namespace std;
//-------Login Class--------
login :: login(string username, string password, char loginType) : username(username), password(password), loginType(loginType) {
}

bool login :: check(string username, string password, char selectlogin) {

	ifstream file("login.txt");


	if (file.is_open()) {
		while (!file.eof()) {
			file >> this->username >> this->password >> this->loginType;

			if (this->username == username && this->password == password && this->loginType == selectlogin) {
				return true;
			}
			//This check is when user is trying to register and username that is already taken
			if (this->username == username && selectlogin == 'v')
			{
				return true;
			}
		}
	}
	else
		cout << "File not found" << endl;

	file.close();

	return false;
}

//--------User Class-------

user::user() {};

user::user(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char loginType)
	: firstName(firstName), lastName(lastName), ID(ID), dept(dept), regDate(regDate), gender(gender), contact(contact), address(address), qualification(qualification), login(username, password, loginType) {}

void user::saveData(ofstream& fout) {
	fout << "ID: " << ID << endl;
	fout << "Username: " << username << endl;
	fout << "Name: " << firstName << "\t" << lastName << endl;
	fout << "Gender: " << gender << endl;
	fout << "Address: " << address << endl;
	fout << "Contact: " << contact << endl;
	fout << "Department: " << dept << endl;
	fout << "Qualification: " << qualification << endl;
	fout << "RegistrationDate: " << regDate << endl;
}


void user::increaseCount(fstream& change) {

	string total;
	//Getting the total number of teachers
	change >> total >> total;
	// get the current position of the input cursor
	streampos pos = change.tellg();

	// define an offset value of 1 byte
	streamoff offset = 1;

	// move the input cursor back by 1 byte
	change.seekg(pos - offset);

	//Adding 1 to the total number of teachers
	change << stoi(total) + 1;

}

string user::getCount(char select) {

	string filename;

	if(select == 't')
		filename = "Teacher.txt";
	else
		filename = "Student.txt";

	ifstream file(filename);

	string count;

	if (file.is_open()) {
		file >> count >> count;
	}

	file.close();
	return count;
}



//--------Student Class-------

student::student(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char bloodGroup, char fee, float marks)
	: bloodGroup(bloodGroup), feeStatus(fee), marks(marks), user(username, password, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, 's') {}

void student::saveStudent() {
	ofstream file("Student.txt", ios::app);

	saveData(file);
	file << "BloodGroup: " << bloodGroup << endl;
	file << "FeeStatus: " << feeStatus << endl;
	file << "Marks: " << marks << endl << endl;

	file.close();

	
}

ifstream& operator >> (ifstream& fin, student& s) {

	string username, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, bloodgroup, feeStatus, marks;
	string temp;

	fin >> ID >> ID;
	fin >> username >> username;
	fin >> firstName >> firstName;
	fin >> lastName;
	fin >> gender >> gender;
	fin >> address;
	address = "";//Whole line
	temp = "";
	while (temp != "Contact:") {
		address += temp + " ";
		fin >> temp;
	}
	fin >> contact;
	fin >> dept;//whole line
	dept = "";
	temp = "";
	while (temp != "Qualification:") {
		dept += temp + " ";
		fin >> temp;
	}
	qualification = "";
	temp = "";
	while (temp != "RegistrationDate:") {
		qualification += temp + " ";
		fin >> temp;
	}
	fin >> regDate;
	fin >> bloodgroup >> bloodgroup;
	fin >> feeStatus >> feeStatus;
	fin >> marks >> marks;

	s = student(username, "", firstName, lastName, ID, dept, regDate, gender[0], contact, address, qualification, bloodgroup[0], feeStatus[0], stof(marks));
	
	return fin;
}




//--------Teacher Class-------
teacher::teacher() {
}

teacher::teacher(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, float salary)
	: salary(salary), user(username, password, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, 't') {
}


void teacher::saveTeacher() {

	ofstream file("Teacher.txt", ios::app);

	saveData(file);
	file << "Salary: " << salary << endl << endl;

	file.close();

	
}

ifstream& operator >> (ifstream& fin, teacher& t) {
	string username, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, salary;
	string temp;

	fin >> ID >> ID;
	fin >> username >> username;
	fin >> firstName >> firstName;
	fin >> lastName;
	fin >> gender >> gender;
	fin >> address;
	address = "";//Whole line
	temp = "";
	while (temp != "Contact:") {
		address += temp + " ";
		fin >> temp;
	}
	fin >> contact;
	fin >> dept;//whole line
	dept = "";
	temp = "";
	while (temp != "Qualification:") {
		dept += temp + " ";
		fin >> temp;
	}
	qualification = "";
	temp = "";
	while (temp != "RegistrationDate:") {
		qualification += temp + " ";
		fin >> temp;
	}
	fin >> regDate;
	fin >> salary >> salary;


	t = teacher(username, "", firstName, lastName, ID, dept, regDate, gender[0], contact, address, qualification, stof(salary));

	return fin;
}

//------ Admin Class--------------------------------------------------------//

admin::admin(string username, string password) : username(username), password(password) {};

void admin::addTeacher(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, float salary) {

	teacher t(username, password, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, salary);

	t.saveTeacher();

	//Increase the count of Teacher
	fstream change("Teacher.txt");

	t.increaseCount(change);

	change.close();


	ofstream file("login.txt", ios::app);

	file << username << "\t" << password << "\t" << 't' << endl;

	file.close();

}

void admin::addStudent(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char bloodGroup, char fee, float marks) {

	student s(username, password, firstName, lastName, ID, dept, regDate, gender, contact, address, qualification, bloodGroup, fee, marks);
	
	s.saveStudent();
	
	//Increase the count of Student
	fstream change("Student.txt");

	s.increaseCount(change);

	change.close();


	ofstream file("login.txt", ios::app);

	file << username << "\t" << password << "\t" << 's' << endl;

	file.close();
}

string admin::getCount(char select) {

	string filename;

	if (select == 't')
		filename = "Teacher.txt";
	else
		filename = "Student.txt";

	ifstream file(filename);

	string count;

	if (file.is_open()) {
		file >> count >> count;
	}

	file.close();
	return count;
}