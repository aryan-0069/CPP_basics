#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

//time complexity -> 0(1)
void Insertathead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head = NULL;
    Insertathead(head,1);
    displayLL(head);
    Insertathead(head,2);
    displayLL(head);
    Insertathead(head,3);
    displayLL(head);

    return 0;
}
