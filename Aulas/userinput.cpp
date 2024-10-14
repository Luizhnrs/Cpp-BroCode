#include <iostream>

int main(){
    std::string name;
   
    std::cout << "Whats Your Name?: " << std::endl;
    std::cin >> name;

    std::cout << "Hello!: " << name;
    return 0;
}