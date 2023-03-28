#pragma once

#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;


	Student() {
		/*cout << "default construction" << endl;*/
		name = "no name";
		surname = "no surname";
		age = 16;
		avg_mark = 4;
	}

	Student(string name, string sname, int a, float mark) {
		cout << "contruction whit out" << endl;
		name = name;
		surname = sname;
		age = a;
		avg_mark = mark;

	}

	Student(string name, string sname) {
		cout << "contruction whit out" << endl;
		name = name;
		surname = sname;
	}

	Student(float mark) {
		cout << "contruction whit out" << endl;
		avg_mark = mark;

	}

	~Student() {
		cout << "called Student destruction" << endl;
	}

	void init(string name, string sname, int a, float mark) {

		name = name;
		surname = sname;
		age = a;
		avg_mark = mark;

	}

	void init_default() {

		name = "no name";
		surname = "no surname";
		age = 16;
		avg_mark = 4;
	}

	string convert_to_string() {
		return name + " " + surname + " (age = " + to_string(age) + ") " + "(avg mark: " + to_string(avg_mark) + ") ";
	}

};
