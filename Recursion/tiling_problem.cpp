#include<iostream>
using namespace std;
int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }
    //vertical
    //tilingProblem(n-1);

    //horizontal
    //tilingProblem(n-2);

    return tilingProblem(n-1)+ tilingProblem(n-2);
}
int main(){
    cout<<tilingProblem(5)<<endl;

    
    return 0;
}