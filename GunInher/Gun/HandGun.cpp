/* 
 * File:   HandGun.cpp
 * Author: johnvecchio
 * 
 * Created on March 31, 2012, 10:37 AM
 */

#include "HandGun.h"
#include <string>
using std::string;

namespace GunInherit {
    HandGun::HandGun(): Gun(), grips("No grips"), sights("No sights"), laser(false) {
//        grips = "N/A";
//        sights = "N/A";
//        laser = false;
    }

    HandGun::HandGun(string manu, string calb, string grip, string sight, bool las) 
                          : Gun(manu, calb), grips(grip), sights(sight), laser(las) {
//        grips = grip;
//        sights = sight;
//        laser = las;
    }
    
    void HandGun::setGrips(string grip){
        grips = grip;
    }
    void HandGun::setSights(string sight){
        sights = sight;
    }
    void HandGun::setLaser(bool las){
        laser = las;
    }
    string HandGun::getGrips(){
        return grips;
    }
    string HandGun::getSights(){
        return sights;
    }
    string HandGun::getLaser(){
        string answer;
        
        if (laser == true){
            answer = "laser on";
        } else {
            answer = "no laser";
        }
        return answer;
    }
}
