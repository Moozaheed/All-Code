#include<bits/stdc++.h>
using namespace std;
#define dl "\n"
#define sp ' '
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define vi vector<int>
#define vs vector<string>
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    ll n,sum1=0,sum2=0;
    cin>>n;
    ll arr[n][n];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }






     
   // cout<<sum1<<sp<<sum2<<dl;
    cout<<abs(sum1-sum2)<<dl;

}