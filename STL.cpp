#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> myVector; // Vector declaration
   
   int size;
   //adding element;
   myVector.push_back(7);
   myVector.push_back(8);
   myVector.push_back(24);
   myVector.push_back(34);
   myVector.push_back(4);
   myVector.push_back(3);
   myVector.pop_back();
   myVector.insert(myVector.begin()+1,10); //insert
   myVector.insert(myVector.end(),50);
   myVector.insert(myVector.end(),4,6);
   //Deleting begin element in vector

   size=myVector.size();
   cout<<"Vector Elements = ";
   for(int i=0;i<size;i++)
       cout<<myVector[i]<<" ";
   cout<<"\nSize of vector = "<<size<<endl;
   
   

    return 0;
}