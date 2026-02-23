#include<iostream>
using namespace std;

//brute force approach
//  int sortedMatrix(int matrix[][4],int n ,int m,int key){
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(key==matrix[i][j]){
//                 cout<<i<<","<<j<<endl;
//                 break;

//             } 

//             }
//         }
//         return -1;
//     }

    // Approach is used staircase sort for 2d matrix
    int sortedMatrix2(int matrix[][4],int n ,int m,int key){
        int i=0 ,  j= m-1;

        while(i<n && j >= 0){
            if(matrix[i][j]==key){
                cout<<i<<","<<j<<endl;
                break;
            }
            else if(matrix[i][j]>key){ //let
                j--;
            }else{
                i++; //down
            }
            
        }
        return -1;
    }


    
 
int main(){

    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
                      sortedMatrix2(matrix,4,4,30);

    return 0;
}