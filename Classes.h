#pragma once

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//Abstract class
class Courses {
	string* course;
	char grade[6];
public:
	virtual	 ~Courses() = 0;
};
//Login class
class login {
protected:
	string username;
	string password;
	char loginType;
public:
	login() {}
	login(string username, string password, char loginType);
	bool check(string username, string password, char selectlogin);
};

class user : public login {
	string firstName;
	string lastName;
	string ID;
	string dept;
	string regDate;
	string address;
	string qualification;
	char gender;
	string contact;
public:
	user();
	// Parameterized Constructor
	user(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char loginType);
	
	void saveData(ofstream& fout);

	void increaseCount(fstream& fout);

	string getCount(char select);

	//Getter Functions
	string getUsername() { return username; }
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	string getID() { return ID; }
	string getDept() { return dept; }
	string getRegDate() { return regDate; }
	char getGender() { return gender; }
	string getContact() { return contact; }
	string getAddress() { return address; }
	string getQualification() { return qualification; }
	
	//Setter Functions
	void setFirstName(string firstName) { this->firstName = firstName; }
	void setLastName(string lastName) { this->lastName = lastName; }
	void setAddress(string address) { this->address = address; }
	void setContact(string contact) { this->contact = contact; }
	void setQual(string qualification) { this->qualification = qualification; }
};

//------ Student Class------------------------------------------------------//
class student : public user {
	char bloodGroup;
	char feeStatus;
	float marks;
	char grade[4] = {'N', 'N', 'N', 'N'};
public:
	student() {};
	student(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char bloodGroup, char fee, float marks);

	void saveStudent();

	friend ifstream& operator >> (ifstream& fin, student& s);

	//Getter Functions
	char getBloodGroup() { return bloodGroup; }
	char getFeeStatus() { return feeStatus; }
	float getMarks() { return marks; }

	//setter Functions
	void setFeeStatus(char fee) { feeStatus = fee; }
	void setMarks(float marks) { this->marks = marks; }
	char* getGrade() { return grade; }
};

// ------ Teacher Class-----------------------------------------------------//

class teacher : public user {
	float salary;
public:
	teacher();
	teacher(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, float salary);

	void saveTeacher();

	friend ifstream& operator >> (ifstream& fin, teacher& t);

	//Getter Functions
	float getSalary() { return salary; }

	//Setter Functions
	void setSalary(float salary) { this->salary = salary; }
};

//------ Admin Class--------------------------------------------------------//

class admin {
	string username;
	string password;
public:
	admin(string username, string password);
	void addTeacher(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, float salary);

	void addStudent(string username, string password, string firstName, string lastName, string ID, string dept, string regDate, char gender, string contact, string address, string qualification, char bloodGroup, char fee, float marks);

	string getCount(char type);
};

