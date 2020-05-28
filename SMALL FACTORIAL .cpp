#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;

int main() 
{
	cpp_int T;
	cin>>T;
	while(T--)
	{
	       cpp_int a,fact=1;
	       cin>>a;
	       while(a!=0)
	       {
	              fact*=a;
	              a--;
	       }
	       cout<<fact<<'\n';
	}
	return 0;
}
