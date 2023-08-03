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
#define ddl(x) cerr<<x<<dl;
#define dsp(x) cerr<<x<<sp;
#define cdl(x) cout<<x<<dl;
#define csp(x) cout<<x<<sp;
#define autox(data) for(auto x:data)
#define coutall(data) for(auto x:data)cout<<x<<sp;cout<<dl;
#define cerrall(data) for(auto x:data)cerr<<x<<sp;cerr<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 1005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


ll reverse_num(ll n){ ll tmp=n,ans=0,r;while(tmp){r=tmp%10;ans=ans*10+r;tmp/=10;}return ans;}
ll gcd(ll a,ll b){return (!b? a:gcd(b,a%b));}
ll lcm(ll num1, ll num2) { return (num1/gcd(num1, num2))*num2; }
bool isprime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }
bool isSquare(ll x){ll sq=sqrt(x);return sq*sq==x;}
ll mod_inverse(ll a, ll p, ll m){ ll r=1;while(p){if(p%2)r=((r%m)*(a%m))%m;a=((a%m)*(a%m))%m;p/=2;}return r;}
ll POW(ll a,ll b){if(!b) return 1;ll r=POW(a,b/2);if(b%2) return r*r*a;else return r*r;}
ll LOG2(ll n){ll v=1,c=0;while(v<=n)c++,v*=2;return c-1;}
ll LOGX(ll x,ll n){ll v=1,c=0;while(v<=n)c++,v*=x;return c-1;}
string inttostr(ll x){string s;while(x){s+=(char)(x%10)+'0';x/=10;}reverse(all(s));return s;}
ll strtoint(string s){istringstream ss(s);ll n;ss>>n;return n;}
ll ceil(ll x,ll y){return (x+(y-1))/y;}


vector<vector<int>>adj;
// bool vis[maxx];
//int level[maxx];
vector<ll> dp;
 


void dfs(int v, int p) 
{
    if (adj[v].size() == 1 && adj[v][0] == p) 
    {
        dp[v] = 1;
    } 
    else 
    {
        for (auto u : adj[v]) 
        {
            if (u != p) 
            {
                dfs(u, v);
                dp[v] += dp[u];
            }
        }
    }
}


void Boom()
{
    //Let's Move

    

    ll int node;
    cin>>node;

    adj.assign(node+10, vector<int>());
    dp.assign(node+10, 0);
    
    for(ll int i=0;i<node-1;i++)
    {
        ll int n1,n2; 
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1); 
    }



    dfs(1,-1);

    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<dp[a]*dp[b]<<dl;
    }
    







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
