#include<iostream>
using namespace std;

int main()
{
    int option,freq;
    int x,total,ans1,ans2,ans3;
    cout<<"1. Laptop Rs. 55,000\n";
    cout<<"2. Ceiling Fan Rs. 5,500\n";
    cout<<"3. iPhone Rs. 35,000\n";
    cout<<"4. Exit\n\n";
    
    cout<<"Do you want to continue or not : ";
    cin>>x;
    
    while(x)
    {
       cout<<"Enter your choice : ";
       cin>>option;

    
        switch(option)
        {
            case 1: 
               
               cout<<"Enter number of laptops required : ";
               cin>>freq;
               ans1=55000*freq;
               cout<<"Laptop total price = "<<ans1<<endl<<endl;
               
               
            case 2:
               
               cout<<"Enter number of fans required : ";
               cin>>freq;
               ans2=5500*freq;
               cout<<"Fan total price = "<<ans2<<endl<<endl;
               
            case 3:
               
               cout<<"Enter number of iphones required : ";
               cin>>freq;
               ans3=35000*freq;
               cout<<"iPhone total price = "<<ans3<<endl<<endl;      
               break;
            case 4:
                exit(0);   
        }
        total=ans1+ans2+ans3;
        cout<<"-------------------Total Bill = "<<total<<"-------------------";
        break;
        
    }
    
    
    return 0;
}