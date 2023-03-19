#include<bits/stdc++.h>
#define ll long long
#define maxx 30005
using namespace std;

vector<ll int>adj[maxx];
bool vis[maxx];

int cnt=0;
void dfs(int v)
{
    vis[v]=1;
    cnt++;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!vis[child]) dfs(child);
    }
}

int main()
{

    
    ll int node,edge;
    cin>>node>>edge;
    for(ll int i=0;i<edge;i++)
    {
        ll int n1,n2; 
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1); 
    }

    int ans=node;

    for(int i=1;i<=node;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans=min(ans,cnt);
            cnt=0;
        }
    }

    cout<<ans<<endl;

    

}
