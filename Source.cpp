#include <iostream>
#include "Header.h"

int main()
{

    std::string position;
    std::string service;

    // ���� ����� � ����������
    std::cout << "Position: ";
    getline(std::cin, position);

    // �������� ���������� ������������
    Medstaff* headdoctor = new Medstaff(position);

    // ����
    int service[5];
    // ����� ����
    int sum = 0;

    // ���� ������������� ������ 
    for (int i = 0; i < 5; ++i) {
        std::cout << "Periods of service " << i + 1 << ": ";
        std::cin >> service[i];
        // ������������
        sum += service[i];
    }
    // ��������� ������������� ������ � ������ ������ Medstaff
    headdoctor->set_service(service);

 
    // ������� ������ �� ����������
    std::cout << "Average record of service " << headdoctor->get_position() << " "
        << " is "
        << headdoctor->get_service() << std::endl;
    // �������� ������� student �� ������
    delete headdoctor;
    return 0;
}