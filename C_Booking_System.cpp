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

// if(a.x>b.x && a.y>b.y)return a.x>b.x;
// if(a.x<b.x && a.x>b.y)return a.y>b.y;
// return ;

if(a.y>b.y)return a.y>b.y;
if(a.y==b.y)return a.x<b.x;
return false;


}
bool comp1(pair<int,int>a,pair<int,int>b)
{
    if(a.fi>b.fi)return a.fi>b.fi;
    if(a.fi==b.fi)return a.se<b.se;
    return false;
}


void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    vector<op>data;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        data.pb({x,y,i+1});
    }
    int k;
    cin>>k;
    vector<pair<int,int>>ta;
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        ta.pb(mp(x,i+1));
    }
    sort(all(data),comp);
    sort(all(ta));
 //  for(auto o:data)
//  cerr<<o.x<<sp<<o.y<<sp<<o.z<<dl;
//     for(auto o:ta)cerr<<o.fi<<sp<<o.se<<dl;
   int m=0,s=0;
   vector<pair<int,int>>ans;
    for(int i=0;i<n;i++)
    {
        pair<int ,int>ba;
        ba={data[i].x,0};
        auto it=lower_bound(all(ta),ba);
        if(it!=ta.e())
        {
            m++;
            s+=data[i].y;
            ans.pb(mp(data[i].z,it->se));
           ta.erase(it);
            
            
        }
    }

cout<<m<<sp<<s<<dl;
for(auto o: ans)
cout<<o.fi<<sp<<o.se<<dl;
   



   
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