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

S str;
bool palin(int l,int r)
{
    if(l>=r)return true;
    if(str[l]==str[r])return palin(l+1,r-1);
    return false;
}
void Boom()
{
    //Let's Move
    cin>>str;

    if(palin(0,str.size()-1))cy;
    else
    {
        //
        int i=0;
        bool ok1=false,ok2=false;
        int k1=0;
        int k2=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='a' && ok1==false)
            {
                k1++;
            }
            else ok1=true;
            if(str[str.size()-1-i]=='a' && ok2==false)k2++;
            else ok2=true;

            
        }
        //cerr<<k1<<sp<<k2<<dl;
        reverse(all(str));
        if(k1<k2)
        {
            for(int i=0;i<k2-k1;i++)str.pb('a');
        }
       // cerr<<str<<dl;
        if(palin(0,str.size()-1))cy;
        else cn;
    }
   



   
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