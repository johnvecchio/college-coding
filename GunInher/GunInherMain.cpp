/* 
 * File:   GunInherMain.cpp
 * Author: johnvecchio
 * CIT 245
 * Netbeans 7.1
 * 
 * This program inherits functions from files gun.h, handgun.h 
 * pistol.h and revolver.h. The program then implements them into it
 * and creates multiple objects and tests their use of the multiple 
 * classes inherited.
 * 
 *
 * Created on March 31, 2012, 10:01 AM
 */

#include <iostream>
#include <string>

#include "Gun/Gun.h"
#include "Gun/HandGun.h"
#include "Gun/Pistol.h"
#include "Gun/Revolver.h"

using namespace std;
using namespace GunInherit;
/*
 * 
 */
int main() {
    Gun array[2];
    //Pistol Manu, Calb, Grip, Laser, Sights, Laser, Semi
    
    Pistol myGun("Glock", ".9mm", "Black grip", "3 Dot", false, true);
    array[0] = myGun;
    array[0].print();
//    cout << "Manufacturer:  " << myGun.getManu() << endl << 
//            "Caliber:       " << myGun.getCalb() << endl <<
//            "Grip type:     " << myGun.getGrips() << endl <<
//            "Sights:        " << myGun.getSights() << endl <<
//            "Laser:         " << myGun.getLaser() << endl <<
//            "Semi-Automatic:" << myGun.getSemiAuto() << endl << endl;
    
    //Revolver Manu, Calb, Grip, Sights, Laser, Single, # of Rounds
    Revolver myRev("Vecchio's", ".45mm", "Wood grip", "Stock", true, true, 6);
    cout << "Manufacturer:  " << myRev.getManu() << endl << 
            "Caliber:       " << myRev.getCalb() << endl <<
            "Grip type:     " << myRev.getGrips() << endl <<
            "Sights:        " << myRev.getSights() << endl <<
            "Laser:         " << myRev.getLaser() << endl <<
            "Single Action: " << myRev.getSingleAction() << endl <<
            "# of Rounds:   " << myRev.getNumberOfRounds() << endl;
    
    return 0;
}

