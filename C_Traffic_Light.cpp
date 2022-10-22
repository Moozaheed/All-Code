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
    ll int a,b,c,d;

    cin>>a>>b>>c>>d;


    ll int nn=a*b;

    ll int k=1;

    while(true)
    {

        ll int n=nn*k;
        k++;
        if(n>c*d)break;
//cout<<n<<sp;

    vector<ll int> divi;
    
    for(ll int i=1; i*i<=n; i++)
    {
            if(n%i == 0)
            {
                if(i==n/i)divi.pb(i);
                else divi.pb(n/i),divi.pb(i);
            }
    }

    for(int i=0;i<divi.size();i++)
    {
        for(int j=0;j<divi.size();j++)
        {
            ll int x=divi[i];
            ll int y=divi[j];

            if(x>a && x<=c && y>b && y<=d && (x*y)%(a*b)==0)
            {
                cout<<x<<sp<<y<<dl;
                return;
            }

        }
    }
    }


    cout<<-1<<sp<<-1<<dl;




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
