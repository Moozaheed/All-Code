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
#define maxx 20000000
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;
//20000000
bool prime[maxx + 1];
vector<pii>ans;
void fun()
{
    memset(prime, true, sizeof(prime));
    prime[0]=prime[1]=0;
    for (int p = 2; p * p <= maxx; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= maxx; i += p)prime[i] = false;
        }
    }

    for(int i=0;i<maxx-2;i++)
    {
        if(prime[i]==true  && prime[i+2]==true)
        {
            ans.pb({i,i+2});
        }
    }
    // for(auto x:ans)
    // {
    //     cout<<x.fi<<sp<<x.se<<dl;
    // }
}
void Boom()
{
    //Let's Move
    int i;
    while(cin>>i)
    {
        i--;
        cout<<'('<<ans[i].fi<<", "<<ans[i].se<<')'<<dl;
    }
}
int main()
{
    Boost;
    fun();
    int t=1;     //  cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }
    return 0;
}