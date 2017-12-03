/* 
 * File:   HandGun.h
 * Author: johnvecchio
 *
 * Created on March 31, 2012, 10:37 AM
 */

#ifndef HANDGUN_H
#define	HANDGUN_H

#include <string>
#include "Gun.h"
using std::string;

namespace GunInherit {
  class HandGun : public Gun {
  public:
      HandGun();
      HandGun(string manu, string calb, string grip, string sight, bool las);
      void setGrips(string grip);
      void setSights(string sight);
      void setLaser(bool las);
      string getGrips();
      string getSights();
      string getLaser();
  private:
      string grips;
      string sights;
      bool laser;
  };  
}


#endif	/* HANDGUN_H */

