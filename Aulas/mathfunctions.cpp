#include <iostream>
#include <cmath>

int main(){
    int x = 4;
    int y = 9;
    int z;

    //z = std::max(x,y);
   // z = std::min(x,y);
    z = pow(2, 7);
    z = sqrt(64);
    z = abs(-3);
    z = round(x);
    z = ceil(x);

    std::cout << z;

    return 0;
}