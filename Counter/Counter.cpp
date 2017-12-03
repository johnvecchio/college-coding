/* 
 * File:   Counter.cpp
 * Author: johnvecchio
 *
 * CIT 245 
 * NetBeans 7.1
 * Created on February 22, 2012, 7:07 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
class Counter {
public:
    // sets count to zero
    Counter();
    //sets counter to a set number
    Counter(int count);
    
    void display();
    void inc(int);
    void dec(int);
private:
    int count;
    int countTotal;
};

int main() {
    Counter c1, c2;
    
    cout << "Using the first counter";
    c1.display();
    c1.inc(2000264756);
    c1.dec(0);
    c1.display();
    
    cout << "\n\nUsing the second counter";
    c2.inc(85);
    c2.dec(242);
    c2.display();
    
    return 0;
}

Counter::Counter():count(0){} //default constructor

Counter::Counter(int cset):count(cset){} //overloaded constructor

void Counter::display(){
    //output
    cout << "\nCurrent count is " << count;
    cout << "\nTotal # of inc and dec is " << countTotal;
}

void Counter::inc(int x){
    //output and adding count total up
    cout << "\nIncrementing " << x << " times";
    countTotal = countTotal + x;
    
    //this loop runs through incrementing the count
    for (int i=0; i<x; i++){
        count++;
    }  
}

void Counter::dec(int x){
    //output and adding count total up
    cout << "\nDecrementing " << x << " times";
    countTotal = countTotal + x;
    
    //this loop runs through incrementing the count
    for (int i=0; i<x; i++){
        count--;
    }
}


