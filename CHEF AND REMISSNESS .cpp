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
	       long long a,b;
	       cin>>a>>b;
	       cout<<max(a,b)<<" "<<a+b<<'\n';
	}
	return 0;
}
