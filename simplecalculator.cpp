// program to build a simple calculator
//
#include <iostream>

int main() {
    
    char o;
    float num1 = 0 , num2 = 0;
    
    // ask user to enter two numbers
    std::cout << "enter first number \n";
    std::cin >> num1;
    std::cout << "enter second number \n";
    std::cin >> num2;
    
    // ask user to select the math operator
    std::cout << "select on of these math operators: +, -, *, / \n";
    std::cin >> o;
    
    switch (o) {
        case '+':
            std::cout << "num1 + num2: ";
            std::cout << num1+num2 << "\n";
            break;
        case '-':
            std::cout << "num1 - num2: ";
            std::cout << num1-num2 << "\n";
            break;
        case '*':
            std::cout << "num1 * num2: ";
            std::cout << num1*num2 << "\n";
            break;
        case '/':
            std::cout << "num1 / num2: ";
            std::cout << num1/num2 << "\n";
            break;
    }
    
}



