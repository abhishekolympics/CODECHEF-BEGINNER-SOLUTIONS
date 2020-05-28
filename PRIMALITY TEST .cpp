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
	       long long n;
	       cin>>n;
	       for(long long i=2;i<sqrt(n);i++)
              {
                     if(n%i==0)
                     {
                            cout<<"no";
                            goto b;
                     }
              }
              cout<<"yes";
              b:
              cout<<"\n";
	}
	return 0;
}
