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
    ll int n;
    cin>>n;
    vector<ll int> data(n);
   // map<int,int>k;
    for(ll int i=0;i<n;i++)
    {
        cin>>data[i];
      //  k[data[i]]++;
    }
    vector<vector<ll int>>pp;
   // pp.pb(data);

    while(1)
    {
       // here
        map<ll int,ll int>kk;
        pp.pb(data);
        for(int j=0;j<n;j++)
        {
            kk[data[j]]++;
        }
        for(int j=0;j<n;j++)
        {
            data[j]=kk[data[j]];
        }
        bool hh=false;
        for(auto x:kk)
        {
            if(x.fi!=x.se)hh=true;
        }
        if(hh==false)break;
    }


   for (int i = 0; i < pp.size(); i++)
    {
        for (int j = 0; j < pp[i].size(); j++)
        {
            cerr << pp[i][j] << " ";
        }   
        cerr << endl;
    }

  ll int q;
  cin>>q;
  while(q--)
  {
    ll int k,x;
    cin>>x>>k;
    if(k>=pp.size())k=pp.size()-1;
    cout<<pp[k][x-1]<<dl;
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