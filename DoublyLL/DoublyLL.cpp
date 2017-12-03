/* 
 * File:   DoublyLL.cpp
 * Author: johnvecchio
 *
 * Created on April 23, 2012, 2:26 PM
 */

#include <iostream>
#include <string>
using namespace std;

char dir;

// define a node for storage and linking
class node{  
public:
    string name; 
    node *next;
    node *prev;
};

class linkedList{
public:
    linkedList():top(NULL){}	
    bool empty(){return top == NULL;}	
    node *getTop(){return top;}	
    void setTop(node *n){top = n;}	
    void add(string);	
    int menu();	
    void remove(string);	
    ~linkedList();
    void reversePrint();
    friend ostream& operator << (ostream&, const linkedList&); // default output is in-order print.
private:
    node *top;
    node *end; // to be used for reverse print and implemented by students
};

int main(){
    linkedList l;
    cout << l.empty() << endl;
    int option = 0;
    string s;
    bool go = true;
    while(go){
        option = l.menu();
	switch(option){
            case 1: cout << "enter a name: ";cin >> s; l.add(s); break;
            case 2: cout << "enter name to be deleted: "; cin >> s; l.remove(s);break;
            case 3: 
                dir = 'f';
                cout << l; break;
            case 4: 
                dir = 'r';
                cout << l; break;
            case 5: cout << "exiting" << endl; go = false; break;
        }
    }
   // l goes out of scope and calls ~linkedList()
}

// can not call this method "delete" - "delete" is a reserved keyword.
void linkedList::remove(string s){
    bool found = false;
    node *curr = getTop();
    
    while(curr != NULL){
        // match found, delete
        if(curr->name == s){
            found = true;		
            
            // found at top
            if(curr->prev == NULL){
                node *temp = top; //sets found node to temp so you can find second
                setTop(curr->next); //sets next node to the head
                top->prev = NULL;
                delete(temp); 
                
            // found in list - not top
            }else if (curr->next != NULL){
                curr->next->prev = curr->prev; //makes the prev point to the node after n
                curr->prev->next = curr->next;
                delete(curr);
            } else {
                end = curr->prev;
                curr->prev->next = NULL;
                delete(curr);
            }
        }
        
        // not found, advance pointers for the loop
        if(!found){
            curr = curr->next;
        }
        // found, exit loop
        else curr = NULL;
    }
    
    if(found)
        cout << "Deleted " << s << endl;
    else 
        cout << s << " Not Found "<< endl;
}

void linkedList::add(string s){
    node *n = new node();
    //set up const later on
    n->name = s;
    n->next = NULL;
    n->prev = NULL;
    
    // take care of empty list case
    if(empty()){
        top = n; // 1st node now is n
        end = n;
        
    // take care of node belongs at beginning case
    } else if(top->name > s){
        top->prev = n;
        n->next = top; //sets n's pointer to the 1st node
        setTop(n); //makes n first node pushing next to the second
        return;
    
    // take care of inorder and end insert
    }else{
        // insert in order case
        node *curr = getTop(), *prev = curr;
        
        
        while(curr != NULL){
            if(curr->name > s)break;
            prev = curr; // use this so you can reset the node before to n when found
            curr = curr->next;
        }
        if(curr != NULL){ // search found insert point
            n->prev = curr->prev; //n's prev now =s currs prev
            n->prev->next = n; //sets sets node befores next to n
            curr->prev = n; //currs new prev = n
            n->next = curr; //sets n's next node to curr
        }
        
        // take care of end of list insertion
        else if(curr == NULL){// search did not find insert point
            end->next = n; //just reset the prevs ptr. n's is already null
            n->prev = end;
            end = n;
        }
    }
}

ostream& operator << (ostream& os, const linkedList& ll){
    //linkedList x = ll; // put this in and the code blows up - why?
    if (dir == 'f'){
        node *n = ll.top;
        if(n == NULL)cout << "List is empty." << endl;
        else
            while(n != NULL){
                os << n->name << endl;
                n = n->next;
            }
    } else {
        node *n = ll.end;
        if(n == NULL)cout << "List is empty." << endl;
        else
            while(n != NULL){
                os << n->name << endl;
                n = n->prev;
            }
        
    }
    
    return os;
}

// return memory to heap
linkedList::~linkedList(){
    cout << "~linkedList called." << endl;
    node *curr = getTop(), *del;
    
    while(curr != NULL){
        del = curr;
        curr = curr->next;
        delete(del);
    }
}

int linkedList::menu(){
    int choice = 0;
    while(choice < 1 || choice > 5){
        cout << "\nEnter your choice" << endl;
        cout << " 1. Add a name." << endl;
        cout << " 2. Delete a name." << endl;
        cout << " 3. Show list." << endl;
        cout << " 4. Show reverse list. " << endl; // to be implemented by students
        cout << " 5. EXIT " << endl;
        cin >> choice;
    }
    return choice;
}

