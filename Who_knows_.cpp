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
    int x,y,z;
};

bool comp(op a,op b)
{
//true -- change
//fasle -- no change
if(a.z<b.z)return 1;
if(a.z==b.z)return a.x<b.x;
return 0;
}



void Boom()
{
    //Let's Move
    int n,p;
    cin>>n>>p;
    vi data;
    data.pb(p);
    vector<op>maap;
    map<int,bool>ase;
    ase[p]=true;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
       // if(x<y)swap(x,y);
        maap.pb({x,y,z});
    }
    
    sort(all(maap),comp);

//  for(int i=0;i<n;i++)
//     cerr<<maap[i].x<<sp<<maap[i].y<<sp<<maap[i].z<<dl;
   
    for(int i=0;i<n;i++)
   {
       if(ase[maap[i].x])
       {
         //  debug(i);
        data.pb(maap[i].y);
        //data.pb(maap[i].x);
        ase[maap[i].y]=true;
       // ase[maap[i].x]=true;
       }
       else if(ase[maap[i].y])
       {
           data.pb(maap[i].x);
           ase[maap[i].x]=true;
       }
   }
vector<int>::iterator ip;
ip = unique(data.begin(),data.end());
data.resize(distance(data.begin(), ip));
cout<<data.size()<<dl;
for(auto o:data)cout<<o<<sp;
cout<<dl;




   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<dl;
        Boom();
    }

    return 0;

} 