/* 
 * File:   WrapperC.cpp
 * Author: johnvecchio
 *
 * Created on March 1, 2012, 11:28 PM
 */

#include <iostream>

using namespace std;
/*
 * 
 */
class Deep{
public:
    //char *array;
    Deep(){
        array = new char[4];
        *array = 97;
        *(array+1) = 98;
        *(array+2) = 99;
        *(array+3) = 100;
    }
    Deep(const Deep &copy){
        array = new char[4];
        for ( int i = 0; i < 4; i++ ) 
            array[i] = copy.array[i];
    }
    Deep & operator =( const Deep &copy ){
        if ( this != &copy ){
            for ( int i = 0; i < 4; i++ ) 
                array[i] = copy.array[i];
        }

        return (*this);
    }
    void setArray(int a,int b,int c,int d){
        *array = a;
        *(array+1) = b;
        *(array+2) = c;
        *(array+3) = d;
    }
    void display(){
        for (int i = 0; i<5; i++)
            cout << array[i] << " ";

        cout << endl;
    }
private:
    char *array;
};


int main() {
    cout << "Deep Copy 1" << endl;
    // creating deep copy 1
    Deep wad1;
    wad1.display();
    
    cout << "Deep Copy 2 created of Wrapper Deep" << endl;
    // creating copy of deep copy 1
    Deep wad2(wad1);
    wad2.display();
    
    // changing deep copy 1 while copy2 stays the same
    cout << "After changing the contents of 1, 1 and 2 =" << endl;
    wad1.setArray(123,124,125,126);
    
    wad1.display();
    wad2.display();
    return 0;
}
