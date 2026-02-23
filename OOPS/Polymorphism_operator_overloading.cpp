#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;

    public:
    Complex(int r , int i){
        real=r;
        img=i;
    }
    void showNum(){
        cout<<real<<"+"<<img<<"i\n";
    }
// operator overloading 
    void operator +(Complex &c2){
        int resReal=this->real + c2.real;
        int resImg=this->img + c2.img;
        Complex c3(resReal, resImg);
        c3.showNum();
    }

};
int main(){
    Complex c1(3,4);
    Complex c2(1,1);

    c1.showNum();
    c2.showNum();
    c1+c2;

    
    return 0;
}