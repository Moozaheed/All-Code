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

vector < int >adj[maxx];
ll int cost[maxx];

bool color[maxx];
ll int ans=0;
ll int power(ll int x,ll int n)
{
    if(n%2==0)return 1;
    else return -1;
}
void dfs(int v)
{

    color[v]=1;
    //cout<<v<< "->";
    for(auto child:adj[v])
        if(color[child]==0)
        {
            ans+=(cost[v]-cost[child])*power(-1,abs(v-child));
            dfs(child);

        }
            
}

void Boom()
{
    //Let's Move
    
    

          
          //vector<int>adj[max];
          
          int node,edge;
          cin>>node;
          edge=node-1;

          for(int i=1;i<=node;i++)cin>>cost[i];
          for(int i=0;i<edge;i++)
          {
              int n1,n2;
              cin>>n1>>n2;
              adj[n1].push_back(n2);
              adj[n2].push_back(n1);
          }
          int pp=INT_MAX;
          int f=0;
          for(int i=1;i<=node;i++)
          {
            mem(color,0);
            dfs(i);
            cerr<<ans<<dl;
            if(ans>pp)
            {
                pp=ans;
                f=i;

            }
            ans=0;

          }


cout<<f<<dl;


}

int main()
{
    Boost;
   
    

    int t=1;      
   // cin>>t;
    
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        Boom();
    }

    return 0;

}
