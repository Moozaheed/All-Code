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
#define mem(ans,val) memset(ans,val,sizeof(ans));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;






int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
          ll int n;
    cin>>n;

    ll int ans[n];

    for(ll int i=0;i<n;i++)
    {
        cin>>ans[i];
        if(1==ans[i])ans[i]+=1;
    }

    

    for(ll int i=1;i<n;i++)
    {
        if(ans[i]%ans[i-1]==0)
        {
            
            if(i-2>=0)
            {
                while(ans[i]%ans[i-1]==0 || ans[i-1]%ans[i-2]==0)ans[i]+=1;
            }

            if(i==1)
            {
                while(ans[i]%ans[i-1]==0)ans[i]+=1;
            }

        }
    }

    for(ll int i=0;i<n;i++)cout<<ans[i]<<sp;
    cout<<dl;
    }

    return 0;

}
