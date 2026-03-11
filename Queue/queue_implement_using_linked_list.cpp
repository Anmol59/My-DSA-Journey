#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }
};

class Queue{
    Node* head;
    Node* tail; 
    public:
    Queue(){
        head=tail=NULL;
    }

    void push(int data){
        Node* newNode= new Node(data);
        if(head ==NULL){
            head=tail = newNode;
            
        }else{
            tail->next=newNode;
            tail=newNode;   
        }


    }


    void pop(){
        if(empty()){
            cout<<"queue is empty\n";
            return;
        }
        Node* temp= head;
        head=head->next;
        delete temp; 

    }


    int front(){
        if(empty()){
            cout<<"queue is empty\n";
            return -1;
        }
        return head->data;

    }

    bool empty(){
         return head==NULL;

    }

    void printQueue(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.printQueue();


    q.pop();
     q.printQueue();


    q.front();
    
     q.printQueue();


    
    return 0;
}