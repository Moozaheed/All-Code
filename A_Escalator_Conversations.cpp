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

int num_conversations(int n, int m, int k, int H, vector<ll int> h) {
    vector<int> step_heights;
    for (int i = 1; i <= m; i++) {
        step_heights.push_back(i * k);
    }


//   cerrall(step_heights);


    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        int p1=h[i];
        for(int i=0;i<m;i++)
        {
            int p2=p1+step_heights[i];
            //cerr<<p2<<sp;

            for(int j=0;j<m;j++)
            {
                if(i==j)continue;
                int H1=H;
                H1+=step_heights[j];

               // cerr<<H1<<dl;

                if(abs(p2-H1)==abs(step_heights[j]-step_heights[i]))cnt++;
            }
        }
    }
    
    
    

    
    return cnt;
}

void Boom()
{
    //Let's Move

    int n,m,k,H;
    cin>>n>>m>>k>>H;
    vi arr(n);

    for(int i=0;i<n;i++)cin>>arr[i];

   int result = num_conversations(n, m, k, H, arr);
   cout<<result<<dl;
    







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
