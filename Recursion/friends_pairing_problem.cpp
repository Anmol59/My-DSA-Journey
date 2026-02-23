#include<iostream>
using namespace std;
int friends_pair_Problem(int n){
    if(n==1 || n==2){
        return n;
    }
//     //single
//    int single= friends_pair_Problem(n-1);

//    //pair
//    int pair=(n-1)*  friends_pair_Problem(n-2);

   return friends_pair_Problem(n-1) + (n-1)*friends_pair_Problem(n-2);
}
int main(){
    cout<<friends_pair_Problem(5)<<endl;

    
    return 0;
}