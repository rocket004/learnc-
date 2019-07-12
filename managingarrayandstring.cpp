// Managing arrays and strings
// what are arrays ? how to declare and use them ?
// what are strings ? and how to use character arrays to make strings

// array: collection of elements
// all elements contained in an array are of the same kind.
// this collection forms a complete set.

#include <iostream>
//#include <vector>
#include <string> // to use a c++ string or dynamic string, you need to include the header #include<string>

int main() {
    
    // static array
    //char myCharacters [5];
    //int manyNumbers [5];
    // the variable manyNumber is an array of elements who type is integer, and all these integers are assigned a value = 0. The syntax in c++ that follows is: ElementType ArrayName [constant_number of elements] = {optional initial value}.
    
    // example
    //int myNumber [5] = {34, 56, -21, 5002, 365};
    // One can partially initialize an array as well, first two to the number showed below and then rest goes to 0.
    //int myNumber [5] = {34, 56}
    // this intializes integers to 0; int myNumber [5] = {};
    // other correct formats
    //int myNumber [] = {45, 45 ,345};
    //const int array_length = 9;
    //int mynumber [array_length] = {45, 45 ,33, 23, 23};
    //std::cout << myNumber << "\n"; // this gives the array address and not the
    // this completes how data is stored in an array
    
    // accessing data stored in an array
    // element in an array can be accessed using their zero-based index
    // accessing an array beyong its bounds results in unpredictable behaviour. In many cases this causes a program to crash. Accessing arrays beyong thier bounds should be avoided at all costs. Fence-post error.
    // programming check is explained in future files with headline "controlling programing flow" comment.
    
    /*
    int myNumber [5] = {34, 56, -21, 5002, 365}
    std::cout << "memeory address of mynumber array is:  " << myNumber<< "\n";
    std::cout << "first element in mynumber at index 0 is: " << myNumber[0] << "\n";
    */
    
    // multidimensional arrays
    // depending upon the need, one can have multidimensional arrays in memory
    // the example showed below is unsustainable in a bigger or multidimensional array or matrix problems. There will be another example provided in future for using nested for loop to access all elements. It is shorter, faster and less error-prone. Listed 6.14 in lesson 6
    
    /*
    int solarpanel [2][3] = { {0,1,2}, {3,4,5} };
    std::cout << "memeory address of solarpanel mutlidim array is:  " << solarpanel << "\n";
    std::cout << "extract value from second row third column: " << solarpanel [1][2] <<"\n";
    */
    
    // dynamic arrays
    // to use the dynamic arrary class std::vector, you need to include header vector, which is given by #include <vector>
    // Reserving huge amount of memory without reason and reducing the performance of the system, for instance in the case of a medical records application in a hospital, the user would wanna use this application of n number of patients without knowing the upper and lower limits. The key is to not use static array in such cases. Rather use dynamic arrays that optimize memory consumption and scale up depending on the demand for resources and memory at execution time.
    
    // example of a C-style string, which is a special case of character arrays. C-style strings are fraught with danger.
    
    /*
    char sayhello[] = {'H','e','l','l','o'};
    std::cout << sayhello ;
    */
    
    /*
    char usersentence [21] = {'\0'}; // compiler means null on 21 ist index.
    std::cout << "enter the sentence no longer than 20 characters: ";
    std::cin >> usersentence;
    std::cout <<"\n";
    std::cout << "length of the sentence you entered is: " << strlen (usersentence);
    std::cout <<"\n";
    */
     
    // example
    // using std::string to initialize, store user input, copy, concatenate, determine the length of a stringe
    
    /* run this example
    std::string greetString ("Hello std::string!");
    std::cout << greetString << std::endl;
    std::cout << "Enter a line of text: " << std::endl;
    std::string firstLine;
    getline(std::cin, firstLine);
    std::cout << "Enter another: " << std::endl;
    std::string secondLine;
    getline(std::cin, secondLine);
    std::cout << "Result of concatenation: " << std::endl;
    std::string concatString = firstLine + " " + secondLine;
    std::cout << concatString << std::endl;
    std::cout << "Copy of concatenated string: " << std::endl;
    std::string aCopy;
    aCopy = concatString;
    std::cout << aCopy << std::endl;
    std::cout << "Length of concat string: " << concatString.length() << std::endl;
    return 0;
    */
    
    // use of string class
    // string are objects that respresent sequence of characters
    // string class is an instantiation of the basic_string class template that uses char as its charcter type with its default char_traits and allocator types.
    
    /*
    std::string enter_a_new_name;
    std::cout << "please, enter your full name: ";
    std::getline(std::cin,enter_a_new_name);
    std::cout << "Hello " << enter_a_new_name << ", nice to meet you.";
    std::cout << "\n";
    */
    
    /*
    std::string greetstring ("hello std::string");
    std::cout << "enter first line of text: " << std::endl;
    std::string firstline;
    getline(std::cin, firstline);
    std::cout << "enter another line of text: " << std::endl;
    std::string secondline;
    getline(std::cin,secondline);
    std::cout << "result of two lines is: " <<"\n";
    std::string concatstring = firstline + " " + secondline;
    std::cout << concatstring << "\n";
    */
    
    
    
    return 0;
}


