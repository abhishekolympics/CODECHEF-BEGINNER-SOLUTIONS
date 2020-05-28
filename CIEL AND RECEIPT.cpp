#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
       fast;
	int t;
	cin>>t;
	while(t--)
	{
	       long long n,c=0,arr[12]={2048,1024,512,256,128,64,32,16,8,4,2,1};
	       cin>>n;
	       for(int i=0;i<12;i++)
	       {
	              c+=(n/arr[i]);
	              n=n%arr[i];
	       }
	       cout<<c<<endl;
	       
	}
	return 0;
}
