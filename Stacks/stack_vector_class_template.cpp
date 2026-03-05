#include<iostream>
#include<vector>
#include<string>
using namespace std;

//implementation of stack using vector
template<class T>// THIS IS FOR CREATE A DATA TYPE VARIABLE 
class Stack{
    vector<T>vec;
    public:
     void push(T val){ //o(1)
        vec.push_back(val);
    }

    void pop(){//o(1)
        if(isEmpty()){
            cout<<"stack is empty\n";
            return;     
        }
        vec.pop_back();
    }

    T top(){//o(1)
         if(isEmpty()){
            cout<<"stack is empty\n";
            return T();     //return type T use only when string datatype use
        }
        int lastIndex= vec.size()-1;
        return vec[lastIndex];
    }

    bool isEmpty(){
         return vec.size()==0;
    }

};



int main(){
    Stack <string>s;
    s.push("wala");
    s.push("moose");
    s.push("sidhu");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;

    
    return 0;
}