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
 
 
//  bool comp(pair<ll int,ll int>x,pair<ll int,ll int>y)
//  {
//  //true -- change
//  //fasle -- no change
//  if(x.fi<y.fi && x.se>y.se )return 1;
//  if(x.fi==y.fi && x.se>y.se)return 1;
//  if(x.fi<y.fi)return 1;
//  return 0; 
//  }
 
 
void Boom()
{
    //Let's Move
    ll int n,d;
    cin>>n>>d;
    vector<pair<ll int,ll int>>data;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        data.pb({x,y});
    }
    sort(all(data));
    for(int i=1;i<data.size();i++)
    {
        data[i].se=data[i-1].se+data[i].se;
    }
 // for(auto x:data)cerr<<x.fi<<sp<<x.se<<dl;
   // cerr<<dl;
  ll  int mx=INT_MIN,cnt=0,i,j;
    for(i=0;i<data.size();i++)
    {
        ll int k=data[i].fi;
        k+=d;
        pair<ll int ,ll int>ppp;
        ppp=mp(k,0);
        auto pp=upper_bound(all(data),ppp);
        int p=pp-data.b();
        if(i==0)cnt=data[p].se;
        else cnt=data[p].se-data[i].se;
    
       // cerr<<cnt<<dl;
        mx=max(mx,cnt);
    }
cout<<mx<<dl;
   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif

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