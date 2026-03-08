#include <iostream>
using namespace std;
int main()
{
 int a ,b, c,d,e,f,g,h,choice,p;
 cout<<"enter the number  for 'a' digital gate operation  either (0|1)"<<endl;
 cin>>a;
 cout<<"enter the number  for 'b' digital gate operation  either (0|1)"<<endl;
 cin>>b;
 cout<<"choose the gate:\n 1.AND gate \n 2.OR gate \n 3.NOT gate \n 4.XOR gate \n 5.NOR gate \n 6.NAND gate"<<endl;
 cin>>choice;
  switch(choice)
  {
    case 1: cout<<"1. AND gate"<<endl;
       c= a&b;
       cout<<"output is ="<<c<<endl;
     break;

     case 2 :cout<<"2. OR gate "<<endl;
         d= a|b;
         cout<<"output is ="<<d<<endl;
         break;
         
    case 3: cout<<"3.NOT gate"<<endl;
         e=!a;
         p=!b;
         cout<<"output for a ="<<e<<endl;
         cout<<"output for b ="<<p<<endl;
         break;

    case 4: cout<<"4.XOR gate"<<endl;
         f= a^b;
         cout<<"output is ="<<f<<endl;
         break; 

    case 5: cout<<"5.NOR gate"<<endl;
          g=!(a|b);
          cout<<"output is ="<<g<<endl;
          break;

    case 6: cout<<"6.NAND gate"<<endl;
          h=!(a&b);
          cout<<"output is="<<h<<endl;
          break;
         
  }
return 0;
}