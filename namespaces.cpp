#include <iostream>
//namespaces is a entities names, created by prevente name conflicts
namespace first {
    int x = 1;
}

namespace second 
{
    int x = 2;
} 


int main(){
    using namespace first; //specify the namespace used in this function

   std::cout << x;
    return 0;
}