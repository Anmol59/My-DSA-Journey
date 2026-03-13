#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int> deq;
    public:
    void push(int data){
        deq.push_back(data);
        // deq.push_front(data);
    }

    void pop(){
    //     deq.pop_front();
        deq.pop_back();
    }
    int front(){
        // return deq.front();
        return deq.back();
    }
    bool empty(){
        return deq.empty();
    }
    void printStack(){ 
        for(int i = deq.size() - 1; i >= 0; i--){   /// for back 
            cout<<deq[i]<<" ";
        }
        cout<<endl;


    //     for(int i = 0; i < deq.size(); i++){    for front 
    //         cout<<deq[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    }
     


};
int main(){
    Stack s;
    s.push(3);
     s.push(2);
      s.push(1);

      s.printStack();

    
    return 0;
}