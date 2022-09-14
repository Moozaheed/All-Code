#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp ' '
#define ll long long
int main()
{
   string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string s1;
  // cout<<s;
   ll n,r;
   cin>>n>>r;
  ll j=0,k=0;
  while(j<=s.length()){
   for(ll i=1;i<=n;i++)
   {
    //   cout<<s[j];
       s1.push_back(s[j]);
       
   }
   j++;
  }
cout<<s1[r-1];
}


