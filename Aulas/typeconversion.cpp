#include <iostream>

int main(){
    //implicit = automatic
    //explicit = procede a value with a new data type

    //double x = (int) 3.14;

    int correct = 8;
    int questions = 10;
    double result = correct/(double)questions * 100;

    std::cout << result << "%";
    return 0;
}