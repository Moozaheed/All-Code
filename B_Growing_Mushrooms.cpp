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
#define www fprintf(stderr, "====I am Here====\n");
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

 bool comp(pair<double,int>x,pair<double,int>y)
 {
     if(abs(x.fi-y.fi)<EPS && x.se>y.se)return false;
     if(x.fi<y.fi)return false;
    
     return true;
 }
 
 
void Boom()
{
    //Let's Move
   int n;
   double k,t1,t2;
   cin>>n>>t1>>t2>>k;
   k=k/100;
   vector<pair<double,int>>data;
   for(int i=1;i<=n;i++)
   {
    double p,q;
    cin>>p>>q;
    double k1=((t1*p)-(t1*p*k))+(t2*q);
    double k2=((t1*q)-(t1*q*k))+(t2*p);
    data.pb(mp(max(k1,k2),i));
   }
   sort(all(data),comp);
   for(auto x:data)cout<<setprecision(2)<<fixed<<x.se<<sp<<x.fi<<dl;

   
}

int main() 
{ 
   // Boost;
    #ifndef ONLINE_JUDGE
  //  Input;
   // Output;
    #endif


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


   // time;
    return 0;

} 
