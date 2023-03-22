#include "main.h"


class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
};

void chance_student(Student st) {
	st.name = "no name";
	st.surname = "no surname";
	st.age = 0;
	st.avg_mark = 0;


}



string convert_to_string(Student st) {
	return " " + st.surname + " (age = " + to_string(st.age) + ") " + "(avg mark: " + to_string(st.avg_mark) + ") ";
}


int main() {

	Student st1;
	Student st2;
	Student st3;

	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 10;

	st2.name = "Boba";
	st2.surname = "babich";
	st2.age = 14;
	st2.avg_mark = 10;

	st3.name = "Myha";
	st3.surname = "Hihamama";
	st3.age = 14;
	st3.avg_mark = 10;

	cout << convert_to_string(st1) << endl;
	cout << convert_to_string(st2) << endl;
	cout << convert_to_string(st3) << endl;


	//Student st2 = st1;

	//st1.avg_mark = 9;

	//cout << st2.name << " " << st2.surname << " (age = " << st2.age << ") " << "(avg mark: " << st2.avg_mark << ") " << endl;
	
	return 0;
}