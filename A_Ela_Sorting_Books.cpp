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

char fun(S str)
{
 map<char,bool>xp;

 for(auto x:str)xp[x]=true;

 for(char i='a';i<='z';i++)
 {
    if(xp[i]==false)return i;
 }
 return 'z';
}


void Boom()
{
    //Let's Move

    int n,k;
    cin>>n>>k;
    S str;
    cin>>str;
    S s="";

    map<char,int>mp;

    for(auto x:str)mp[x]++;



    int cnt = n / k;
    S ans = "";
    for (int i = 0; i < k; i++)
    {
        S tmp = "";
        for (auto k : mp)
        {
            if(tmp.size()==cnt) break;
            if (k.se > 0)
            {
                tmp += k.fi;
                mp[k.fi]--;
            }
        }

        ans.pb(fun(tmp));
    }

    cout<<ans<<dl;




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