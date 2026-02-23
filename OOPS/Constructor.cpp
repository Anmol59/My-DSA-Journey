#include<iostream>
#include<string>
using namespace std;

class car{
    string name;
    string color;

    public:

    car(string nameVal,string colorVal){
        cout<<"constructor is calles.object being created..\n";
        name=nameVal;
        color= colorVal;

    }
    void start(){
        cout<<"car has started \n";
    }
    void stop(){
        cout<<"car has stopped\n";
    }
    //getter 
    string getName(){
        return name;
    }
    string getcolor(){
        return color;
    }
};



int main(){

    car c1("Mercedes G wagon G63","Black");
    cout<<"car name:"<<c1.getName()<<endl;
    cout<<"car color:"<<c1.getcolor()<<endl;
    return 0;
}