#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
       fast;
	int t;
	cin>>t;
	while(t--)
	{
	      char c;
	      string arr[4]={"BattleShip","Cruiser","Destroyer","Frigate"};
	      cin>>c;
	      switch(c)
	      {
	             case 'b': cout<<arr[0]<<endl; break;
	             case 'B': cout<<arr[0]<<endl; ;break;
	             case 'c': cout<<arr[1]<<endl; ;break;
	             case 'C': cout<<arr[1]<<endl; ;break;
	             case 'd': cout<<arr[2]<<endl; ;break;
	             case 'D': cout<<arr[2]<<endl; ;break;
	             case 'f': cout<<arr[3]<<endl; ;break;
	             case 'F': cout<<arr[3]<<endl; ;break;
	             
	      }
	}
	return 0;
}
