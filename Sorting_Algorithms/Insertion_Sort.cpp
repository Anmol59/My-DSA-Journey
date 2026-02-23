#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Insertion_Sort(int arr[],int n){
    for(int i=1;i<n;i++){
       int  curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
int main(){

    int arr[6]={2,6,5,9,0,4};
    Insertion_Sort(arr,6);
    

    
    return 0;
}