#include <iostream>
#include <Windows.h>
#include "Medstaff.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Head_Doctor.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Doctor Doctor("����", 27); 
	Nurse Nurse("���������", 15);
	Head_Doctor Head_Doctor("���������� ����������", 30);
	int record_of_service = NULL;
	int total_record_of_service = 0; 

	string position;
	cin >> position;
	Doctor.set_position(position); 
	Nurse.set_position(position);
	Head_Doctor.set_position(position);
	Doctor.set_record_of_service(record_of_service);
	Nurse.set_record_of_service(record_of_service);
	Head_Doctor.set_record_of_service(record_of_service);

	// ���� �����������, �� ������� ��, ��� � ����. ������ ���� ������ 

	Doctor.get_info();
	Nurse.get_info();
	Head_Doctor.get_info();

	// total_record_of_service += Doctor(record_of_service) + Nurse(record_of_service) + Head_Doctor(record_of_service);
	cout << "����� ���� " << total_record_of_service << endl << endl;

}