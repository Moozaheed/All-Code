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

ll h=0;
void Boom() 
{
    ll m,s;
    cin>>m>>s;
    ll l=1, r=m*9;
    if(m==1&&!s)
    {
        cout<<"0 0"<<endl;
        return;
    }
    if(s<l||s>r)
    {
        cout<<"-1 -1"<<endl;
        return;
    }
    vector<ll>mn(m),mx(m);
    ll sum=s;
    mn[0]=1;
    sum--;
    for(ll i=m-1; i>=0; i--)
    {
        if(sum)
        {
            while(sum&&mn[i]<9)
            {
                mn[i]++;
                sum--;
            }
        }
    }
    for(int i=0;i<m;i++)cout<<mn[i];
    cout<<sp;
    //mx
    sum=s;
    for(ll i=0; i<m; i++)
    {
        if(sum)
        {
            while(sum&&mx[i]<9)
            {
                mx[i]++;
                sum--;
            }
        }
    }
    for(int i=0;i<m;i++)cout<<mx[i];


}
int main()
{
    Boost;

    int t=1;       //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
