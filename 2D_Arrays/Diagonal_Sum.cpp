#include<iostream>
using namespace std;

int diagonalSum(int matrix[][4],int n,int m ){
    int sum=0;
    // for(int i=0;i<n;i++){ //rows
    //     for(int j=0;j<m;j++){ //cols
    //         if(i==j){
    //             sum+=matrix[i][j];
    //         }else if(j==n-i-1){
    //             sum+=matrix[i][j];
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        sum+=matrix[i][i]; //rows
        if(i != n-i-1){
            sum+=matrix[i][n-i-1]; //cols
        }
    }
    cout<<"Sum="<<sum<<endl;
    return sum;

}

int main(){
    
    int matrix[4][4]={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};

    diagonalSum(matrix,4,4);                
    return 0;
}