//Problem link:https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/

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
 

vector < int >adj[maxx];
bool color[maxx];
int level[maxx];
int cnt=1;
void dfs(int v)
{
    color[v]=1;
    level[v]=cnt;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!color[child]) dfs(child);
    }
}

void Boom()
{
    //Let's Move
    
   int n,k;
   cin>>n>>k;


   
    for(int i=0;i<=n;i++)
    {
        adj[i].clear();
        color[i]=0;
    }

   
    vector<pair<int,int>>v;
    for(int i=0;i<k;i++)
    {

    int n1,n2;
    S str;
    cin>>n1>>str>>n2;
    //cerr<<n1<<sp<<str<<sp<<n2<<dl;
    if(str=="=")adj[n1].push_back(n2),adj[n2].push_back(n1); 
    else v.pb({n1,n2});

    }

    for(int i=1;i<=n;i++)
    {
        if(color[i]==false)
        {
            dfs(i);
        }
        cnt++;
    }

    for(auto x:v)
    {
        
        if(level[x.fi]==level[x.se]){cN; return;}
    }
    cY;









 
   




   
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