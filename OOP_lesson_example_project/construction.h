#pragma once

#include "main.h"


class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

public:
	const int Max_age = 160;
	const int Min_age = 0;
	const int Max_mark = 10;
	const int Min_mark = 0;


	Student();
	Student(string name, string sname, int a, float mark);
	Student(string name, string sname);
	Student(float mark);
	~Student();

	void set_age(int a);
	int get_age();
	float get_avg_mark();
	void set_avg_mark(float avg);
	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string sn);
	void init(string name, string sname, int a, float mark);
	void init_default();
	string convert_to_string();

};
