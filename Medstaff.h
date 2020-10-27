#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <iostream>
#include <string>

using namespace std;

class Medstaff
{   
	
public: 
	string position;
	int record_of_service;

	Medstaff(string new_position = "���������",  int new_service = NULL) :
		position(new_position),
		record_of_service(new_service) {}
	void set_position(string new_position) {
		position = new_position;
	}
	void set_record_of_service(int new_service) {
		record_of_service = new_service;
	}
	string get_position() {
		return position;
	}
	int get_service() {
		return record_of_service;
	}
	virtual void get_info() {
		cout << "��������� " << position << endl;
	}
	int total_record_of_service(){
		return 0;
	}
	~Medstaff()
	{
		cout << "��������� " << position << " ������(�)" << endl;
	}
};