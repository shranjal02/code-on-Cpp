#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

node *reverse(node *&head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* newNode = reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return newNode;
}

bool isPalin(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    node *slow = head;
    node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;
    node *dummy = head;

    while (slow != NULL)
    {
        if (dummy->data != slow->data)
        {
            return false;
        }
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}

int main()
{
    node *head = new node(1);
    insert(head, 2);
    insert(head, 1);
    isPalin(head) ? cout << "true" : cout << "false";
    return 0;
}
