#pragma once
#include "Medstaff.h"
#include <iostream>
#include "Head_Doctor.h"

using namespace std; 

class Head_Doctor :
    public Medstaff
{
public:
	Head_Doctor(string new_position = "���������� ����������", int new_service = 30) :
		Medstaff(new_position, new_service)
	{}
	void get_info() {
		cout << "��������� " << position << endl;
		cout << "\t" << "���� ������ " << record_of_service << endl;
		cout << endl;
	}
};

