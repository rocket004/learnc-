// using while and if statements within the same "int main()" code

#include <iostream>

int main() {
    
    double num = 0;
    double factorialvalue = 1;
    double i = 1;
    
    //std::cout << "enter a number whose factorial you wish to calcuate: ";
    std::cout << "enter a random number: ";
    std::cin >> num;
    
    if (num < 0) {
        //std::cout << "factorial is not available.";
        // can use break; as well to exit the loop
    }
    else
    {
    
    while (i <= num) {
        factorialvalue = factorialvalue * i;
        i++;
    }
    }
    //std::cout << num << " ! is : " << factorialvalue << "\n";
    
    if (num > 0) {
        std::cout << "number you entered is positive"<<"\n";
    }
    else if (num < 0){
        std::cout << "number you entered is negative"<<"\n";
    }
    else {
        std::cout << "number you entered is 0" << "\n";
    }
    
    while (num > 0) {
        std::cout << num << ",";
        num--;
        // either --num or num--
        // num- or -num is an incorrect syntax
        // DO NOT ENTER num++ or ++num else the code will break and go into this crazy increase in number lol
    }
    std::cout << " ...liftoff" << "\n";
    
    // enter some more code here
}



