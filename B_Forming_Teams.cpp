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
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 
 vector<int> vv;
  vector<int> uu;
// function to check whether a graph is bipartite or not
bool isBipartite(vector<int> adj[], int v,
                vector<bool>& visited, vector<int>& color)
{

    for (int u : adj[v]) {

        // if vertex u is not explored before
        if (visited[u] == false) {

            // mark present vertic as visited
            visited[u] = true;

            // mark its color opposite to its parent
            color[u] = !color[v];
            uu.pb(u);
            vv.pb(v);
            // if the subtree rooted at vertex v is not bipartite
            if (!isBipartite(adj, u, visited, color))
            {
               // for(int i=1;i<color.size();i++)cout<<color[i]<<sp;
                  //  cout<<dl;
                                return false;

                            }
        }

        // if two adjacent are colored with same color then
        // the graph is not bipartite
        else if (color[u] == color[v])
             {
             //   for(int i=1;i<color.size();i++)cout<<color[i]<<sp;
                //    cout<<dl;
                                return false;
                            
                            }
    }
   // for(int i=1;i<color.size();i++)cout<<color[i]<<sp;
    //    cout<<dl;
    return true;
}

// Driver Code
int main()
{
    // no of nodes
    //int N = 6;

    // to maintain the adjacency list of graph
    //vector<int> adj[N + 1];

 

        
        
        int node,edge;
        cin>>node>>edge;
    vector<int>adj[node+1];
    int N=node;
        for(int i=0;i<edge;i++)
        {
            int n1,n2;
            cin>>n1>>n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
        

    // to keep a check on whether
    // a node is discovered or not
    vector<bool> visited(N + 1);

    // to color the vertices
    // of graph with 2 color
    vector<int> color(N + 1);

    // adding edges to the graph
   

    // marking the source node as visited
    visited[1] = true;

    // marking the source node with a color
    color[1] = 0;
 //for(int i=1;i<color.size();i++)cout<<color[i]<<sp;
   // cout<<dl;
    // Function to check if the graph
    // is Bipartite or not
    if (isBipartite(adj, 1, visited, color)) {
        cout <<0<<dl;
    }
    else {
         cout<<N-(uu.size()+vv.size())<<dl;
    }
    
}
