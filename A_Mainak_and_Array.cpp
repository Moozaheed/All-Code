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
#define mem(ar,val) memset(ar,val,sizeof(ar));
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
    ll int men=INT_MAX,mox=INT_MIN;
    ll int n;
    cin>>n;

    ll int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mox=max(ar[i],mox);
        men=min(ar[i],men);
    }

    if(ar[0]==men || ar[n-1]==mox)
    {
        cout<<mox-men<<dl;
        return;
    }
ll int kk=0;
for(int i=0;i<n;i++)
{
    kk=max(kk,ar[i]-ar[(i+1)%n]);
    if(ar[i]==mox)
    {
        if(ar[(i+1)%n]==men)
        {
            cout<<mox-men<<dl;
            return;
        }
    }
    
}
cout<<max({ar[n-1]-men,mox-ar[0],kk})<<dl;



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