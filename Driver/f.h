/* 
 * File:   f.h
 * Author: johnvecchio
 *
 * Created on March 19, 2012, 9:38 PM
 */

#ifndef F_H
#define	F_H

#include <iostream>
//using namespace std;

namespace f {

    class f {
    public:
        f();
        f(const f& orig);
        virtual ~f();
        
    private:
        void hello();
    };

}
#endif	/* F_H */

