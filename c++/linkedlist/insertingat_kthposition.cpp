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

void InsertatheadLL(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void InsertatKthpos(Node* &head,int val,int pos){
    if(pos==0){
        InsertatheadLL(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head; 
    int current_pos=0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void DisplayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next; 
    }cout<<"NULL"<<endl;
}


int main(){
    Node* head = NULL;
    InsertatheadLL(head,1);
    DisplayLL(head);
    InsertatheadLL(head,2);
    DisplayLL(head);
    InsertatheadLL(head,3);
    DisplayLL(head);

    InsertatKthpos(head,4,0);
    DisplayLL(head);
    return 0;
}