#include <iostream>
using namespace std;

int main() 
{
       long long t;
       cin>>t;
       while(t--)
       {
              long long n,s1,s2;
              cin>>n;
              s1=n%10;
              while(n!=0)
              {
                     s2=n%10;
                     n=n/10;
              }
              cout<<s1+s2<<'\n';
       }
	return 0;
}
