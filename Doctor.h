#pragma once
#include <iostream>
#include "Doctor.h"
#include "Medstaff.h"

using namespace std;

class Doctor : public Medstaff
{
public:
	Doctor(string new_position = "Врач", int new_service = 27) :
		Medstaff(new_position, new_service)
	{}
	void get_info() {
		cout << "Должность " << position << endl;
		cout << "\t" << "Стаж работы " << record_of_service << endl;
		cout << endl;
	}
};
