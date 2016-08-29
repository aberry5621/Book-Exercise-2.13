//
//  main.cpp
//  Book Exercise 2.13
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Calculate compound value
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Compund Value of Savings Account \n";
    
    // D
    double monthly_amount_input = 0.0;
    const double apr = (1 + 0.05/12);
    double m1 = 0.0;
    double m2 = 0.0;
    double m3 = 0.0;
    double m4 = 0.0;
    double m5 = 0.0;
    double compound_value_calc = 0.0;

    // I
    cout << "Enter the monthly savings amount: ";
    cin >> monthly_amount_input;
    
    // P
    m1 = monthly_amount_input * apr;
    m2 = (monthly_amount_input + m1) * apr;
    m3 = (monthly_amount_input + m2) * apr;
    m4 = (monthly_amount_input + m3) * apr;
    m5 = (monthly_amount_input + m4) * apr;
    compound_value_calc = (monthly_amount_input + m5) * apr;
    
    // O
    cout << "After the sixth month, the account value is " << compound_value_calc << endl;
    
    return 0;
    
}