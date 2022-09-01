#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
   
   // constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

bool detectLoop(node* head){
map<node*, int> mp;

node* temp = head;
while(temp -> next != NULL){
    if(mp[temp] == true){
        return true;
    }
    
    mp[temp] = true;
    temp = temp -> next;
}

return false;
}

