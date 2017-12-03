/* 
 * File:   BinarySearch.cpp
 * Author: johnvecchio
 * 
 * Netbeans 7.1
 * This program Templates a Binary search function
 * and proves it works with more than 1 type
 *
 * Created on April 10, 2012, 6:56 PM
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//This binary search function can be used for all types considering its of type T
template <class ForwardIterator, class T>
bool binarySearch ( ForwardIterator first, ForwardIterator last, const T& value ) {
    
    first = lower_bound(first,last,value);
    return (first!=last && !(value<*first));
}

int main() {
    int myInts[] = {1,2,3,4,5,13,21,32,55};
    vector<int> v(myInts,myInts+9);                
    
    //sorting the array
    sort(v.begin(), v.end());
    
    cout << "Contents of this Array" << endl;
    for (int i = 0;i < 9;i++){
        cout << myInts[i] << " ";
    }
    cout << endl << endl;
    
    
    //searching for individual numbers in the vector
    if (binarySearch (v.begin(), v.end(), 55))
        cout << "55 is in the array" << endl; 
    else 
        cout << "55 was not found" << endl;
       
    if (binarySearch (v.begin(), v.end(), 100))
        cout << "100 is in the array" << endl; 
    else 
        cout << "100 was not found" << endl;
    
    if (binarySearch (v.begin(), v.end(), 13))
        cout << "13 is in the array" << endl; 
    else 
        cout << "13 was not found" << endl << endl;
    
    
    string myStrings[] = {"head","knees","shoulders","toes"};
    vector<string> v2(myStrings,myStrings+4);  
    
    
    cout << endl << "Contents of this Array" << endl;
    for (int i = 0;i < 4;i++){
        cout << myStrings[i] << " ";
    }
    cout << endl << endl;
    
    if (binarySearch (v2.begin(), v2.end(), "head"))
        cout << "head is in the array" << endl; 
    else 
        cout << "head was not found" << endl;
    
    if (binarySearch (v2.begin(), v2.end(), "tongue"))
        cout << "tongue is in the array" << endl; 
    else 
        cout << "tongue was not found" << endl;
    
    return 0;
}

