#include "construction.h"


int Student::get_age() {
	return age;
}

void Student::set_age(int a) {
	if (a > Max_age && a < Min_age)
	{
		age = a;
	}
}

float Student::get_avg_mark() {
	return avg_mark;
}

void Student::set_avg_mark(float avg) {
	if (avg >= Min_mark && avg <= Max_mark)
	{
		avg_mark = avg;
	}
}

string Student::get_name() {
	return name;
}

void Student::set_name(string n) {
	name = n;
}


string Student::get_surname() {
	return surname;
}

void Student::set_surname(string sn) {
	surname = sn;
}

Student::Student() {
	/*cout << "default construction" << endl;*/
	name = "no name";
	surname = "no surname";
	age = 16;
	avg_mark = 4;
}

Student::Student(string name, string sname, int a, float mark) {
	cout << "contruction whit out" << endl;
	name = name;
	surname = sname;
	age = a;
	avg_mark = mark;

}

Student::Student(string name, string sname) {
	cout << "contruction whit out" << endl;
	name = name;
	surname = sname;
}

Student::Student(float mark) {
	cout << "contruction whit out" << endl;
	avg_mark = mark;

}

Student::~Student() {
	cout << "called Student destruction" << endl;
}

void Student::init(string name, string sname, int a, float mark) {

	name = name;
	surname = sname;
	age = a;
	avg_mark = mark;

}

void Student::init_default() {

	name = "no name";
	surname = "no surname";
	age = 16;
	avg_mark = 4;
}

string Student::convert_to_string() {
	return name + " " + surname + " (age = " + to_string(age) + ") " + "(avg mark: " + to_string(avg_mark) + ") ";
}
