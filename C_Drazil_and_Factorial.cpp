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
    S str;
    int n;
    cin>>n>>str;
    S ans;
    S s4="322",s6="53",s8="7222",s9="7332";

    for(int i=0;i<n;i++)
    {
        if(str[i]=='1'|| str[i]=='0')continue;
        else if(str[i]=='2')ans+="2";
        else if(str[i]=='3')ans+="3";
        else if(str[i]=='4')ans+=s4;
        else if(str[i]=='5')ans+="5";
        else if(str[i]=='6')ans+=s6;
        else if(str[i]=='7')ans+="7";
        else if(str[i]=='8')ans+=s8;
        else if(str[i]=='9')ans+=s9;
    }
   sort(all(ans));
   reverse(all(ans));
   cout<<ans<<dl;



   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 