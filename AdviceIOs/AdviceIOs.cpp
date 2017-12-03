/* 
 * File:   AdviceIOs.cpp
 * Author: johnvecchio
 *
 * Created on March 21, 2012, 12:31 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    ifstream inStream;
    
    char sentence[256];
    string line;
    inStream.open("advice.txt");
    if ( !inStream.fail() ){
        //read original advice        
        while ( inStream.good() ){ //this loop pulls multiple lines
            getline (inStream,line);
            cout << line << endl;
        }
        
    } else {
        //writing to the newly created file
        inStream.close();
        
        ofstream outStream ("advice.txt");
        cout << "Enter some advice to a future programmer" << endl;
        cin.getline(sentence,256); //using just string won't write to a txt file
        outStream << sentence;
        outStream.close(); //closing the stream
    }
    
    
    return 0;
}

