#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={1,3,2,5,4};
    int n=v1.size();
    int flag=0;
    sort(v1.begin(),v1.end());
    // for(int r=1;r<n;r++)
    // {
    //     for(int i=0;i<n-r;i++)
    //     {
    //         if(v1[i]>v1[i+1])
    //         {
    //             int temp;
    //             temp=v1[i];
    //             v1[i]=v1[i+1];
    //             v1[i+1]=temp;
    //         }
    //     }
    // }
    for(int i=0;i<n;i++)
      cout<<v1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        if(v1[i+1]!=v1[i]+1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
      cout<<"false";
    if(flag==0)
      cout<<"true";  


}