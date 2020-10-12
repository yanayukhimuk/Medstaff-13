#include <iostream>
#include "Header.h"

int main()
{

    std::string position;
    std::string service;

    // Ввод имени с клавиатуры
    std::cout << "Position: ";
    getline(std::cin, position);

    // Передача параметров конструктору
    Medstaff* headdoctor = new Medstaff(position);

    // Стаж
    int service[5];
    // Общтй стаж
    int sum = 0;

    // Ввод промежуточных данных 
    for (int i = 0; i < 5; ++i) {
        std::cout << "Periods of service " << i + 1 << ": ";
        std::cin >> service[i];
        // суммирование
        sum += service[i];
    }
    // Сохраняем промежуточные оценки в объект класса Medstaff
    headdoctor->set_service(service);

 
    // Выводим данные по сотруднику
    std::cout << "Average record of service " << headdoctor->get_position() << " "
        << " is "
        << headdoctor->get_service() << std::endl;
    // Удаление объекта student из памяти
    delete headdoctor;
    return 0;
}