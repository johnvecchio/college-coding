/* 
 * File:   Gun.cpp
 * Author: johnvecchio
 * 
 * Created on March 31, 2012, 10:14 AM
 */
#include <string>
#include <iostream>
#include "Gun.h"
using std::string;
using std::cout;

namespace GunInherit {
    
    Gun::Gun() {
        manufacturer = "N/A";
        caliber = "N/A";
    }

    Gun::Gun(string manu, string calb) {
        manufacturer = manu;
        caliber = calb;
    }

    void Gun::setManu(string manu) {
        manufacturer = manu;
    }

    void Gun::setCalb(string calb) {
        caliber = calb;
    }

    string Gun::getManu() {
        return manufacturer;   
    }

    string Gun::getCalb() {
        return caliber;
    }
    void Gun::print() const{
    }
}