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
   S str;
   int l;
   int r;
int fun(S s1,S s2)
{
    cerr<<s1<<sp<<s2<<dl;
    if(l==-1)
    {
        cout<<"D"<<dl;
        return 0;
    }
    if(s1<s2){cout<<"A"<<dl;return 0;}
    if(s1>s2){cout<<"B"<<dl;return 0;}
    
    if(str[l]<str[r])
    {
        s1.pb(str[l]);
        l--;
    }
    else
    {
        s1.pb(str[r]);
        r++;
    }
    if(str[l]<str[r])
    {
        s2.pb(str[l]);
        l--;
    }
    else
    {
        s2.pb(str[r]);
        r++;
    }
    fun(s1,s2);
}


void Boom()
{
    //Let's Move
    
 
    cin>>str;

    r=str.size()/2;
    l=r-1;
   S s1,s2;
    
    fun(s1,s2);

cout<<s1<<dl<<s2<<dl;



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
