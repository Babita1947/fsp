#include<iostream>
using namespace std;

int main()
{
    int num,range;
    cout<<"Enter number and range :";
    cin>>num>>range;
    for(int i=1;i<=range;i++)
    {
        int ans;
        ans=num*i;
        cout<<num<<"x"<<i<<" = "<<ans<<endl;
    }
    return 0;
}