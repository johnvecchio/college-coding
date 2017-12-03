/* 
 * File:   GamePlayers.cpp
 * Author: johnvecchio
 * Netbean 7.1
 * CIT - 245
 * 
 * This program creates 3 players
 *
 * Created on February 14, 2012, 11:01 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class Player {
    //Player class
public:
    void setName(string pName);
    string getName();
    void setPassword(string pPassword);
    string getPassword();
    void setXP(int pXP);
    int getXP();
    void setLoc(int px, int py);
    int getX();
    int getY();
    void setInv(string item1, string item2, string item3, string item4);
    string *getInv();
    void display();
private:
    string name;
    string password;
    int xp; 
    int x;
    int y;
    string inventory[4];    
}; //end player class

int main() {
    // three player objects
    Player player1, player2, player3;
    
    //setting all the data
    player1.setName("John");
    player1.setPassword("vec123");
    player1.setXP(1000);
    player1.setLoc(25,35);
    player1.setInv("Sword", "Shield", "Staff", "Bow");
    
    player2.setName("Jeff");
    player2.setPassword("sot123");
    player2.setXP(999);
    player2.setLoc(50,55);
    player2.setInv("Knife", "Bag", "Cape", "Rope");
    
    player3.setName("David");
    player3.setPassword("var123");
    player3.setXP(998);
    player3.setLoc(1,10);
    player3.setInv("Club", "Shield", "Armor", "Water");
    
    player1.display();
    player2.display();
    player3.display();
    
    return 0;
} // end main class



// all of the mutators
void Player::setName(string pName){
    name = pName;
}

string Player::getName(){
    return name;
}

void Player::setPassword(string pPassword){
    password = pPassword;
}

string Player::getPassword(){
    return password;
}

void Player::setXP(int pXP){
    xp = pXP;
}

int Player::getXP(){
    return xp;
}

void Player::setLoc(int px, int py){
    x = px;
    y = py;
}

int Player::getX(){
    return x;
}

int Player::getY(){
    return y;
}

void Player::setInv(string item1, string item2, string item3, string item4){
    inventory[0] = item1;
    inventory[1] = item2;
    inventory[2] = item3;
    inventory[3] = item4;
}

string* Player::getInv(){
    return inventory;
}

void Player::display(){
    cout << "Player information";
    cout << "\nName: " << getName();
    cout << "\nPassword: " << getPassword();
    cout << "\nExperience: " << getXP();
    cout << "\nLocation: " << getX() << ", " << getY();
    
    // problem area ////////////////////////////////////
    cout << "\nInventory: \n  " <<  *getInv() << "\n  " 
            << *(getInv()+1) << "\n  "
            << *(getInv()+2) << "\n  "
            << *(getInv()+3);
    cout << "\n\n";
}
