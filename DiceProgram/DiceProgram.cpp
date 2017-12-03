/* 
 * File:   DiceProgram.cpp
 * Author: johnvecchio
 * CIT-245
 * Netbeans 7.1
 *
 * Created on February 7, 2012, 1:07 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */

double errorPerc (double numRolls, double totals, double odds){
    double errorP;
    
    /* this function finds the error percentage so I don't have 
     * to have a huge math problem in my output
     */ 
    errorP = (abs ( (numRolls*(odds/36)) -totals) / (numRolls*odds/36) )*100;
    
    return(errorP);
}


int main() {
    int die1, die2, dieTotal;
    double numRolls;
    char answer;
    double totals [11];
    
    cout << "This program rolls two dice and tabulates the results";
    
    do{
        
        cout << "\nEnter the number of rolls you would like ";
        cin >> numRolls;
        
        // clears array
        for(int j = 0; j < 12; j++){
                totals[j] = 0;
        }
        
        // rolling die to the asked number
        for(int i = 0; i < numRolls; i++){
            // random number for each die
            die1 = (int)(rand()%6)+1;
            die2 = (int)(rand()%6)+1;
            // adding the totals up so I can count how many rolled
            dieTotal = die1 + die2;
           
            totals[(dieTotal - 2)]++;
            
            dieTotal = 0;
        } //end for loop     
        
        
        cout << "Sum   #Rolled   Odds    %Error";
        cout << "\n2:     " << totals[0] << "         " << numRolls*1/36 << "       " << errorPerc(numRolls,totals[0],1) << "%";
        cout << "\n3:     " << totals[1] << "         " << numRolls*2/36 << "       " << errorPerc(numRolls,totals[1],2) << "%";;
        cout << "\n4:     " << totals[2] << "         " << numRolls*3/36 << "       " << errorPerc(numRolls,totals[2],3) << "%";;
        cout << "\n5:     " << totals[3] << "         " << numRolls*4/36 << "       " << errorPerc(numRolls,totals[3],4) << "%";;
        cout << "\n6:     " << totals[4] << "         " << numRolls*5/36 << "       " << errorPerc(numRolls,totals[4],5) << "%";;
        cout << "\n7:     " << totals[5] << "         " << numRolls*6/36 << "       " << errorPerc(numRolls,totals[5],6) << "%";;
        cout << "\n8:     " << totals[6] << "         " << numRolls*5/36 << "       " << errorPerc(numRolls,totals[6],5) << "%";;
        cout << "\n9:     " << totals[7] << "         " << numRolls*4/36 << "       " << errorPerc(numRolls,totals[7],4) << "%";;
        cout << "\n10:    " << totals[8] << "         " << numRolls*3/36 << "       " << errorPerc(numRolls,totals[8],3) << "%";;
        cout << "\n11:    " << totals[9] << "         " << numRolls*2/36 << "       " << errorPerc(numRolls,totals[9],2) << "%";;
        cout << "\n12:    " << totals[10] << "         " << numRolls*1/36 << "       " << errorPerc(numRolls,totals[10],1) << "%";;
        
        
        cout << "\n\nWould you like to roll some more? (y/n)";
        cin >> answer;
        
    } while (answer == 'y' || answer == 'Y');
        
    return 0;
}
    
    
    

