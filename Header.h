#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>

class Medstaff {

public:
    Medstaff(std::string, std::string);

    void set_position(std::string);
    std::string get_position();
    void set_service(float);
    std::string get_service();

private:
   
    float record_of_service;
    // ���
    std::string position;
};