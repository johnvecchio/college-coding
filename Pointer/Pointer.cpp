/* 
 * File:   Pointer.cpp
 * Author: johnvecchio
 * 
 * Netbeans 7.1
 * CIT 245
 * Created on March 1, 2012, 6:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main() {
    int i = 7;
    int *pi, **ppi;
    pi = &i;
    ppi = &pi;
    
    cout << "This program uses 3 variable" << endl;
    //cout << i << " " << &pi << " " << &ppi << endl;
    cout << "pi = " << pi << endl;
    cout << "dereference of pi = " << *pi << endl;
    cout << "address of pi = " << &pi << endl;
    cout << "address of i = " << &i << endl;
    cout << endl;
    cout << "ppi = " << ppi << endl;
    cout << "dereference of ppi = " << *ppi << endl;
    cout << "address of ppi = " << &ppi << endl;
    cout << "double dereference of ppi = " << **ppi << endl;
    return 0;
}

