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
 
 ll int srvc(vector<ll> data1,vector<ll> data2)
 {
     for(int i=0;i<min(data1.size(),data2.size());i++)
     {
         if(data1[i]==data2[i])continue;
         if(data1[i]>data2[i])return 1;
         return 2;
    }
    return 0;
 }
void Boom()
{
    //Let's Move
   ll int n;
    cin>>n;
  ll  int sum=0;
    vector<ll> data1,data2;
  ll  int last=0;
    while(n--)
    {
       ll int x;
        cin>>x;
        sum=sum+x;
        if(x>0)data1.pb(x),last=1;
        else data2.pb(abs(x)),last=2;
    }
    if(sum>0)cout<<"first"<<dl;
    else if(sum<0)cout<<"second"<<dl;
    else{

      ll  int cnt=srvc(data1,data2);
       // cerr<<cnt;
        if(cnt==0)
        {
            if(last==1)cout<<"first"<<dl;
            else cout<<"second"<<dl;
        }
        else if(cnt==2)cout<<"second"<<dl;
        else cout<<"first"<<dl;

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