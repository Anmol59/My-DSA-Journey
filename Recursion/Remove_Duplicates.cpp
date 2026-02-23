#include<iostream>
#include<string>
using namespace std;

void RemoveDuplicates(string str,string ans,int i, int map[26]){
    if(i==str.size()){
        cout<<"ans:"<<ans<<endl;
        return;
    }

    char ch=str[i];
    int mapIndex=(int)(str[i]-'a');
    //duplicate
    if(map[mapIndex]==true){ //duplicates
        RemoveDuplicates(str, ans, i+1, map);

    }
    else{ //not duplicates
        map[mapIndex]=true;
        RemoveDuplicates(str, ans+str[i], i+1, map);
    }



}
int main(){
    string str="aappppnnacollege";
    string ans="";
    int map[26]={false};
    RemoveDuplicates(str,ans,0,map);

    
    return 0;
}