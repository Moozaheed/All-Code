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
    vector<pair<char,char>>data;
    for(int i=0;i<n-2;i++)
    {
        char a,b;
        cin>>a>>b;
        data.pb(mp(a,b));
       // cerr<<data[i].fi<<data[i].se<<sp;
    }
   // cerr<<dl;
    S ans="";
    for(int i=0;i<data.size()-1;i++)
    {
        if(data[i].se==data[i+1].fi)ans.pb(data[i].fi);
        else {ans.pb(data[i].fi);ans.pb(data[i].se);}
    }
    ans.pb(data[n-3].fi);
    ans.pb(data[n-3].se);
    
    if(ans.size()<n)
    {
        for(int i=0;i<n-ans.size();i++)
        ans.pb('a');
    }
    cout<<ans<<dl;
   



   
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