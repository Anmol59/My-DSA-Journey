#include<iostream>
#include<queue>
using namespace std;

void interLeave(queue<int> &org){
    int n = org.size();
    queue<int> first;

    // Copy first half to first queue
    for(int i = 0; i < n/2; i++){
        first.push(org.front());
        org.pop();
    }
    
    // Interleave by alternating elements from first and second half
    while(!first.empty()){
        org.push(first.front());
        first.pop();
        if(!org.empty()){
            org.push(org.front());
            org.pop();
        }
    }
}

int main(){
    queue<int> org;
    for(int i=1;i<=10;i++){
        org.push(i);
    }
    interLeave(org);

    while(!org.empty()){
        cout << org.front() << " ";
        org.pop();
    }
    cout << endl;

    return 0;
}