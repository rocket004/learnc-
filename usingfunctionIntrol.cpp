
#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
# include <array>       //std::array
using namespace std;    // lets learn to not use "std::cout" anymore. Preventing the spread of stds.

int main() {
    
// use two functions to calculate area and circumference of a circle
    
    double radius = 0, area = 0, circumference = 0;
    
    cout << "enter radius" << endl;
    cin >> radius;
    cout << "area of a circle: " << area << endl;
    cout << "circumference of a circle: " << circumference << endl;
    
    
    // call function which computes area of a circule given radius as an input
    
    double area(double radius)
    {
        return Pi * radius * radius;
    }
    double circumference(double radius)
    {
        return 2 * Pi * radius;
    }
    
}

