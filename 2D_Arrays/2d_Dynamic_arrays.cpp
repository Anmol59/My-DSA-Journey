#include<iostream>
using namespace std;

int main(){
int rows;
cout<<"enter rows: ";
cin>>rows;
int cols;
cout<<"enter cols : ";
cin>>cols;

int* *matrix =new int*[rows]; //pointers of array 
for(int i=0;i<rows;i++){
    matrix[i]=new int[cols];
}
//data store
int x=1;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        matrix[i][j]=x++;
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
    
    return 0;
}