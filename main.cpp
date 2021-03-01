// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int main() {
    // Решение тут
    int M, N ;
    std::cout << "N=";
    std::cin >> N;
    std::cout << "M=";
    std::cin >> M;
    int result = N/M;

    std::cout << result << std::endl;

    return 0;
}