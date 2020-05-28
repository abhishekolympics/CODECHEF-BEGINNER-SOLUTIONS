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
	       long long n,arr[6]={1,2,5,10,50,100},flag=0;
	       cin>>n;
	       for(int i=5;i>=0;i--)
	       {
	              flag+=n/arr[i];
	              n=n%arr[i];
	       }
	       cout<<flag<<"\n";
	}
	return 0;
}
