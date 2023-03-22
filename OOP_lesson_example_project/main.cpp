#include "main.h"


class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	void init(string name, string sname, int a, float mark) {

		name = name;
		surname = sname;
		age = a;
		avg_mark = mark;

	}


	string convert_to_string() {
		return name + " " + surname + " (age = " + to_string(age) + ") " + "(avg mark: " + to_string(avg_mark) + ") ";
	}

};
//
//void chance_student(Student st) {
//	st.name = "no name";
//	st.surname = "no surname";
//	st.age = 0;
//	st.avg_mark = 0;
//
//
//}



int main() {

	Student st1;
	Student st2;
	Student st3;

	st1.init("ivan", "ivanov", 14, 10);
	st2.init("boba", "Buba", 14, 10);
	st3.init("Huma", "Homa", 14, 10);
	
	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;

	//Student st2 = st1;

	//st1.avg_mark = 9;

	//cout << st2.name << " " << st2.surname << " (age = " << st2.age << ") " << "(avg mark: " << st2.avg_mark << ") " << endl;
	
	return 0;
}