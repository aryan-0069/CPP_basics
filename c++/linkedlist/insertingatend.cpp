#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val= data;
        next = NULL;
    }
};

// time complexity -> 0(n)
void InsertatTailLL(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //temp has reached the last node
    temp->next = new_node;
    new_node->next=NULL; //optional as constructor has default next = NULL
}

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void InsertatheadLL(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

int main(){
    Node* head = NULL;
    InsertatheadLL(head,1);
    displayLL(head);
    InsertatheadLL(head,2);
    displayLL(head);
    InsertatheadLL(head,3);
    displayLL(head);

    InsertatTailLL(head,0);
    displayLL(head);
    return 0;
}