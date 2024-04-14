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

void DisplayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp= temp->next ; 
    }
    cout<<"NULL"<<endl;
}

void LengthofLL(Node* head){
    Node* temp = head;
    int size=0;
    
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    cout<<size<<endl;
    return;
}


int main(){
    Node* head = NULL;
    InsertionatheadLL(head,1);
    InsertionatheadLL(head,2);
    InsertionatheadLL(head,3);
    DisplayLL(head);
    LengthofLL(head);



    return 0;
}