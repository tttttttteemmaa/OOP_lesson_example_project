#include "main.h"

#define DEFAULT_SIZE = 10;
#include "construction.h"

class Group {
private:
	Student list[DEFAULT_SIZE];
	int size;
	string name;


public:
	Group();
	Group(Student* ls, int sz, string nm);
	Group(string nm);
	~Group();
	
	void add(Student student);
	void remove(Student student);
	void remove(int index);
	Student get(int index);
	int size(int index);
	string convert_to_string();

};
