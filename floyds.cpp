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

node* floyds(node* head){

if(head == NULL){
    return NULL;
}
node* slow = head;
node* fast = head;

while(slow != NULL && fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
    fast = fast -> next;

    }
   slow = slow -> next;
    if(slow == fast){
        return slow;
    }
    
}
return NULL;

}

node* startNode(node* head){

node* newOne = floyds(head);


}