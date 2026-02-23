#include<iostream>
#include<vector>
using namespace std;

void merge_combine(int arr[], int si,int mid, int ei){ //O(n) tc
    vector<int>temp;
    int i=si;
   int  j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    //vector -> original array
    int x=0;
    for(int idx=si; idx<=ei; idx++){
        
        arr[idx]=temp[x++];
    }
}





void mergeSort(int arr[],int si,int ei){ //O(log n) tc
    if(si>=ei){
        return;
    }
    int mid = si+(ei-si)/2;   //(si+ei)/2
     
    mergeSort(arr, si,mid);//left
    mergeSort(arr,mid+1,ei);//right

    merge_combine(arr,si,mid,ei); //conquer
}
 




void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    mergeSort(arr,0,n-1);
    printArray(arr,n);   
    return 0;
}