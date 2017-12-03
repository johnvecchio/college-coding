/* 
 * File:   STLsort.cpp
 * Author: johnvecchio
 * Netbeans 7.1 CIT 245
 * 
 * This program implements the STL sort
 *
 * Created on February 13, 2012, 10:38 AM
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arraySort[20];
    int arrayCount[20];
  
    char answer;
    
    cout << "This program generates 20 random numbers and sorts them\n";
    
    do{
        //clearing both arrays
        for (int x=0; x<20; x++) {
                arrayCount[x]=0;
                arraySort[x]=0;
         }
        
        // filling the array and outputting it
        cout << "\nBefore sort ";
        for (int i=0; i<20; i++){
            arraySort[i] = (int)(rand()%10)+1;
            cout << arraySort[i] << " ";
        }
        
        //sorting the array via STL and output
        sort(arraySort, arraySort+20);
        cout << "\nAfter sort ";
        for (int j=0; j<20; j++) {
            cout << arraySort[j] << " ";
        }
        
        //filling the counts array
        for (int k=0; k<20; k++) {
            //count for each # in array
            switch (arraySort[k]){
                case 1:
                    arrayCount[0]++;
                    break;
                case 2:
                    arrayCount[1]++;
                    break;
                case 3:
                    arrayCount[2]++;
                    break;
                case 4:
                    arrayCount[3]++;
                    break;
                case 5:
                    arrayCount[4]++;
                    break;
                case 6:
                    arrayCount[5]++;
                    break;
                case 7:
                    arrayCount[6]++;
                    break;
                case 8:
                    arrayCount[7]++;
                    break;
                case 9:
                    arrayCount[8]++;
                    break;
                case 10:
                    arrayCount[9]++;
                    break;       
            }
        }
        
        for (int x=0; x<10; x++) {
            cout << "\nNumber of " << (x+1) << "'s " << arrayCount[x];
        }
        
        cout << "\n\nTry again? (y/n)";
        cin >> answer;
        
    } while (answer == 'y' || answer == 'Y');
    
    
    return 0;
}
