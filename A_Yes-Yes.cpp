//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define vi vector<ll int>
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

    string str;
    cin>>str;
    if(str.size()==1)
    {
        if(str[0]=='Y' || str[0]=='e' || str[0]=='s')cY;
        else cN;
        return;
    }

    for(int i=0;i<str.size()-1;i++)
    {
        if((str[i]=='Y' && str[i+1]=='e') || (str[i]=='e' && str[i+1]=='s') ||(str[i]=='s' && str[i+1]=='Y'))continue;
        else{
            cN;
            return;
        }
    }

    cY;
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



