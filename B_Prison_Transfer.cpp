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
 
void Boom()
{
    //Let's Move
    int n,t,c;
    cin>>n>>t>>c;
    ll int arr[n];
    vi data;
    data.pb(-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>t)data.pb(i);
    }
   
    // cerr<<dl;
    data.pb(n);
    //  for(auto x:data)cerr<<x<<sp;
   //  cerr<<dl;
    ll cnt=0;
    for(int i=1;i<data.size();i++)
    {
       ll int k=data[i]-data[i-1]-1;
      ll  int p=k-(c-1);
      //  cerr<<k<<sp<<p<<dl;
        if(p>0)cnt+=p;
    }
    cout<<cnt<<dl;
   



   
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