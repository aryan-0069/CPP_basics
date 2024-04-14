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

void DisplayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void Insertathead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void reverseLL(Node* &head){
    if(head == NULL){
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* n = head->next;
    
    while(curr!=NULL){
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n!=NULL) n = n->next;
    }
}

int main(){
    Node* head = NULL;
    Insertathead(head,1);
    Insertathead(head,2);
    Insertathead(head,3);
    Insertathead(head,4);
    cout<<"Before reveresing LL ->"<<endl;
    DisplayLL(head);


    cout<<"After reverseing LL ->"<<endl;
    DisplayLL(head);


}