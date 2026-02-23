#include<iostream>
using namespace std;
int main(){

     int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};

        cout<<matrix<<"="<<&matrix[0][0]<<endl;
          cout<<matrix + 1<<"="<<&matrix[1][0]<<endl;
    return 0;
}