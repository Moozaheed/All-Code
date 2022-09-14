//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 

ll int dp[40][40];
ll int nCr(ll int n, ll int r)
{
    if(dp[n][r]!=0)return dp[n][r];

    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    dp[n][r]= nCr(n - 1, r - 1) + nCr(n - 1, r);    
    return  dp[n][r];
    
}


void Boom()
{
    //Let's Move
    

    ll int n,m,t;
    cin>>n>>m>>t;

    ll int ans=0;
    for(int i=4;i<=n;i++)
    {
        ll int b=i;
        ll int g=t-i;
        if(g>m)continue;
        cerr<<b<<sp<<g<<dl;
        if(g<1)break;
        else ans+=(nCr(n,b)*nCr(m,g));
    }
    cout<<ans<<dl;
   



   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 