
#include <iostream> //std::cout
#include <string> //std::string
#include <vector> //std::vector

int main() {
    
    // do ... while loop
    int a = 10;
    
    do {
        std::cout << "value of a: " << a << "\n";
        a = a + 1;
    }
    while (a <20 );
  
    int b = 2;
    do {
        b += 1;
        std::cout << "value of b: " << b << "\n";
    }
    while (b<8);
    
    // common situation where do...while loop is used
    std::string s = "abc";
    std::string small, large;
    small = " I am tall";
    large = " I am short";
    std::cout << small << "\n";
    std::cout << "length of string called small: " << small.length() << "\n";
    std::cout << large << "\n";
    std::cout << "length of string called large: " << large.length() << "\n";
    return 0;
    
    {
        // lets compare two strings showed above, i.e. small and large using if...else if...else
        
        std::sort(small.begin(), small.end());
        
    }
}

