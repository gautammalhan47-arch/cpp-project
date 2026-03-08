#include<iostream>
using namespace std;
int main()
{
    float v ,i ,r,p;
    int choice;
    cout<<"choose the folowing parameter to be calculated :\n 1. VOLTAGE\n 2. CURRENT\n 3. RESISTANCE\n 4. POWER\n"; 
    cin>>choice;
    switch(choice)
    {
      case 1: cout<<"enter the current :"<<endl; 
              cin>>i;
              cout<<"enter the resistance:"<<endl;
              cin>>r;
              v=i*r;
              cout<<"the voltage is:"<<v<<endl;   
             break;
    
     case 2: cout<<"enter the voltage :"<<endl;
             cin>>v;
             cout<<"enter the resistance:"<<endl;
             cin>>r;
             i= v/r;
             cout<<"the current is:"<<endl;
             break;
        
     case 3: cout<<"enter the current :"<<endl;
             cin>>i;
             cout<<"enter the voltage :"<<endl;
             cin>>v;
             r=v/i;
             cout<<"the rsistance value is:"<<endl;
             break;
            
     case 4: cout<<"enter the voltage :"<<endl;
             cin>>v;
             cout<<"enter the current :"<<endl;
             cin>>i;
             p=v*i;
             cout<<"the power is:"<<p<<endl;
             break;
     default:cout<<"invalid choice"<<endl;        
    } 
}