#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
int main() 
{
       fast;
	int t;
	cin>>t;
	while(t--)
	{
	        int i,Number_of_old_words,Number_of_phrases;
	        
	        cin>>Number_of_old_words>>Number_of_phrases;
	        
	        map<string,int>count_words;
	        
	        string Old_words[Number_of_old_words];
	        
	        for(i=0;i<Number_of_old_words;i++)
	        {
	               cin>>Old_words[i];
	        }
	        
	        while(Number_of_phrases--)
	        {
	               int length_of_phrases;
	               cin>>length_of_phrases;
	               
	               while(length_of_phrases--)
	               {
	                      string phrase_word;
	                      cin>>phrase_word;
	                      count_words[phrase_word]++;
	                      
	               }
	        }
	        for(i=0;i<Number_of_old_words;i++)
	        {
	               if(count_words[Old_words[i]]>=1)
	               {
	                      cout<<"YES ";
	               }
	               else
	               {
	                      cout<<"NO ";
	               }
	        }
	        cout<<"\n";
	        
	}
	return 0;
}
