//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
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
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;




void Boom()
{
    //Let's Move

    ll int n;
    cin>>n;

    vi ok1(n),ok2(n);
    set <int>ok;

    for(ll int i=0;i<n;i++)cin>>ok1[i],ok.in(ok1[i]);    
    for(ll int i=0;i<n;i++)cin>>ok2[i],ok.in(ok2[i]);  

    ll int cnt=1;
    ll int cnt1=1;

    map<ll int,ll int>pp,pp2;

    for(int i=1;i<n;i++)
    {
        if(ok1[i]==ok1[i-1])cnt++;
        else
        {
            pp[ok1[i-1]]=max(pp[ok1[i-1]],cnt);
            cnt=1;
        }

        if(ok2[i]==ok2[i-1])cnt1++;
        else
        {
            pp2[ok2[i-1]]=max(pp2[ok2[i-1]],cnt1);
            cnt1=1;
        }
    }
    pp[ok1[n-1]]=max(pp[ok1[n-1]],cnt);
    pp2[ok2[n-1]]=max(pp2[ok2[n-1]],cnt1);

    //cerr<<cnt<<sp<<cnt1<<dl;

    ll int ans=0;
    for(auto x:ok)
    {
        ans=max(ans,pp[x]+pp2[x]);
    }

    cout<<ans<<dl;

 //  cout<<max({ans,mx1,mx})<<dl;






}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
