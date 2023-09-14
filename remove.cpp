#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int>::iterator it;
    
    it=v1.begin()+2;
    v1.erase(it);
    for(int i=0;i<v1.size();i++)
      cout<<v1[i]<<" ";
    return 0;
}