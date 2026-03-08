#include <iostream>
using namespace std;
 string travesrse(string &s)
 {
    int strlength =s.length();
     for(int i=0; i<=strlength;i++)
    {
      cout<<s[i];
    } 
 }
int main()
{
  string s;
  cout<<"enter the string:"<<endl;
  cin>>s;
  travesrse(s);
return 0;
}