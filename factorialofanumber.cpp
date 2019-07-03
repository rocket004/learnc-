// program to compute factorial of a number
// n! = n*(n-1)*(n-2)...1
// 0! = 1
// 1! = 1
// 4! = 4*3*2*1 = 24

#include <iostream>

int main() {
    
    double num = 0;
    double factorialvalue = 1;
    double i = 1;
    
    std::cout << "enter a number whose factorial you wish to calcuate: ";
    std::cin >> num;
    
    if (num < 0) {
        std::cout << "factorial is not available.";
        // can use break; as well to exit the loop
    }
    else
    {
        
        while (i <= num) {
            factorialvalue = factorialvalue * i;
            i++;
        }
    }
    std::cout << num << " ! is : " << factorialvalue << "\n";
}



