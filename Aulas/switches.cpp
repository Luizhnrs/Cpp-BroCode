#include <iostream>

int main(){
    //switch is a alternative to using many else if statments
    int day;
    std::cout << "Put a number to represent a day of the week";
    std::cout << "Today is: ";
    std::cin >> day;

    switch (day)
    {
    case 1:
    std::cout << "Today is Sunday!";
        break;

    case 2:
    std::cout << "Today is Monday!";
        break;

    case 3:
    std::cout << "Today is Tuesday!";
        break;
    
    case 4:
    std::cout << "Today is Wednesday!";
        break;

    case 5:
    std::cout << "Today is Thursday!";
        break;
    
    case 6:
        std::cout << "Today is Friday!";
        break;

    case 7:
        std::cout << "Today is Saturday!";
        break;

        default:
        std::cout << "Invalid number! Please enter a number between 1 and 7." << std::endl;
        break;
    }

    return 0;
}