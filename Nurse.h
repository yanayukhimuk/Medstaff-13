#pragma once
#include "Medstaff.h"
#include <iostream>
#include "Nurse.h"

using namespace std;

class Nurse :
	public Medstaff
{
public:
	Nurse(string new_position = "���������", int new_service = 15) :
		Medstaff(new_position, new_service)
	{}
	void get_info() {
		cout << "��������� " << _position << endl;
		cout << "\t" << "���� ������ " << _record_of_service << endl;
		cout << endl;
	}
};

