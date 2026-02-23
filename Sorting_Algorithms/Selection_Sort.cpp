#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx= i;
        for(int j =i+1;j<n;j++){
           if(arr[j]<arr[minidx]) {
            minidx=j; 
            }
        }
        swap(arr[i],arr[minidx]);
    }
    print(arr,n);
    

}
int main()
{

    int arr[6]={2,4,5,9,1};
    Selection_sort(arr,6);


    return 0;
}