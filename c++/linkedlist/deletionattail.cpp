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


//time complexity ->0(n)
void DeletionatTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last=second_last->next;
    }

    Node* temp = second_last->next;
    second_last->next=NULL;
    free(temp);
}


int main(){
    Node* head = NULL;
    InsertionatheadLL(head,1);
    InsertionatheadLL(head,2);
    InsertionatheadLL(head,3);
    cout<<"BEFORE -> "<<endl;
    DisplayLL(head);

    cout<<"AFTER ->"<<endl;
    DeletionatTail(head);
    DisplayLL(head);



    return 0;
}