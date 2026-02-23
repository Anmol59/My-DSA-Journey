#include<iostream>
#include<vector>
using namespace std;
int FO(vector<int> arr, int i, int target){
    if(i==arr.size()){
        return false;
    }
    
    if(arr[i]==target){
        return i;
    }
    return FO(arr, i+1, target);
    
}
int main(){

    vector<int> arr1={1,2,3,3,3,4};
    cout<<FO(arr1,0,3)<<endl;

    return 0;
}