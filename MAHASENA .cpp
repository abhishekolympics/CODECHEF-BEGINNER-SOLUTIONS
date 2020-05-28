#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
	int t;
	cin>>t;
       int arr[t],even=0,odd=0;
       for(int i=0;i<t;i++)
       {
              cin>>arr[t];
              if(arr[t]%2==0)
              {
                     even++;
              }
              else
                     odd++;
       }
       if(even>odd)
       {
              cout<<"READY FOR BATTLE";
       }
       else
       {
              cout<<"NOT READY";
       }
	return 0;
}
