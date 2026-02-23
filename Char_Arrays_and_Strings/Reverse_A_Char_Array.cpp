#include<iostream>
#include<cstring>
using namespace std;
   void reverseArray(char word[], int n){
         int st =0,end =n-1;
        while(st<end){
            swap(word[st],word[end]);
            st++;
            end--;
        }
        cout<<word<<endl;
    }
       
    
int main(){

 

    char word[]= "code";
    reverseArray( word, strlen(word));
    
    return 0;
}