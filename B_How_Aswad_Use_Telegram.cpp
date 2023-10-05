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
#define maxx 100005
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

struct st
{
    S str;
    ll int val;
    ll int cg;

};


ll int pl(S s)
{
    ll int cnt=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]==s[s.size()-i-1])
            continue;
        else
            cnt++;
    }

    return cnt;
}



void Boom()
{
    //Let's Move

    ll int n,k;
    cin>>n>>k;
    vector<st>ok;
    ok.pb({"0",0,0});

    for(int i=1;i<=n;i++)
    {
        S s;
        cin>>s;

        ll int cng=pl(s);
        ok.pb({s,0,cng});
        // if(i==1)ok.pb({s,0,cng});
        // else ok.pb({s,0,cng+ok[i-1].cg});
    }

    for(int i=1;i<=n;i++)
    {
        ll int x;
        cin>>x;
        ok[i].val=x;
        // if(i==1)ok[i].val=x;
        // else ok[i].val=x+ok[i-1].val;
    }

    // for(auto x:ok)
    // {
    //     cout<<x.str<<sp<<x.val<<sp<<x.cg<<dl;
    // }

    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];
    int currentStart = 0;
    int maxStart = 0;
    int maxEnd = 0;

    for (int i = 1; i <= n; ++i) {
        if (arr[i] > maxEndingHere + arr[i]) {
            maxEndingHere = arr[i];
            currentStart = i;
        } else {
            maxEndingHere = maxEndingHere + arr[i];
        }

        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
            maxStart = currentStart;
            maxEnd = i;
        }
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


