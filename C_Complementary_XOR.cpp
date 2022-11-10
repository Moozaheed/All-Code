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




void Boom()
{
    //Let's Move

    int n;
    cin>>n;
    S a,b;
    cin>>a>>b;

   // cerr<<a<<dl<<b<<dl;
    vector<pii>v;

  

    if(a!=b)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                cN;
                return;
            }
        }
    }

    cY;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='0')continue;
        int p=i;
        while(a[i]=='1' && i<n)i++;
        i--;
        int q=i;
        v.pb({p+1,q+1});
        
    }

if(a==b)
{
    if(v.size()%2==1)
    {

        int l=v.size()-1;
        int x=v[l].fi;
        int y=v[l].se;
        v.pob();
        

        
        if(x!=1)
        {
            v.pb({x-1,y});
            v.pb({x-1,x-1});
        }
        else
        {
            if(y==n)
            {
                v.pb({x,x});
                v.pb({x+1,y});
            }
            else
            {
                v.pb({x,y+1});
                v.pb({y+1,y+1});
            }
        }
        
    }
}

    cout<<v.size()<<dl;

    for(auto x:v)cout<<x.fi<<sp<<x.se<<dl;

    




}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
