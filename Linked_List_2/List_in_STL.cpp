#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void printLL(const list<int>& ll){
    list<int>::const_iterator itr;
    for(itr = ll.begin(); itr != ll.end(); ++itr){
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
}

int main(){
    list<int> ll;

    ll.push_front(3);
     ll.push_front(2);
      ll.push_front(1);

      ll.push_back(4);
      ll.push_back(5);

      printLL(ll);
      cout<<ll.size()<<endl;
      cout<<"head="<<ll.front()<<"\n";
      cout<<"tail="<<ll.back()<<"\n";

      ll.pop_front();
      ll.pop_back();
      printLL(ll);


     list<int>::iterator itr = ll.begin(); // insert at front inser single element
      ll.insert(itr,14);
        printLL(ll);

         ll.insert(ll.begin(),3,5);  //insert multiple elements
         printLL(ll);


    return 0;
}