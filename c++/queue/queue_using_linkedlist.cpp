#include <bits/stdc++.h>
using namespace std;

class Node { 
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->size = 0;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            //LL is empty
            this->head = this->tail = newNode;
        }
        else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head ==NULL){
            //LL is empty
            return;
        }
        else{
            Node* oldHead = this->head;
            Node* newHead = this->head->next;
            this->head = newHead;
            oldHead->next = NULL;
            delete oldHead;
        }
    }
};

int main(){
    
    return 0;
}