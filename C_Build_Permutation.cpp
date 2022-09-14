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
vector<ll int>v;
void solve()
{
    ll i=0;
    while(i*i<=1e6)
    {
        v.push_back(i*i);
        i++;
    }
}

ll int pre[maxx];
void Boom()
{
    //Let's Move
    ll int n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)mp[i]=-1;
    ll i=n-1;
    while(i>=0)
    {
        //cout<<i<<" ";
        if(mp[i]==-1)
        {
            ll val=*lower_bound(all(v),i);
                //cout<<val<<endl;
            ll x=val-i;
            ll y=x;
            while(x<=i)
            {
                mp[x]=i;
                mp[i]=x;
                x++;
                i--;
            }
            i=y-1;
        }
            //cout<<i<<endl;
    }

    for(auto x:mp)cout<<x.se<<sp;
    cout<<dl;




   
}

int main() 
{ 
    Boost;

   solve();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 