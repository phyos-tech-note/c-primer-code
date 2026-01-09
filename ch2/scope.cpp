#include <iostream>

int main() { // Block of main starts
    int sum = 0; 
    
    for (int val = 1; val <= 10; ++val) { // Block of for-loop starts
        sum += val; 
    } // Block of for-loop ends
    
    std::cout << sum << std::endl;
    return 0;
} // Block of main ends