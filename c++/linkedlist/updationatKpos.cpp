#include<bits/stdc++.h>
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

void InsertingatheadLL(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void DisplayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp= temp->next;
    }cout<<"NULL"<<endl;
}


//time complexity -> 0(k) , k = postion of node which we have to update
void UpdationatK(Node* &head,int k,int data){
    Node* temp = head;
    while(k--){
        temp=temp->next;
    }
    temp->val = data;
}



int main(){
    Node* head = NULL;
    InsertingatheadLL(head,1);
    InsertingatheadLL(head,2);
    InsertingatheadLL(head,3);
    InsertingatheadLL(head,4);
    cout<<"Before updating k-th position LL -> "<<endl;
    DisplayLL(head);

    cout<<"After updating k-th position LL -> "<<endl;
    UpdationatK(head,3,5);
    DisplayLL(head);

    return 0;
}