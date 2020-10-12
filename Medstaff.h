#pragma once /* Защита от двойного подключения заголовочного файла */
#include <iostream>
#include <string>

using namespace std;

class Medstaff
{
public:
	string _position;
	int _record_of_service;

	Medstaff(string new_position = "Должность",  int new_service = NULL) :
		_position(new_position),
		_record_of_service(new_service) {}
	void set_position(string new_position) {
		_position = new_position;
	}
	void set_record_of_service(int new_service) {
		_record_of_service = new_service;
	}
	string get_position() {
		return _position;
	}
	int get_service() {
		return _record_of_service;
	}
	virtual void get_info() {
		cout << "Должность " << _position << endl;
	}
	~Medstaff()
	{
		cout << "Должность " << _position << " уволен(а)" << endl;
	}
};