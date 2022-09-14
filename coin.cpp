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
#define maxx 1001
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 

char arr[maxx][maxx];
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
int ROW,COL;
bool isValid(int row, int col)
{
    if (row < 0 || col < 0 || row >= ROW || col >= COL)
        return false;
    if (arr[row][col]=='#')
        return false;
    return true;
}

void dfs(int row, int col)
{
    stack<pair<int, int> > st;
    st.push(make_pair(row, col));
    while (!st.empty()) 
    {
        pair<int, int> curr = st.top();
        st.pop();
        int row = curr.first;
        int col = curr.second;
        if (!isValid(row, col))
            continue;

        arr[row][col] = '#';
       // cnt++;

       for (int i = 0; i < 4; i++)
        {
            int adjx = row + dirx[i];
            int adjy = col + diry[i];
            st.push({ adjx, adjy });
        }
    }
}
 
void Boom()
{
    //Let's Move

    int n,m;
    cin>>n>>m;
    
    ROW=n;
    COL=m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='.')
            {
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt<<dl;


   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 