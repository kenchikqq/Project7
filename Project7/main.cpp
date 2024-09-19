#include <iostream>
#include <windows.h>
int main() {
    setlocale(LC_ALL, "Russian");

    double firstNumber, secondNumber, result;
    char operation;


    std::cout << "Простой калькулятор\n";
    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;

    std::cout << "Введите оператор (+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;


    if (operation == '+') {
        result = firstNumber + secondNumber;
        std::cout << "Результат: " << result << std::endl;
    }
    else if (operation == '-') {
        result = firstNumber - secondNumber;
        std::cout << "Результат: " << result << std::endl;
    }
    else if (operation == '*') {
        result = firstNumber * secondNumber;
        std::cout << "Результат: " << result << std::endl;
    }
    else if (operation == '/') {
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
            std::cout << "Результат: " << result << std::endl;
        }
        else {
            std::cout << "Ошибка: Деление на ноль!" << std::endl;
        }
    }
    else if (operation == '%') {
        result = (firstNumber * secondNumber) / 100;
        std::cout << "Результат: " << result << std::endl;
    }
    else {
        std::cout << "Ошибка: Неверный оператор!" << std::endl;
    }

    return 0;
}