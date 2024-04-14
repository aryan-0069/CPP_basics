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

void Deletionathead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return;
}


int main(){
    Node* head = NULL;
    InsertionatheadLL(head,1);
    InsertionatheadLL(head,2);
    InsertionatheadLL(head,3);
    cout<<"BEFORE -> "<<endl;
    DisplayLL(head);

    cout<<"AFTER ->"<<endl;
    Deletionathead(head);
    DisplayLL(head);



    return 0;
}