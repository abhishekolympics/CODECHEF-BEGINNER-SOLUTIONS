#include <iostream>

using namespace std;

int main()
{
    int tm;
    cin>>tm;
    while(tm>0)
    {
              long int n;
              cin>>n;
              if(n>=4)
              {
                     if(n%2==1)
                     n=n-1;
                     cout<<n*(n-2)/8<<"\n";
              }
              else
              cout<<"0"<<"\n";
              tm--;
    }
    return 0;
}