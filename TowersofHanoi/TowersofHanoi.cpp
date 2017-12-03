/* 
 * File:   TowersofHanoi.cpp
 * Author: johnvecchio
 * CIT - 245
 * Netbeans 7.1
 *
 * Created on March 29, 2012, 1:00 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int gTotalMoves = 0;

void hanoi (int nDisks, int pegA, int pegB, int pegC){
    if (nDisks > 0) {
        gTotalMoves++;
        hanoi (nDisks - 1, pegA, pegC, pegB);
        cout << "Move disk from peg " << pegA << " to peg " << pegC << endl;
        //recursively calling itself to continue the process of moving the disks
        hanoi(nDisks-1, pegB, pegA, pegC);
    }
}

int main() {
    int numDisks;
    char answer;
    
    cout << "***Towers of Hanoi***" << endl;
    
    do {
        gTotalMoves = 0;
        cout << "Input number of disks: ";
        cin >> numDisks;

        //sending out the to hanoi method to run
        hanoi (numDisks, 1, 2, 3);
        cout << "Total number of moves: " << gTotalMoves << endl;
        cout << "\nWould you like to continue? (y/n)";
        cin >> answer;
        cout << endl;
    } while (answer == 'y' || answer == 'Y');
    
    return 0;
}

