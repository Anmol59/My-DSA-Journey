#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void print(vector <int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";

    }
    cout<<endl;
}
void maxAreaHistogram(vector <int> height){
    int n=height.size();
    vector<int>nsl(n);
     vector<int>nsr(n);
     stack<int> s;


     //next smaller left
     nsl[0]=-1;
     s.push(0);

     for(int i=1;i<height.size();i++){
        int curr = height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i]=-1;
        }else{
            nsl[i]=s.top();
        }
            s.push(i);

     }
     while(!s.empty()){
        s.pop();
     }
     print(nsl);

      //next smaller right
      
      s.push(n-1);
      nsr[n-1]=n;
      for(int i=n-2;i>=0;i--){
        int curr=height[i];
         while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i]=n; //
        }else{
            nsr[i]=s.top();
        }
            s.push(i);

      }
      print(nsr);

      int maxArea=0;
      for(int i=0;i<height.size();i++){
        int ht= height[i];
        int width= nsr[i]-nsl[i]-1;
        int area = ht*width;

        maxArea= max(area,maxArea);

      }
      cout<<"max Area of histogram:"<<maxArea<<endl;


}
int main(){
    vector<int>vec ={2,1,5,6,2,3};
    maxAreaHistogram(vec);

    
    return 0;
}