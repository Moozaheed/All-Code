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
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
  
bool prime[1001];
vector<int>pp;
void sieve()
{
    for (int p = 2; p * p <= 1000; p++)
    {
        if (prime[p] == false)
        {
            for (int i = p * p; i <= 1000; i += p)
                prime[i] = true;
        }
    }

    for(int i=3;i<=1000;i++)
    {
        if(!prime[i])pp.pb(i),cerr<<i<<sp;
    }
cerr<<dl;


}

bool check(int n)
{

    int k=n/2;

    int p=lower_bound(all(pp),k)-pp.b();

    cerr<<pp[p]<<dl;

    return pp[p]+pp[p+1]+1==n && !prime[pp[p]+pp[p+1]+1] || pp[p]+pp[p-1]+1==n && !prime[pp[p]+pp[p-1]+1];    

}
void Boom()
{
    //Let's Move
   
  int n,k;
   cin>>n>>k;
  int cnt=0;
   for(int i=3;i<=n;i++)
   {
       if(check(i))
       {
        cnt++;
       // cout<<i<<sp;
       }
   }

if(cnt>=k)cY;
else cN;

   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif

    sieve();
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 