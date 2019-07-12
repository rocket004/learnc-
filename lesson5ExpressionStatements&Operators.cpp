// lesson 5
// working with expressions, statements, and operators

// what statements are
// what blocks or compound statements are
// what operators are
// how to perform simple arthimetic and logical expressions

#include <iostream>
#include <string>
// use "using namespace std;" if you wish not to use "std::cout" instead of "cout"
//using namespace std;

// whitespaces typically are not visible to the compiler. This includes tabs, line feeds, spaces, carriage returns and so on. Whitespaces within string literals, though, make a difference to the output.

int main()
{
    
    {
    int startValue = 101;
    std::cout << "Start value of integer being operated: " << startValue << std::endl; // gives 101
    
        std::cout << "++x = " << ++startValue << std::endl; // gives 102
        std::cout << "x = " << startValue << std::endl;     // gives 102
        std::cout << "x = " << startValue << std::endl;     // gives 102
        std::cout << "x++ = " << startValue++ << std::endl; // gives 102
        std::cout << "x-- = " << startValue-- << std::endl; // gives 103
        std::cout << "--x = " << --startValue << std::endl; // gives 101
    
    }
    /* ++x is prefered over x++
     https://www.embedded.com/design/programming-languages-and-tools/4410601/Pre-increment-or-post-increment-in-C-C-
     1. a simple example to understand postfix and prefix is as follows:
     for (i=0, i<10, i++) is less favourable compared to for (i=0,i<10,++i)
     2. another example is as follows:
     x = 3;
     y = ++x; this operation sets x==4 y==4
     y = x++; this operation sets x==4 y==3;
     3. postfix ++ -- is left to right
        prefix  ++ -- is right to left
     */
    
    /* operators
     < > <= >= != == + - / *
     */
    
    /*
     logical operations: NOT NOR OR AND NAND XOR
     AND = &&
     OR  = ||
     NOT = !
     XOR = ^
     */
    
    {
    bool op1 = false, op2 = false; //operator 1 and operator 2 is true or false input of type boolean
    std::cout << " enter true(1) or false(0) for two operands: " << "\n";
    std::cin >> op1;
    std::cin >> op2;
        std::cout << op1 << " AND " << op2 << " = " << (op1 && op2) <<"\n";     //AND
        std::cout << op1 << " OR " << op2 << " = " << (op1 || op2) <<"\n";      //OR
        std::cout << op1 << " XOR " << op2 << " = " << (op1 ^ op2) <<"\n";      //XOR
        std::cout << op1 << " NOR " << op2 << " = " << !(op1 || op2) <<"\n";    //NOR
        std::cout << op1 << " NAND " << op2 << " = " << !(op1 && op2) <<"\n";   //NAND
        
    }
    
    /*
     bitwise operations: NOT AND OR XOR
     example:
     enter a number between (0 - 255) : 181
     181 in binary is 10110101
     logical NOT ~
     ~10110101 = 01001010
     logical AND, & with 00001111
     0001111 & 10110101 = 0000101
     logical OR, | with 00001111
     00001111 | 10110101 = 10111111
     logical XOR, ^ with 00001111
     00001111 ^ 10110101 = 10111010
     */
    
    {
    unsigned short inputnumber = 0;
        unsigned short secondinput = 240;
    std::cout << "enter a number between 0 - 255 :" ;
    std::cin >> inputnumber ;
    std::bitset<8> inputbits(inputnumber);
    // converts input number from 0-255 to 8 bit word, using function inputbits(xxxx) and size given using standard bitset 8 bit class.
    std::cout << inputnumber << " in binary is " << inputbits << "\n";
    // perform bitwise ~OR not operation on the binary 8 bit word of the number that user entered
        std::cout << "~" << inputbits << " = " << ~(inputbits) <<"\n";
    // perform another bitwise AND operation on the binary 8 bit world of the number that user entered
        std::bitset<8> random240(secondinput);
        std::cout << "11110000" << " AND " << inputbits << " = " << (random240 | inputbits) << std::endl ;
        std::cout << "rand240 = " << random240 << std::endl;
    }
    
    {
        /*
         bitwise right shift (>>) and bitwise left shift (<<)
         see the examplel below
         */
        int usernumber1 = 0 ;
        std::cout << "enter a number" << "\n";
        std::cin >> usernumber1;
        std::cout << "Quarter: " << int (usernumber1 <<2) << "\n"; //bitwise left shift
        std::cout << "Half: " << int (usernumber1 <<1) << "\n";
        std::cout << "Double: " << int (usernumber1 >>1) << "\n";
        std::cout << "Quadruple: " << int (usernumber1 >>2) << "\n";//bitwise right shift

        /* the difference between the bitwise and boolean oparator is that the bitwise operators does not return a boolean result. boolean operator returns a boolean result.
         
         && || !  :gives (logical: NOT !, AND &&, OR || ) true(1) or false(0) results.
         &  | ~   :gives (bitwise: NOT ~, AND  &, OR  |, XOR ^) These does not return boolean results.
         
         */
        
    }
    
    
    {
        /* compound assignment operators
         num1 += num2 this translates to num1 = num1 + num2
         ...
         */
        
        // sizeof() to determine the number of bytes occupied by an array of 100 integers and that by each element therein
        std::cout << "use sizeof to determine memory used by arrays" << std::endl;
        int mynumbers[100] = {23, 0};
        std::cout << "bytes used by an int: " << sizeof(int) <<std::endl;
        std::cout << "bytes used by mynumbers: " << sizeof(mynumbers) <<std::endl;
        std::cout << "bbytes used by an element: " << sizeof(mynumbers[0]) << std::endl;
        
    }
    return 0;
    
    
}
