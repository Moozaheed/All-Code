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
 
bool lucky(ll int n)
{
    int t=n;
    while(n)
    {
        if(!(n%10==4 || n%10==7))return false;
        n/=10;
    }
  //  cerr<<t<<dl;
    return true;
}

ll xx(ll int x)
{
    x=(x*(x+1))/2;
    return pow(2,x);
}
void Boom()
{
    //Let's Move
    ll int n;
    cin>>n;


    ll int k=n;
    ll int p=0;
    ll int t=1;
    S str;
    while(k)
    {
        k=k/10;
        p++;
        str.pb('4');
    }

    
        stringstream geek(str);
        ll int intr;
        geek >> intr;
    
    t=intr;
   // cerr<<t<<dl;
    p--;
   ll int x;
   if(p==0)x=0;
   else x=xx(p);
  // x++;
   n    cerr<<x<<dl;
   // cerr<<dl;
    for(int i=t;i<=n;i++)
    {
        //cerr<<i<<dl;
        if(lucky(i))x++;
    }
    cout<<x<<dl;
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