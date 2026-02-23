#include<iostream>
using namespace std;


int sumNnumber(int n){
    if(n==1){
        return 1;
    }
    return n+sumNnumber(n-1);
}

int main(){
int ans = sumNnumber(5);
cout<<ans<<endl;
    
    return 0;
}