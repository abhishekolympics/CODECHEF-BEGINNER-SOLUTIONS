#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long t;
	cin>>t;
	long arr[t];
       for(long i=0;i<t;i++)
       {
              cin>>arr[i];
       }
       sort(arr,arr+t);
       for(long i=0;i<t;i++)
       {
              cout<<arr[i]<<'\n';
       }
	return 0;
}
