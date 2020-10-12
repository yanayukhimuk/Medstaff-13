#pragma once
#include "Medstaff.h"
#include <iostream>
#include "Nurse.h"

using namespace std;

class Nurse :
	public Medstaff
{
public:
	Nurse(string new_position = "Медсестра", int new_service = 15) :
		Medstaff(new_position, new_service)
	{}
	void get_info() {
		cout << "Должность " << _position << endl;
		cout << "\t" << "Стаж работы " << _record_of_service << endl;
		cout << endl;
	}
};

