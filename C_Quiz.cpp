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
 
 
ll int iterpower(ll int x,ll int n,ll int m)
{
    ll int res=1;
    while(n>0)
    {
        if(n&1)         //n%2!=0
            res=(res*x)%m;
        x=(x*x)%m;
        n=n>>1;          //n=n/2
    }
return res;
}
ll int mul(ll int a,ll int b)
{
    return ((a%hp)*(b%hp))%hp;
}
 
ll int vaag(ll int a,ll int b)
{
    return ((a%hp)*iterpower(b,hp-2,hp))%hp;
}
 
void Boom()
{
    //Let's Move
 
   ll int n,m,k;
    cin>>n>>m>>k;
    ll int wr=n-m;
cerr<<wr<<dl;
   ll int p1=mul(wr,k-1);
cerr<<p1<<dl;
  ll  int baki=n-(p1+wr);
cerr<<baki<<dl;
   ll int vag=baki/k;
cerr<<vag<<dl;
cerr<<dl;
  ll  int vaag=0;
    if(vag)
     // vaag=iterpower(k,vag+1,hp);
 
    {
        vaag=2*k;
        for(int i=1;i<vag;i++)
        {
            cerr<<vaag<<dl;
            vaag=vaag+k;
            vaag=vaag*2;
            vaag=vaag%hp;
 
        }
    }
cerr<<vaag<<dl;
    cout<<p1+vaag+(baki-(vag*k))<<dl;
 
}
 

int main() 
{ 
    Boost;

 int n;
 ll   int k=3;
    for(int i=1;i<100;i++)
    {
        cerr<<k<<dl;
        k=(k*2)%hp+3;
    }
    cout<<k<<dl;
   


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
       // Boom();
    }

    return 0;

} 