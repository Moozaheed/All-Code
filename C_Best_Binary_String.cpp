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

    S str;
    cin>>str;

    int n=str.size();
    vi ok;
    //ok.pb(0);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='?')
        {
          ok.pb(i);
          while(i<n && str[i]=='?')i++;
          ok.pb(i);
        }
    }


    // for(auto x: ok)cerr<<x<<sp;
 
    // cerr<<dl;

    // if(ok.size()==)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<0;
    //     }
    //     cout<<dl;
    //     return;
    // }
 
    for(int i=0;i<ok.size();i+=2)
    {
        int p=ok[i];
        int q=ok[i+1];

        //cerr<<p<<sp<<q<<dl;

        int m=q;
        if(m==n)m=p-1;

        if(m==-1)
        {
            m=0;
            str[0]='0';
        }
    
        for(int j=p;j<q;j++)
        {
            str[j]=str[m];            
        }

    }

    cout<<str<<dl;
    





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
