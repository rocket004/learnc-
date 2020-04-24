#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
#include <array>        //std::array
using namespace std;


int main() {
    
    // https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/pointers/exercises_pointers.html
    
    // Pointer #1
    
    /*
     int box = 5;
     int *ptr = &box;
     int **dPtr = &ptr;
     
     cout << "box holds: " << box << endl;                 // value the box contains
     cout << "box lives at: " << &box << endl;             // the address where box lives
     cout << "pointer points to address: " << ptr << endl; // name of the pointer that you created is called "ptr" here, it points at the memory address where the box lives.
     cout << "the thing that ptr points to has the value: " << *ptr << endl;
     cout << " ptr lives at: " << &ptr << endl;
     
     // https://www.youtube.com/watch?v=ZMDYsr9scGo
     */
    
    // Pointer #2
    
    // Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
    
    
     int a = 2;
     int b = 5;
     int *ptrA = &a;
     int *ptrB = &b;
     
     cout << "the value stored in variable a is: " << a << endl;
     cout << "the value stored in variable b is: " << b << endl;
     cout << "the pointer ptrA points to address: " << ptrA << endl;
     cout << "the pointer ptrB points to address: " << ptrB << endl;
     cout << "the variable a lives at: " << &a << endl; // or ptrA
     cout << "the variable b lives at: " << &b << endl; // or ptrB
     cout << "the thing that pointer ptrA points to has the value: " << *ptrA << endl;
     cout << "the thing that pointer ptrB points to has the value: " << *ptrB << endl;
     cout << "pointer ptrA lives at: " << &ptrA << endl;
     cout << "pointer ptrB lives at: " << &ptrB << endl;
    
    
    // Pointer #3
    
    // Write a program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value.
    
    
    /*
     // user enters the size of the dataset
    int n = 0;
    cout  << "enter the size of the array: ";
    cin >> n;
    
    cout << "enter " << n << " values in this array" << endl;
    // create the array using 'for' loop
    
    int m = 0;
    int array1[n];
    for (m = 0; m < n; m++) {
        cin >>  array1[m];
    }
    
    // display the array using 'for' loop
    for (m = 0; m < n; m++) {
        cout << array1[m] <<endl;;
    }
    
    // find maxiumum value in the input array using 'for' and 'if' condition
    int max = 0;
    for (m = 0; m < n; m++) {
        if (array1[m] > max) {
            max = array1[m];
        }
    }
    cout << "the maximum value in the array: " << max << endl;;
    */
     
    /*
    std::size_t n{};
    std::cout << "Enter size\n";
    std::cin >> n;
    
    int array[n]{};
    
    std::cout << "Enter values\n";
    
    for(auto i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    
    for(auto num : array) {
        std::cout << num << ", ";
    }
    std::cout << '\n';
     */
    
    // Pointer #4
    // Take input in variable and display same value by pointer.
    
    /*
    // enter a variable
    int x = 0;
    cout << "enter the variable: ";
    cin >> x;
    // display the same value stored in the variable using pointer
    // basically use pointer to point at a memory that contains the variable and then display the value
    int *ptrX = &x;
    cout << "the value stored by the variable, which the pointer is pointing to using pointer theory is: " << *ptrX << endl;
    cout << "the memory address is: " << ptrX << endl;
    cout << "the memory address of the pointer ptrA itself is: " << &ptrX << endl;
    */
    
    // Pointer #5
    // Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t. undate the pointer to pointer +2. Then, in another line print the pointer and the letters r and g of the string (using the pointer).
    
    /*
    char str[] = "A string.";
    char *prt_str = str;
    cout << "the given string is: " << str << endl;
    cout << "letter on index 0 is: " << str[0] << endl;
    cout << "pointer position: " << *prt_str << endl;
    cout << "use pointer for letter t: " << prt_str[3] << endl;
    prt_str += 2;
    cout << *prt_str << endl;
    cout << prt_str[1] << endl;
    */
    
    
    /*
    // what is referencing ?
    // refrencing is an alias for a variable. When you declare a reference, you need to initialize it to a variable
    // example
    // varType original = value;
    // varType Referenceoriginal = original;
    
    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address = " << &original << endl;
    
    int ref1 = original;
    cout << "ref1 is at address: " << &ref1 << endl;
    
    int ref2 = ref1;
    cout << "ref2 is at address: " << &ref2 << endl;
    */
    
    // Next in the learning contains the following topics:
    // fundamentals of object-oriented c++ programming:
    // Classes and Objects
    // Implementing Inheritance
    // Polymorphism
    // operator types and overloading
    // casting operators
    // macros and templates
    
    // After this...
    // Next in the learning contains the following topics:
    // learning the STL/standard template library:
    // intro
    // STL string class
    // STL dynamic array classes
    // STL list and forward_list
    // STL set classes
    // STL map classes
    
    // More STL
    
    // understanding function objects
    
    // lambda expressions
    // STL algorithms
    // adaptive containers: stack and queue
    // working with Bit flags using STL
    
    
    // Advanced concepts in c++
    // smart pointers
    // using streams for input and output
    // exception handling
    
    // Going forward (optional): contains taops about processions, new features.
    
    
    return 0;
}

