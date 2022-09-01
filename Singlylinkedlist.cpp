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
void insert(node* &tail, int data){
node* temp = new node(data);
tail -> next = temp;
temp = tail;
}

// middle
void middle(node* head, int position, int data){
    node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }
    node* newNode = new node(data);
    newNode -> next = temp -> next;
   temp -> next = newNode;

}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }cout << endl;
}


int main(){
   node* head = new node(10);
  insert(head, 14);
  middle(head,2,9);
   print(head);


    return 0;
}