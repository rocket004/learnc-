#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
#include <array>        //std::array

void modify(int& num1); // declare function

int main() {
    
    int a;
    std::cout << "enter a number: " << std::endl;
    std::cin >> a;
    modify(a); // call function here
    std::cout << "\" integer a\" has been updated to " << a << std::endl;
    
    return 0;
}

void modify(int& num1) // this function takes a reference parameter, define function
{
    int temp;
    std::cout << "select a modification: \n1 - add one\n2 - minus one\n3 - times two\nYour selection is: ";
    std::cin >> temp;
    
    if (temp==1) {
        num1 = num1 + 1;
    }
    if (temp==2) {
        num1 = num1 -1;
    }
    if (temp==3) {
        num1 = num1 * 2;
    }
}
