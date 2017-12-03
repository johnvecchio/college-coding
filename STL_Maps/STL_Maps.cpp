/* 
 * File:   STL_Maps.cpp
 * Author: johnvecchio
 * 
 * Netbeans 7.1
 * Maps program
 *
 * Created on April 24, 2012, 3:00 PM
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    map<string, string> SSnums;
    
    SSnums["Paul Brown"] = "123-45-6789";
    SSnums["Mary Smith"] = "123-45-6790";
    SSnums["John Smith"] = "123-45-6791";
    SSnums["Lisa Brown"] = "123-45-6792";
    
    cout << "Iterating through map:" << endl;
    
    map<string, string>::const_iterator iter;
    for (iter = SSnums.begin(); iter != SSnums.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
    
    cout << endl;
    
    string search = "John Brown";
    if (SSnums.find(search) == SSnums.end())
        cout << search << " was not found" << endl;
    
    search = "Paul Brown";
    if (SSnums.find(search) != SSnums.end()){
        cout << search << " was found" << endl;
        cout << SSnums[search];
    }
            
            
    return 0;
}

