#include <iostream>

int main()
{
    int v1 = 20;
    int v2 = 024;
    int v3 = 0x14;
    float p = 3.14f;

    std::cout << v1 << std::endl << v2 << "\n"
                << v3 << "this is \ttab" << std::endl;
    std::cout << "\a" ;
                return 0;
}