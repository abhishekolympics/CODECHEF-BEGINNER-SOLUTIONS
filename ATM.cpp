#include <bits/stdc++.h>
using namespace std;

int main() 
{
       int w;
       float ac;
       cin>>w>>ac;
       if(w%5==0&&w<(ac-0.5))
       {
              cout<<fixed<<setprecision(2)<<ac-0.5-w;
       }
       else
       {
              cout<<fixed<<setprecision(2)<<ac;
       }
       
	return 0;
}
