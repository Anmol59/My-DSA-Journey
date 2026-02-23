#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show..\n";
    }
    virtual void  hello(){
        cout<<"Parent hello";
    }

};
class Child:public Parent{
    public:
    void show(){
        cout<<"child class show..\n";
    }
    void hello(){
         cout<<"Child hello";

    }
};
int main(){
    Child ch1;
    Parent *ptr;
    ptr= &ch1;//run time binding 
    ptr->hello(); //virtual functions 
    

    
    return 0;
}