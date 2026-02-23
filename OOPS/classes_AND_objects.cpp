#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    public:
    float cgpa;

    void getPercentage(){
        cout<<(cgpa*10)<<"% \n";
    }
};
int main(){
    Student s1;
    s1.cgpa=9.1;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();

    
    return 0;
}