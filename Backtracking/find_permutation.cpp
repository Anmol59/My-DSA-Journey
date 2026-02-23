#include<iostream>
#include<string>
using namespace std;

void printPermutation(string str,string ans){
    int n = str.size();
    if(n==0){
        cout<<ans<<"\n";
        return;
    }

    for(int i=0;i<str.size();i++){
       char ch= str[i];
       string NewStr=str.substr(0,i)+str.substr(i+1,n-i-1);
        printPermutation(NewStr,ans+ch);
    }
}

int main(){

    string str ="abc";
    string ans =" ";
    printPermutation(str,ans);

    
    return 0;
}