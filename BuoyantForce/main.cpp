/* 
 * File:   main.cpp
 * Author: johnvecchio
 * CIT- 245
 * Netbeans 7.1
 * Created on February 2, 2012, 12:59 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main() {
    double bforce, answer, volume, sphereW, radius;
    double waterW = 62.4;
    double PI = 3.141592;
    bool done = false;
    
    while(!done){
        cout << "============================== ";
        cout << "\nEnter the radius of the sphere ";
        cin >> radius;
        // cubing the radius so I dont have to later
        radius = pow(radius,3.0);
        cout << "Enter the weight of the sphere ";
        cin >> sphereW;
        
        //finding volume and buoyancy force
        volume = 1.333333*PI*radius;
        bforce = waterW * volume;
        
        //final output
        cout << "The buoyant force is " << bforce;
        
        //whether or not it floats
        if (bforce >= sphereW){
            cout << "\nIt floats!";
        } else {
            cout << "\nIt sinks!";
        }
        
        //output
        cout << "\n\nWould you like to calculate another?";
        cout << "\n0 for no and 1 for yes ";
        cin >> answer;
        
        if (answer == 0){
            done = true;
        }
        
    }
    return 0;
}