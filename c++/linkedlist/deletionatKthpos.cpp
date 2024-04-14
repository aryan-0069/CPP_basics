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

void DeletionatK(Node* &head,int pos){
    if(pos == 0){
        Deletionathead(head);
        return;
    }   
    Node* previousnode = head;
    pos--;
    while(pos--){
        previousnode=previousnode->next;
    }
    Node* temp = previousnode->next;
    previousnode->next=previousnode->next->next;
    free(temp);    
}


int main(){
    Node* head = NULL;
    InsertionatheadLL(head,1);
    InsertionatheadLL(head,2);
    InsertionatheadLL(head,3);
    InsertionatheadLL(head,4);
    InsertionatheadLL(head,5);
    cout<<"BEFORE -> "<<endl;
    DisplayLL(head);

    cout<<"AFTER ->"<<endl;
    DeletionatK(head,2);
    DisplayLL(head);



    return 0;
}