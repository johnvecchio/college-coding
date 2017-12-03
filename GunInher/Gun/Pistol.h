/* 
 * File:   Pistol.h
 * Author: johnvecchio
 *
 * Created on March 31, 2012, 12:16 PM
 */

#ifndef PISTOL_H
#define	PISTOL_H

#include <string>
#include "Gun.h"
#include "HandGun.h"

namespace GunInherit {    
    
    class Pistol : public HandGun {
    public:
        Pistol();
        Pistol(string manu, string calb, string grip, string sight, bool las, bool sora);
        void setSemiAuto(bool sora);
        string getSemiAuto();
        void print();
    private:
        bool semiauto;
    };
}
#endif	/* PISTOL_H */

