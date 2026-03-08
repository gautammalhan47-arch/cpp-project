#include <iostream>
using namespace std;
int main()
{
    //------------------------------------------
 int a=17, b=24;
 cout<<""<<(a+=b)<<endl;
 cout<<""<<a<<endl;
 cout<<""<<b<<endl;
 cout<<""<<(a-=b)<<endl;
 cout<<""<<a<<endl;
 cout<<""<<((a*b>b)?b:a)<<endl;
 //-----------------------------------------
 //artmetic operators
       int x =1, y=2 ,p , q , r , s , t;
    //cin>>x>>y>>p>>q>>r>>s>>t;
    cout<<(p = x + y)<<" ";
    cout<<(q = x - y)<<" ";
    cout<<(r = x * y)<<" ";
    cout<<(s = x / y)<<" ";
    cout<<(t = x % y)<<" ";

//------------------------------------------------------
class Solution {
 public:
   int multiplication(int A, int B) {
 //       int y= A*B;
 //       return y;  
 //   }
//};
        return A*B;
    }
  };
      return 0;
  }
