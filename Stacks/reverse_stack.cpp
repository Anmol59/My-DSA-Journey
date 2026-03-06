#include<iostream>
#include<stack>

using namespace std;

void pushatbottom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int temp=s.top();
    s.pop();
    pushatbottom(s,value);
    s.push(temp);

}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    pushatbottom(s,temp);
    
}

void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}
int main(){

    stack<int>s;
    s.push(3);
      s.push(2);
        s.push(1);

        printStack(s);
        reverse(s);

        printStack(s);


    
    return 0;
}