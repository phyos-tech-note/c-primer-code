#include <iostream>

int main()
{
    int ival = 1024;
    int *pi = &ival;   // pi က ival ကို ညွှန်တယ်
    int **ppi = &pi;   // ppi က pointer pi ကို ထပ်ညွှန်တယ်

    std::cout << "value of ival: " << ival  << std::endl;
    std::cout << "value of *pi: " << *pi  << std::endl;
    std::cout << "value of **ppi : " << **ppi  << std::endl;
    
    std::cout << "value of ppi : " << ppi  << std::endl;

    **ppi = 20 ;
    std::cout << "value of ival: " << ival  << std::endl;

}