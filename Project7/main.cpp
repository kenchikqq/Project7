#include <iostream>
#include <windows.h>
int main() {
    setlocale(LC_ALL, "Russian");

    double firstNumber, secondNumber, result;
    char operation;


    std::cout << "������� �����������\n";
    std::cout << "������� ������ �����: ";
    std::cin >> firstNumber;

    std::cout << "������� �������� (+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << "������� ������ �����: ";
    std::cin >> secondNumber;


    if (operation == '+') {
        result = firstNumber + secondNumber;
        std::cout << "���������: " << result << std::endl;
    }
    else if (operation == '-') {
        result = firstNumber - secondNumber;
        std::cout << "���������: " << result << std::endl;
    }
    else if (operation == '*') {
        result = firstNumber * secondNumber;
        std::cout << "���������: " << result << std::endl;
    }
    else if (operation == '/') {
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
            std::cout << "���������: " << result << std::endl;
        }
        else {
            std::cout << "������: ������� �� ����!" << std::endl;
        }
    }
    else if (operation == '%') {
        result = (firstNumber * secondNumber) / 100;
        std::cout << "���������: " << result << std::endl;
    }
    else {
        std::cout << "������: �������� ��������!" << std::endl;
    }

    return 0;
}