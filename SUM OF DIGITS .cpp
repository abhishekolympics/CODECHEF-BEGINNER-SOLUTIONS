#include <iostream>
using namespace std;

int main() 
{
       int T;
       cin>>T;
       while(T--)
       {
       	long a,sum=0;
       	cin>>a;
       	while(a!=0)
       	{
       	       sum+=a%10;
       	       a/=10;
       	}
       	cout<<sum<<'\n';
       }
	return 0;
}
