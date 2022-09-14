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
    int n;
    cin>>n;
    map<int ,int>ma;
    vector<int>data;
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        data.pb(x);
        ma[x]++;
        if(ma[x]>=n/2)ok=true;
    }
   if(ok)
   {
       cout<<-1<<dl;
       return;
   }
    sort(all(data));
    vector<int>::iterator ip;
    ip = unique(data.begin(),data.end());
    data.resize(distance(data.begin(), ip));
//map<int ,vector<int>>maap;
vector<int>gc;
    for(int i=0;i<data.size();i++)
    {
        int k=data[i+1]-data[i];
        gc.pb(k);
    }
    map<int,int>kk;
    for(int i=0;i<gc.size();i++)
    {
        for(int j=i+1;j<gc.size();j++)
        {
            kk[__gcd(gc[i],gc[j])]++;
        }
    }
for(auto itt=ma.e();itt!=ma.b();itt--)
 
    {
           for(auto it=kk.e();it!=kk.b();it--)
        {
            if(itt->se+it->se>=n/2)
            {
                cout<<it->fi<<dl;
                return;
            }
        }
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