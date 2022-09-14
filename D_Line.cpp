//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<s1ing>
#define pii pair<ll int,ll int>
#define psi pair<s1ing,ll int>
#define pis pair<ll int,s1ing>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<s1ing,ll int>
#define mis map<ll int,s1ing>
#define S s1ing
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
    
    ll int n;
    string s1;
    cin>>n>>s1;
    vector<pii>v;
    
    ll int sum=0;
    for(int i=0;i<n;i++)
    {
        ll int k;
        if(s1[i]=='R') k=n-(1+i);
        else k=i;
        v.pb(mp(k,i));
        sum+=k;
        
    }
    sort(all(v));
    ll int sum1=0;
    ll int sum2=0;
    for(auto a:v)
    {
        sum1+=a.fi;
        sum2+=max(n-1-a.fi,a.fi);
        cout<<sum+(sum2-sum1)<<sp;
    }
    cout<<dl;
    

      




}

int main()
{
    Boost;

    int t=1;      cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
