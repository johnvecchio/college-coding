/* 
 * File:   Gun.h
 * Author: johnvecchio
 *
 * Created on March 31, 2012, 10:14 AM
 */

#ifndef GUN_H
#define	GUN_H

#include <string>
using std::string;

namespace GunInherit {
    class Gun {
    public:
        Gun();
        Gun(string manu, string calb);
        void setManu(string manu);
        void setCalb(string calb);
        string getManu();
        string getCalb();
        virtual void print() const;
    private:
        string manufacturer;
        string caliber;
    };
}
#endif	/* GUN_H */

