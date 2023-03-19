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
    map<string,pair<S,S>>mp;
    while(n--)
    {
        S str;
        getline(cin, str);

        stringstream stream(str);
        string intermediate;
        vs ok;
        while(getline(stream, intermediate, ' '))
        {
           ok.pb(intermediate);
        }

        mp[ok[1]]={ok[2],ok[3]};

    }

    cerr<<mp.size()<<dl;

    for(auto x:mp)
    {
        cerr<<x.fi<<sp<<x.se.fi<<sp<<x.se.se<<dl;
    }

    // vs srl={"A+","A-","AB+","AB-","B+","B-","O+","O-"};

    // map<S,int>bld;
    // map<S,int>date;

    // for(auto x:mp)
    // {
    //     bld[x.se.se]++;

    //     S dd=x.se.fi;

    //     S dq=dd.substr(6,10);

    //     cerr<<dq<<dl;
    //     date[dq]++;

    // }

    // for(auto x:srl)
    // {
    //     cout<<x<<sp<<bld[x]<<dl;
    // }

    // for(auto x:date)
    // {
    //     cout<<x.fi<<sp<<x.se<<dl;
    // }






}

int main()
{
    Boost;

    int t=1;      // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
