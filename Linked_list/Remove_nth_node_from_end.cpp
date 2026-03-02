#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    
    Node(int val){
        data=val;
        next=NULL;
    }

};

class List{
     public:
    Node* head;
    Node* tail;
   
    List( ){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head ==NULL){
            head =tail = newNode;
        }else{
            newNode->next=head;
            head= newNode;
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head ==NULL){
            head =tail =newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void insert(int val,int pos){
        Node* newNode = new Node(val);

        Node* temp =head;
        for(int i=0;i<pos -1;i++){
            if(temp==NULL){
                cout<<"Position is invalid\n";
                return;
            }
            temp=temp->next;
        }newNode->next=temp->next;
        temp->next=newNode;

    }
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty";
            return;
        }
        Node* temp=head;
        head =head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp= head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }
    int searchItr(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp =temp->next;
            idx++;
            
        }
        return -1;
        
    }
int helper(Node* temp,int key){
    if(temp == NULL ){
        return -1;
    }


    if(temp->data==key){
        return 0;
    }
     int idx=helper(temp->next,key);

     if(idx==-1){
        return -1;
     }
     return idx+1;
}
    int searchRec(int key ){
      return  helper(head,key);

    }

    void reverse(){
        Node* prev=NULL;
        Node* curr =head;

        while(curr!=NULL){
             Node* next= curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
        }
        head=prev;
    }

    //find and remove from last Nth node
    int getsize(){
        Node* temp=head;
        int sz=0;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }

    void removeNth(int n ){
        Node* prev=head;
        int size=getsize();

        for(int i=0;i<(size-n);i++){
            prev=prev->next;
        }
        Node* toDel=prev->next;
        cout<<"going to delete="<<toDel->data<<endl;
        prev->next=prev->next->next;
    }


};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);

   
    // ll.pop_back();

    ll.printLL();
    // cout<<ll.searchRec(3)<<endl;
    // ll.reverse();
    ll.removeNth(2);
    ll.printLL();
    
    return 0;
}