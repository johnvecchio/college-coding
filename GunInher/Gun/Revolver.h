/* 
 * File:   Revolver.h
 * Author: johnvecchio
 *
 * Created on March 31, 2012, 12:44 PM
 */

#ifndef REVOLVER_H
#define	REVOLVER_H

#include "Gun.h"
#include "HandGun.h"

namespace GunInherit {

    class Revolver : public HandGun {
    public:
        Revolver();
        Revolver(string manu, string calb, string grip, string sight, 
                        bool las, bool sAction, int numRounds);
        void setSingleAction(bool sAction);
        void setNumberOfRounds(int numRounds);
        string getSingleAction();
        int getNumberOfRounds();
        void print();
    private:
        bool singleAction;
        int numberOfRounds;
    };
}

#endif	/* REVOLVER_H */

