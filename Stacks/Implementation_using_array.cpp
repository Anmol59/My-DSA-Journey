#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
public:

//COnstructor
    Stack(int s){
        size=s;
        top=-1;
        arr= new int[s];
    }
        void push(int val){
            if(top == size-1){
                cout<<"stack is overflow";
            }else{top++;
                arr[top]=val;
                cout<<val<<"\n";

            }
        }

        void pop(){
            if(top ==-1){
                cout<<"Stack is underflow";
                return ;
            }else{
                cout<<"POPPED"<<arr[top]<<"from the stack\n";
                top--;
            }
        }

        int getTop(){
            if(top ==-1){
                cout<<"Stack is empty";
                return -1 ;
            }else{
                return arr[top];
            }
        }

        //isEMpty
        bool isEmpty(){
            return top== -1;
        }

        //isSIze
        int isSize(){
            return top+1;

        }

    };

int main(){
    Stack s(5);
    s.push(4);
    s.push(3);
    s.push(2);

    // s.pop();

    cout<<s.getTop()<<endl;
    cout<<s.isSize()<<endl;
    cout<<s.isEmpty()<<endl;

    
    return 0;
}