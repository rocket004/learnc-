// Lesson 3
// Using variables, declaring constants

#include <iostream>

int main() {
    
    int firstnumber;
    int secondnumber;
    int finalnumber;
    firstnumber = 0;
    secondnumber = 0;
    finalnumber = 0;
    std::cout << "enter the first number : ";
    std::cin >> firstnumber;
    std::cout << "enter the second number : ";
    std::cin >> secondnumber;
    finalnumber = firstnumber * secondnumber;
    std::cout << "multiplication of two numbers is : " << finalnumber << "\n";
    
}
// notes:
// another way to intialise and declare a variable
// example:
// int firstnumber = 0, secondnumber = 0, finalnumber = 0;
// recommendation:
// declating a variable when it is first needed is often better as it makes the code readable - one notices the type of the variable when the declaration is close to its point first use.

// notes on how does RAM (random access memory) works with microprocessor
// https://www.techwalla.com/articles/how-does-ram-work-with-the-cpu

// open "multiply2numbersusingfunction.cpp" to understand how to write a function and use it within the int main() file.
