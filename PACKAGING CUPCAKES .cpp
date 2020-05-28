#include <iostream>
using namespace std;

int main() 
{
       int T;
       cin>>T;
       while(T--)
       {
              long long N;
              cin>>N;
              if(N==2)
              {
                     cout<<N<<'\n';
              }
              else
              {
                     cout<<(N/2)+1<<'\n';
              }
       }
	return 0;
}
