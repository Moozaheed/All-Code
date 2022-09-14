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
    
     int m,n;
   cin>>n>>m;
   map<int ,int>data;
    map<int ,int>data2;
   for(int i=1;i<=n;i++)
   {
    data[i]=0;
   }
   for(int i=1;i<=n;i++)
   {
    data2[i]=0;
   }
   int cc=0;
   while(m--)
   {
    int a,b,c;
    
    cin>>a>>b>>c;
    cc+=c;
    data[a]=data[a]+c;
    data2[b]=data2[b]+c;
   }
  // cerr<<cc<<dl;
   int sum=0,sum1=0;
   int mxx=INT_MIN;
    for(auto it=data.begin(),it1=data2.begin();it!=data.end();it++,it1++)
    {
        //cerr<<it->se<<sp<<it1->se<<sp<<it->se-it1->se<<dl;
        if(it->se-it1->se>0)
            sum1+=abs(it->se-it1->se);
    }
   /*FOR(data)
   {
    if(it->se>mxx)mxx=it->se;
    sum=sum+it->se;
   }*/
  // cout<<sum<<sp<<mxx<<dl;
    cout<<sum1<<dl;



   



   
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