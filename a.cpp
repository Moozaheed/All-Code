//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
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
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


vector<int>adj[maxx];
bool vis[maxx];
//int level[maxx];
vi temp;
bool dfs(int node,int par)
{
    vis[node]=1;
    temp.pb(node);

    for(auto v:adj[node])
    {
        if(vis[v]==0)
        {
            if(dfs(v,node)==true)return true;
        }
        else
        {
            if(par!=v)
            {
                temp.pb(v);
                return true;
            }
        }
    }
    temp.pob();
    return false;
}


void Boom()
{
    //Let's Move
    
    



//grp input

int node,edge;
cin>>node>>edge;
for(int i=0;i<edge;i++)
{
    int n1,n2; //two nodes that colore connected with edge i.
    cin>>n1>>n2;
    adj[n1].push_back(n2);
    adj[n2].push_back(n1); //if the graph is directed then this line will not applied.
}


 for(int i=1;i<=node;i++)
 {
    if(dfs(i,i))
    {

    vi pp;
    int i=temp.size()-1;
    int k=temp[i];
    pp.pb(k);
    i--;
    while(k!=temp[i])
    {
        pp.pb(temp[i]);
        //cout<<<<sp;
        i--;
    }
    pp.pb(k);
    cout<<pp.size()<<dl;
    for(auto x:pp)cout<<x<<sp;
       cout<<dl;

   return;

    }
 }
      

      cout<<"IMPOSSIBLE"<<dl;




}

int main()
{
    Boost;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    
    int t=1;     // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
