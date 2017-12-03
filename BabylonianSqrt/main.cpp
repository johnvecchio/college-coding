/* 
 * File:   main.cpp
 * Author: johnvecchio
 * CIT-245 
 * Netbeans 7.1
 * Created on January 31, 2012, 10:48 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    double input, guess, r, check;
    //gather information
    cout << "Enter an integer to compute its square root ";
    cin  >> input;
    
    //algorithm set up
    guess = input/2;
    bool done = false;
        
    while(!done){
        //algorithm
        r = input/guess;
        guess = (guess+r)/2;
        //check to see if the root is found
        check = guess * guess;
        if ((check) < (input+.001)){
            //end if found
            done = true;
        }
        
    }
    
    //output
    cout << "Checking " << guess << " * " << guess << " = " << check << "\n" ;
    cout << "The square root of " << input << " is = " << guess << endl;
	
    return 0;
}