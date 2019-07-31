
#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
# include <array>       //std::array
int main() {
    
    /*
     
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
        
        //std::sort (small.begin(), small.end());
        // not sure the line showed above did not work
    }

     */
    
    
    /*
     // This small simple piece of code shows you how to use nested if statements
     
    int num1, num2;
    num1 = 0;
    num2 = 0;
    char userselection = '\0';
    char usercontinue = 'y';
    std::cout << "Hello I'm smart enough to make decision for multiplication and division operations." << std::endl;
Start:
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;
    std::cout << "Select the operation you wish to perform by entering 'd' or 'm':" << std::endl;
    std::cin >> userselection;
    
    if (userselection== 'm') {
        std::cout << "num 1 multiplication with num 2: " << num1*num2;
    } else {
        if (num2 != 0) {
            std::cout << "num 1 division with num 2: " << num1/num2;
        } else {
            std::cout << "error, the answer is undefined" << std::endl;
        }
    }
    
    std::cout << std::endl;
    std::cout << "Do you wish to perform the same operation again ?" << std::endl;
    std::cin >> usercontinue;
    
    if (usercontinue == 'y') {
        goto Start;
    }
    
     */
    
    // notes on different types of control flow
    
    
    // switch case break
    
    /*
    switch (<#expression#>) {
        case <#constant#>:
            <#statements#>
            break;
            
        default:
            break;
    }
    
    // if elseif else
    
    if (<#condition#>) {
        <#statements#>
    } else {
        <#statements#>
    }
    
    // while
    
    while (<#condition#>) {
        <#statements#>
    }
    
    
    // do...while
    do {
        <#statements#>
    } while (<#condition#>);
    
    */
    
    // refer 157/793
    
    /*
    // allows use of dynamic sized array
    // std::array<int, 3> a = {0,1,2};
    // use 'a' in the next set of piece of code
    int arrayof5value[5] = {10, 20, 30, 40, 50};
    std::string arrayof5strings[5] = {"orb","ita","lme","chan","ics"}; // using namespace std, write string, and using no namespace std use std::string
    char arrayof5chars[5] = {'o','r','b','i','t'};
    double arrayof5doubles[5] = {1.2, 2.2, 3.2, 4.2, 5.2};
    std::cout << "4th element in the array of 5 values: " << arrayof5value[4] << std::endl;
    std::cout << "0th index of element in the array of 5 values: " << arrayof5value[0] << std::endl;
    std::cout << arrayof5strings[0] << std::endl;
    std::cout << arrayof5chars[0] << std::endl;
    std::cout << arrayof5doubles[0] << std::endl;
    */
    
    // multiply each element of a vector with another
    
    const int array1_len = 3; // user defined length of vector 1
    const int array2_len = 2; // user defined length of vector 2
    
    int nums1[array1_len] = {35, -3, 2};
    int nums2[array2_len] = {20, -1};
    
    std::cout << "multiply each element in num1 by each element in num2: " << std::endl;
    
    for (int index1 = 0; index1 < array1_len; ++index1) {
        for (int index2 = 0; index2 < array2_len; ++index2) {
            std::cout << nums1[index1] * nums2[index2] << std::endl;
        }
    }
    
    // intialize a 3 x 4 matrix
    const int rowmatrix1 = 3;
    const int columnmatrix1 = 4;
    int matrix1 [rowmatrix1][columnmatrix1] = { { 2, 3, 5, 4},
                                                {4, 2, 12, 900},
                                                {23, 45, 55, 444}};
    std::cout << matrix1 << std::endl; // this outputs 0x7fff5fbff680
    
    /*
     
     
     
     
    // this program inputs matrix from user and displays it
    
    int mat[3][3]; // matrix can have max 3 rows and 3 cols
    int i, j;
    std::cout << "Enter the matrix elements row-wise :- " << std::endl;
    for ( i = 0; i < 3; i++ ) { // outer loop iterates over each row
        for ( j = 0; j < 3; j++ ) { // inter loop iterates over each column
            std::cout << "mat[" << i << "][" << j << "] : ";
            // i -> row no. and j -> col no.
            std::cin >> mat[i][j];
        }
    }
    // display the matrix
    std::cout << "You have entered the matrix :- " << std::endl;
    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
     
     
     */
    
    // 3 x 3 matrix
    
    int mat[3][3];
    int i,j;
    std::cout << "Enter the matrix elements row-wise :- " << std::endl;
    for (i=0; i<3; ++i) {
        for (j=0; j<3; ++j) {
            std::cout << "mat[" << i << "][" << j << "] : ";
            std::cin >> mat[i][j];
        }
    }
    std::cout << "this is the matrix you populated: " << std::endl;
    for (i = 0; i<3; ++i) {
        for (j=0; j<3; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
    
}

