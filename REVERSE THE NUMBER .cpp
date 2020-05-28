#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	       long long n,reverse=0;
	       cin>>n;
	       while(n!=0)
	       {
	              reverse=reverse*10+n%10;
	              n/=10;
	       }
	       cout<<reverse<<'\n';
	}
	return 0;
}
