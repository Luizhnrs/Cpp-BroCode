#include <iostream>

int main(){
    int age; 
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome!";
    } else {
        std::cout<< "You dont have a enough age to acess!";
    }


    return 0;
}