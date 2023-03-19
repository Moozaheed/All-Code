#include<bits/stdc++.h>
#define maxx 100005
#define ll long long
using namespace std;


vector<ll int>adj[maxx];
bool vis[maxx];


void dfs(int v)
{
    vis[v]=1;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!vis[child]) dfs(child);
    }
}

void Boom()
{

    ll int node,edge;
    cin>>node>>edge;

    for(int i=1;i<=node;i++)
    {
        adj[i].clear();
        vis[i]=0;
    }

    for(ll int i=0;i<edge;i++)
    {
        ll int n1,n2; 
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1); 
    }

    int cnt=0;

    for(int i=1;i<=node;i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i);
        }
    }

    cout<<cnt<<endl;




}

int main()
{

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        Boom();
    }

    return 0;

}
