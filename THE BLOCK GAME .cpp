#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	       long long n,reverse=0,b;
	       cin>>n;
	       b=n;
	       while(n!=0)
	       {
	              reverse=reverse*10+n%10;
	              n=n/10;
	       }
	       //cout<<reverse<<endl;
	       if(reverse==b) cout<<"wins\n";
	       else cout<<"losses\n";
	}
	return 0;
}
