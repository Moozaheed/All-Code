/* code by Pranjal Rai : @Ashtam_Swar */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll M=1e9+7;
ll inf=2e18;
string to_string(ll x){stringstream ss; ss<<x; return ss.str();}
ll to_integer(string s){stringstream ss(s); ll x; ss>>x; return x;}

ll a[200005],d[200005],val,tot,sub[200005],ans[200005];
vector<ll> v[200005];

int power(int x,int y)
{
    if(y%2==0)return 1;
    else return -1;
}

ll dfs(ll s, ll par)
{
    sub[s]=a[s];
    for(auto ch:v[s])
    {
        if(ch==par)
            continue;
        d[ch]=1+d[s];
        sub[s]+=dfs(ch,s);
    }
    return sub[s];
}

void dfs2(ll s, ll par)
{
    for(auto ch:v[s])
    {
        if(ch==par)
            continue;
        ans[ch]=ans[s]-sub[ch]-(tot-sub[ch])*(-1);
        dfs2(ch,s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    for(ll i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    d[1]=0;
    dfs(1,0);
    tot=sub[1];
    for(ll i=1;i<=n;i++)
    {
        val+=(a[i]*d[i]);
        //cout<<sub[i]<<" "<<d[i]<<"\n";
    }
    ans[1]=val;
    dfs2(1,0);
    ll ma=INT_MAX;
    for(ll i=1;i<=n;i++)
    {
        cerr<<ans[i]<<" ";
        //ma=min(ma,ans[i]);
    }
    //cout<<ma<<"\n";
    return 0;
}
