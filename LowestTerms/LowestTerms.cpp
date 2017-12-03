/* 
 * File:   LowestTerms.cpp
 * Author: johnvecchio
 *
 * Created on February 7, 2012, 5:46 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

// this function finds the gcd of two passed variables
int greatestCommonDen (int a,int b){
    int t;
    
    //gcd algorithm
    while (b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    
    //sends back the gcd
    return(a);
}
int main() {
    int gcd, num, den;
    char answer;
    
    do{
        cout << "Enter a numerator ";
        cin >> num;
        cout << "Enter a denominator ";
        cin >> den;

        //passes the numerator and denominator and returns gcd
        gcd = greatestCommonDen(num,den);

        //output with division of the gcd implemented into it
        cout << "\nThe greatest common denominator is " << gcd;
        cout << "\nYou new fraction is " << num/gcd << "/" << den/gcd;
        
        //Again option 
        cout << "\n\nWould you like to do some more? (y/n)";
        cin >> answer;
        cout << "\n";
        
    } while (answer == 'y' || answer == 'Y');

    return 0;
}

