#pragma once

#include "main.h"


class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

public:

	int get_age() {
		return age;
	}

	const int Max_age = 160;
	const int Min_age = 0;

	void set_age(int a) {
		if (a > Max_age && a < Min_age)
		{
			age = a;
		}
	}

	float get_avg_mark() {
		return avg_mark;
	}


	const int Max_mark = 10;
	const int Min_mark = 0;

	void set_avg_mark(float avg) {
		if (avg >= Min_mark && avg <= Max_mark)
		{
			avg_mark = avg;
		}
	}

	string get_name() {
		return name;
	}

	void set_name(string n){
		name = n;
	}


	string get_surname() {
		return surname;
	}

	void set_surname(string sn) {
		surname = sn;
		}







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
