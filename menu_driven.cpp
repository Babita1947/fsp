#include<iostream>
using namespace std;
int add(int a,int b);
int sub(int a,int b);
int main()
{
   int x,y,option;
   cout<<"1. Addition\n";
   cout<<"2. Substraction\n";
   cout<<"3. Exit\n\n";
   cout<<"Enter your choice :";
   cin>>option;
   
   switch(option)
   {
    case 1:
       cout<<"Enter two numbers : ";
       cin>>x>>y; 
       cout<<"Addition = "<<add(x,y);
       break;
    case 2:
       cout<<"Enter two numbers : ";
       cin>>x>>y;
       cout<<"Substraction = "<<sub(x,y);
       break;
    case 3:
       exit(0);      
   } 

   return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}