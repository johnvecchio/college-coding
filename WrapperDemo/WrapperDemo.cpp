/* 
 * File:   WrapperDemo.cpp
 * Author: johnvecchio
 * 
 * Netbeans 7.1
 * CIT 245
 *
 * Created on March 2, 2012, 12:17 PM
 */
#include <iostream>

using namespace std;
/*
 * 
 */
class Shallow{
public:
    Shallow(){
        array = new char[4];
        
        array[0] = 'a';
        array[1] = 'b';
        array[2] = 'c';
        array[3] = 'd';
    }
    
    void setArray(char a,char b,char c,char d){
        array[0] = a;
        array[1] = b;
        array[2] = c;
        array[3] = d;
    }
    void display(){
        for (int i = 0; i<5; i++)
            cout << *(array+i) << " ";

        cout << endl;
    }
private:
    char *array;
};
class Deep{
public:
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
    ///////////////////////////////////////////////////////////////////////////
    ///////////// POINTER DEMO ////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////
    
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
    
    ///////////////////////////////////////////////////////////////////////////
    /////////////////////////////END POINTER DEMO//////////////////////////////
    /////////////////////////////SHALLOW DEMO BEGIN////////////////////////////
    
    cout << "---------------------------" << endl;
    cout << "Shallow Copy 1" << endl;
    // creating deep copy 1
    Shallow was1;
    was1.display();
    
    cout << "Shallow Copy 2 created of Wrapper Shallow" << endl;
    // creating copy of deep copy 1
    Shallow was2(was1);
    was2.display();
    
    // changing deep copy 1 while copy2 stays the same
    cout << "After changing the contents of 1, 1 and 2 =" << endl;
    was1.setArray('{','|','}','@');
    
    was1.display();
    was2.display();
    cout << endl;
    
    
    
    ///////////////////////////////////////////////////////////////////////////
    /////////////////////DEEP COPY PROGRAM STARTING NOW////////////////////////
    ///////////////////////////////////////////////////////////////////////////
    
    
    
    cout << "---------------------------" << endl;
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
    
    // with my compiler I was unable to find a suitable way to delete the objects
    
    return 0;
}

