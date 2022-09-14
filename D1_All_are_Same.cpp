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
    
    int n;
    cin>>n;
    vector<int>data;
    while(n--)
    {
        int x;
        cin>>x;
      //  x=abs(x);
        data.pb(x);
    }
    sort(all(data));
     vector<int>::iterator ip;
  ip = unique(data.begin(),data.end());
   data.resize(distance(data.begin(), ip));
   if(data.size()==1){cout<<-1<<dl;return;}
  // cout<<data.size()<<endl;
    vector<int>d;
    int k;
    int z=0;
    bool f=false;
     for(int i=0;i<data.size()-1;i++)
    {
        k=data[i+1]-data[i];
        k=abs(k);
        d.pb(k);
        cerr<<k<<sp;
    }
    cerr<<dl;

    sort(all(d));
     ip = unique(d.begin(),d.end());
   d.resize(distance(d.begin(), ip));
   int kk=d[0];
    for(int i=1;i<d.size();i++)
    {
        cerr<<__gcd(kk,d[i])<<sp;
        kk=__gcd(kk,d[i]);
    }
   // if(f)cout<<1<<dl;
  //else
    cout<<kk<<dl;
  

   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 