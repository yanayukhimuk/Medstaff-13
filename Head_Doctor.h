#pragma once
#include "Medstaff.h"
#include <iostream>
#include "Head_Doctor.h"

using namespace std; 

class Head_Doctor :
    public Medstaff
{
public:
	Head_Doctor(string new_position = "Заведующий отделением", int new_service = 30) :
		Medstaff(new_position, new_service)
	{}
	void get_info() {
		cout << "Должность " << position << endl;
		cout << "\t" << "Стаж работы " << record_of_service << endl;
		cout << endl;
	}
};

