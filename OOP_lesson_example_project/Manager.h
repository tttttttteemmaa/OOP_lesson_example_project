#pragma once

#include "construction.h"

class Manage {
private:
	float calcul_avg_mark(Student* list, int size) {
		float avg = 0;

		for (int i = 0; i < size; i++)
		{
			avg += list[i].get_avg_mark();
		}
		return avg / size;
	}


public:
	//захар лох


};
