#include "construction.h"



//
//Student get_best_student(Student st1, Student st2, Student st3) {
//	
//	return st1.avg_mark > st2.avg_mark && st1.avg_mark > st3.avg_mark ? st1 : st2.avg_mark > st3.avg_mark ? st2 : st3;
//}


int main() {
	Student st;
	Student st1(10);
	Student st2("Buba", "Hoba");
	Student st3("Boba", "Huba", 14, 6);

	//st1.init("ivan", "ivanov", 14, 10);
	//st2.init("boba", "Buba", 14, 13);
	//st3.init("Huma", "Homa", 14, 5);
	//
	cout << st.convert_to_string() << endl;
	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;

	//cout << "Best student: " << get_best_student(st1, st2, st3).convert_to_string() << endl;

	//Student st2 = st1;

	//st1.avg_mark = 9;

	//cout << st2.name << " " << st2.surname << " (age = " << st2.age << ") " << "(avg mark: " << st2.avg_mark << ") " << endl;

	return 0;
}