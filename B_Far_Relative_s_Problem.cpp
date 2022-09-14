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

struct op
{
    char x;
    int y,z;
};
void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    vector<op>data;
    for(int i=0;i<n;i++)
    {
        char x;
        int y,z;
        cin>>x>>y>>z;
        data.pb({x,y,z});
    }
    //for(auto X:data)
   int ans=0;
   for(int i=1;i<=366;i++)
   {
       int cntm=0,cntf=0;
       for(int j=0;j<n;j++)
       {
           if(data[j].y<=i && data[j].z>=i)
           {
               if(data[j].x=='M')cntm++;
               else cntf++;
           }
       }
       int k=min(cntf,cntm);
       ans=max(ans,2*k);
   }


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