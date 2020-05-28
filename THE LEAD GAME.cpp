#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int sum1=0;
    int sum2=0;
    int max1=0;
    int max2=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
        if(sum1>sum2){
            if(max1<sum1-sum2)
            max1=sum1-sum2;
        }
        else{
            if(max2<sum2-sum1)
            max2=sum2-sum1;
        }
    }
        if(max1>max2){
            cout<<"1"<<" "<<max1;
        }
        else{
            cout<<"2"<<" "<<max2;
        }
	return 0;
}
