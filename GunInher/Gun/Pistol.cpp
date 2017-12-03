/* 
 * File:   Pistol.cpp
 * Author: johnvecchio
 * 
 * Created on March 31, 2012, 12:16 PM
 */

#include "Pistol.h"
#include <string>
#include <iostream>
using namespace std;

namespace GunInherit{
    
    Pistol::Pistol() : HandGun(), semiauto(false) {
    }

    Pistol::Pistol(string manu, string calb, string grip, string sight, bool las, bool sora) 
                : HandGun(manu, calb, grip, sight, las), semiauto(sora) {
    }
    void Pistol::setSemiAuto(bool sora){
        semiauto = sora;
    }
    string Pistol::getSemiAuto(){
        string answer;
        if (semiauto == true){
            answer = "Semi-Auto";
        } else {
            answer = "Full-Auto";
        }
        return answer;
    }
    void Pistol::print(){
        cout << "Manufacturer:  " << getManu() << endl << 
            "Caliber:       " << getCalb() << endl <<
            "Grip type:     " << getGrips() << endl <<
            "Sights:        " << getSights() << endl <<
            "Laser:         " << getLaser() << endl <<
            "Semi-Automatic:" << getSemiAuto() << endl << endl;
    }
}


