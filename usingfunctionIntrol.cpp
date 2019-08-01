
#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
#include <array>        //std::array

const double Pi = 3.14;

// declare functions here!!
double area(double radius);
double circumference(double radius);

int main() {
    
    // use two functions to calculate area and circumference of a circle
    
    double rr = 0;
    
    std::cout << "enter radius";
    std::cin  >> rr;
    
    std::cout << "area of a circle: " << ::area(rr) << std::endl;
    std::cout << "circumference of a circle: " << ::circumference(rr) << std::endl;
    // call function which computes area of a circule given radius as an input
    
    return 0;
}

// use these two functions
    double area(double radius)
    {
        return Pi * radius * radius;
    }
    double circumference(double radius)
    {
        return 2 * Pi * radius;
    }
// when a function that does not need to return any value, specify the return type as "void"
    
