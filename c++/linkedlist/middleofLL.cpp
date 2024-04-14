#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void InsertionatheadLL(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head = new_node;
}


//this is based on fast and slow pointer approach
int MiddleofLL(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(slow->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}


int main(){
    Node* head = NULL;
    InsertionatheadLL(head,1);
    InsertionatheadLL(head,2);
    InsertionatheadLL(head,3);
    InsertionatheadLL(head,4);
    InsertionatheadLL(head,5);
    InsertionatheadLL(head,6);
    InsertionatheadLL(head,7);

    cout<<MiddleofLL(head);
    return 0;
}