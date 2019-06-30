// lesson 3

#include <iostream>

void multiplynumbers()
{
    std::cout << "enter the first number:";
    int firstnumber = 0 ;
    std::cin >> firstnumber;
    std::cout << "enter the second number:";
    int secondnumber = 0;
    std::cin >> secondnumber;
    int multiplicationresult = firstnumber*secondnumber;
    //display results
    std::cout << firstnumber << "x" << secondnumber;
    std::cout << " = " << multiplicationresult << "\n";
    
}


int main() {
    
    std::cout << "this program will help you multiply two numbers" << "\n";
    
    // notes:
    // call the function that does all the work
    // this is how you call a function in c++
    // example: functionname();
    // example: anyfunctionname();
    // example: anyfunction you have created in the current main.cpp file with () followed by ;
    // this is called within the int main() function
    
    // uncomment or commment the following two lines to see how int main() executes these two
    
    //multiplynumbers();
    //std::cout << " hello world";
    return 0;
}

