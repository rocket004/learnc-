#include <iostream>

int main() {
    
    // declaring the variables
    float earthweight;
    int planetnumber;
    float weight;
    
    // initializing weight
    weight = 0;
    
    // user enters earth weight
    std::cout << "enter your earth weight in lbs: ";
    std::cin >> earthweight;
    // user selects the planet they want to visit
    std::cout << "Select a number for a corresponding planet you know your weight on.\n";
    std::cout << " 1. venus 2. mars 3. jupiter 4. saturn 5. uranus 6. neptune \n";
    std::cin >> planetnumber;
    
    if (planetnumber == 1){
        weight = earthweight *0.78;
    }
    else if (planetnumber ==2){
        weight = earthweight*0.39;
    }
    else if (planetnumber ==3){
        weight = earthweight*2.65;
    }
    else if (planetnumber ==4){
        weight = earthweight*1.17;
    }
    else if (planetnumber ==5){
        weight = earthweight*1.05;
    }
    else if (planetnumber ==6){
        weight = earthweight*1.23;
    }
    std::cout <<"your weight will be:" << weight <<"\n";
}

// comments-notes on how to compile:
//g++ space.cpp
//./a.out


