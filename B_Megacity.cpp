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
 

double distance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

struct Test
{
   int x, y, z;
};

bool comp(Test X,Test Y)
{
    // if(Y.x<X.x || Y.y<X.y)return false;
    // if(Y.x==X.x && Y.y<X.y)return false;
    // if(Y.x<X.x)return false;
    // if(Y.y<X.y)return false;
    // else true;

//true -- change
//fasle -- no change
int k=X.x+X.y;
int kk=Y.x+Y.y;


  return k<kk;
 // else if(X.x==Y.x) return true;
  //else return false;
}

void Boom()
{
    //Let's Move
    ll int n,s;
    cin>>n>>s;
    vector<Test> data;
    int sum=0;
    vi mm;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        x=abs(x);
        y=abs(y);
        data.pb({x,y,z});
       // sum+=z;
        //if(mm.size()==0)
       // mm.pb(sum);

    }
    
    int k=1000000-s;

//     for(int i=0;i<n;i++)
//     {
//         sum+=data[i].z;
//         mm.pb(sum);
//     }
    // if(s+sum<1000000)
    // {
    //     cout<<-1<<dl;
    //     return;
    // }
    //cerr<<k<<dl;
 //  for(auto x:mm)cerr<<x<<sp;
  // cerr<<dl;
   // sort(all(data),comp);
   vector<pair<double,int>>ee;
    for (int i=0;i<n;i++)
    {
    ee.pb(mp(distance(0,0,data[i].x,data[i].y),data[i].z));
    }
    sort(all(ee));
   // for(auto x:ee)cout<<x.fi<<sp<<x.se<<dl;
    for(auto x:ee)
    {
        k-=x.se;
        if(k<=0)
        {
            cout<<setp(7)<<fixed<<x.fi<<dl;
            return;
        }
    }
    cout<<-1<<dl;



//     int it=lower_bound(all(mm),k)-mm.b();
//     if(it==n)it--;
//    // cerr<<it<<dl;
//     int pp=data[it].x;
//     int qq=data[it].y;
//     //cout<<pp<<sp<<qq<<dl;
//    cout<<setp(7)<<fixed<<distance(0,0,pp,qq)<<dl;

   



   
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