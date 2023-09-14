#include<iostream>
#include<list>
using namespace std;

int main()
{
    // Declaration of list
    list<int> l1{1,2,3,5,34,19};
    for(int x:l1){
          cout<<x<<" ";
    }

}