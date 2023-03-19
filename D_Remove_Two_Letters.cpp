//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;



int main()
{


  int t;
   cin>>t;
   while(t--)
   {
    ll int n;
    string arr;
    cin>>n>>arr;

    ll int cnt=n-1;

    for(ll int i=0;i<n-2;i++) if(arr[i+2]==arr[i])cnt--;



    cout<<cnt<<endl;

   }
}
