/* 
 * File:   f.cpp
 * Author: johnvecchio
 * 
 * Created on March 19, 2012, 9:38 PM
 */

#include "f.h"
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

namespace f {
    
    class f {
    public:
        f::f() { cout << "Hello from F" << endl; }

        f::f(const f& orig) {}
        f::~f(){} 

    private:
        void hello(){ cout << "Hello from F" << endl; }
    //}

}