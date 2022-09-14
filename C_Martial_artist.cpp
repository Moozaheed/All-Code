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
#define maxx 1000005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
bool vis[maxx]; 

class op{
    public:
        long long a,b;
        vector<long long>v;
        op(){}
        op(long long x,long long y,vector<long long>vv){
            a=x,b=y,v=vv;
        }
};
vector<op>vvv;
vector<bool>vis(1000000,0);
long long solve(long long idx){
    if(vis[idx])return 0;
    vis[idx]=true;
    if(vvv[idx].b==0)return vvv[idx].a;
    long long x=0;
    for (long long i = 0; i < vvv[idx].b; i++)
    {
        x+=solve(vvv[idx].v[i]-1);
    }
    
    return vvv[idx].a+x;
}


void Boom()
{
    //Let's Move
    long long n;cin>>n;
    for (long long i = 0; i < n; i++){
        long long a,b;cin>>a>>b;
        vector<long long>v(b);
        for (long long j = 0; j < b; j++)
        {
            cin>>v[j];
        }
        op opp(a,b,v);
        vvv.push_back(opp);
    }
    long long ppp=solve(n-1);
    cout<<ppp<<endl;

   
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