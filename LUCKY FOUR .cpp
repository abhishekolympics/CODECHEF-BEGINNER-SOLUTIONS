#include <iostream>
using namespace std;

int main() 
{
       long long t;
       cin>>t;
       while(t--)
       {
              long long n,flag=0;
              cin>>n;
              while(n!=0)
              {
                     if(n%10==4)
                     {
                            flag++;
                     }
                     n/=10;
              }
              cout<<flag<<'\n';
       }
	return 0;
}
