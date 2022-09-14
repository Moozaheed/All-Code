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
    int arr[n+4];
    map<int,vector<int>>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mp[arr[i]].pb(i);
    }

    int ans[n];

    memset(ans,0,sizeof(ans));
     

    for(auto x:mp)
    {
        int k=x.fi-1;
        vector<int>pp=x.se;

        if(pp.size()==1)
        {
            ans[k]=1;
        }
        int cnt=1;
        for(int i=0;i<pp.size()-1;i++)
        {

            int p=abs(pp[i]-pp[i+1]);
            if(p%2==1)cnt++;
        }
        ans[k]=cnt;
    }
   

   for(auto x:ans)cout<<x<<sp;
   cout<<dl;



   
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