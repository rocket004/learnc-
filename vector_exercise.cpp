//
//  vector_exercise.cpp
//  cppcook
//
//  Created by Meet Patel on 1/6/20.
//  Copyright © 2020 meet_raj_patel. All rights reserved.
//

#include <iostream>     //std::cout
#include <string>       //std::string
#include <vector>       //std::vector
#include <algorithm>    //std::sort
#include <array>       //std::array


using namespace std;

// 'vector' defined directly in the main function

void printvector(double x0, double y0, double x1, double y1);

int main() {
    
    double xstart = 1.2;
    double ystart = 0.4;
    double xend = 2.0;
    double yend = 1.6;
    
    printvector(xstart, ystart, xend, yend);
    
    return 0;
}

// 'vector' defined as a void function and used in main() function

void printvector(double x0, double y0, double x1, double y1)
{
    cout << "("<< x0 <<","<< y0 <<")------>(" << x1 <<","<< y1 <<")"<<endl;
}

// 'vector' defined as a class

class Vector {
    double xstart;
    double ystart;
    double xend;
    double yend;
    
public:
    void printvector(double xstart, double ystart, double xend, double yend)
    {
        cout << "("<< xstart <<","<< ystart <<")------>(" << xend <<","<< yend <<")"<<endl;
    }
};



