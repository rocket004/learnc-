// using enumerated values to indicate cardinal wind directions

#include <iostream>

enum cardinaldirections
{
    North = 25, South = 456, East, West
};

int main() {
    
    std::cout << "display directions and their symbolic values" << "\n";
    std::cout << "North: " << North << "\n";
    std::cout << "South: " << South << "\n";
    std::cout << "East: " << East << "\n";
    std::cout << "West: " << West << "\n";

    cardinaldirections winddirection = East;
    std::cout << "Variable winddirection = " << winddirection << "\n";
}



