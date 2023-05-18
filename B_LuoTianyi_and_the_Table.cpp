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

    int n,m;
    cin>>n>>m;
    int arr[n*m];

    for(int i=0;i<n*m;i++)cin>>arr[i];

    sort(arr,arr+(n*m));

    vi ok;

    int o=n*m;

    ok.pb(arr[0]);
    ok.pb(arr[1]);
    ok.pb(arr[o-1]);
    ok.pb(arr[o-2]);



  //  cerr<<ok.size()<<dl;
  
    int mx=0;

    int x,y,z;

    for(int i=0;i<ok.size();i++)
    {
        for(int j=0;j<ok.size();j++)
        {
            for(int k=0;k<ok.size();k++)
            {
                if(i==j || i==k || j==k)continue;
                int p=ok[i]-ok[j];
                int q=ok[i]-ok[k];


                mx=max({mx,abs(p*(n-1)*m+q*(m-1)),abs(p*n*(m-1)+q*(n-1))});


            }
        }
    }

   // cerr<<x<<sp<<y<<sp<<z<<dl;

    cout<<mx<<dl;



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
