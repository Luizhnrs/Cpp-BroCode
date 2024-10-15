#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "========= Calculator =========\n";

    std::cout << "Enter a number:";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    std::cout << "Choose a operation (+ - * /)";
    std::cin >> op;

    switch (op)
    {
    case '+':
       result = num1 + num2;
       std::cout << "Result of the operation: " << result;
       break;

    case '-':
       result = num1 - num2;
       std::cout << "Result of the operation: " << result;
       break;

    case '*':
       result = num1 * num2;
       std::cout << "Result of the operation: " << result;
       break;
    case '/':
       result = num1 / num2;
       std::cout << "Result of the operation: " << result;
       break;

    default:
     std::cout << "Enter a valid operation";
        break;
    }

    std::cout << "================================\n";

    return 0;
}