/* 
 * File:   Revolver.cpp
 * Author: johnvecchio
 * 
 * Created on March 31, 2012, 12:44 PM
 */

#include "Revolver.h"
#include <string>
using std::string;

namespace GunInherit {
    
    Revolver::Revolver(): HandGun(), singleAction(false), numberOfRounds(0) {
    }

    Revolver::Revolver(string manu, string calb, string grip, string sight, 
                bool las, bool sAction, int numRounds) 
                        : HandGun(manu, calb, grip, sight, las), singleAction(sAction), 
                                numberOfRounds(numRounds) {
    }

    void Revolver::setSingleAction(bool sAction){
        singleAction = sAction;
    }
    void Revolver::setNumberOfRounds(int numRounds){
        numberOfRounds = numRounds;
    }
    string Revolver::getSingleAction(){
        string answer;
        
        if (singleAction == true){
            answer = "Single Action";
        } else {
            answer = "Double Action";
        }
        return answer;
    }
    int Revolver::getNumberOfRounds(){
        return numberOfRounds;
    }
    void Revolver::print(){
        
    }
}