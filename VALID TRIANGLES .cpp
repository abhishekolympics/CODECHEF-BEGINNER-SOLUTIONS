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
	       int n1,n2,n3;
	       cin>>n1>>n2>>n3;
	       if(n1+n2+n3==180)
	       {
	              cout<<"YES\n";
	       }
	       else
	       {
	              cout<<"NO\n";
	       }
	}
	return 0;
}
