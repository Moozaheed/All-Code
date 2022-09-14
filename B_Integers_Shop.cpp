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
 struct st
 {
     int x,y,z;
     /* data */
 };
 






void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    vector<st>data;
   // vector<st>so;

    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        data.pb({x,y,z});
     //   so.pb({x,y,z});
    }
    int mn,mx,py;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mn=data[i].x;
            mx=data[i].y;
            py=data[i].z;
            cout<<py<<dl;
        }

        else
        {
            if(data[i].x>mn)
            {
                cout << data[i].z + data[0].x << dl;
                mx=max(mx,data[i].y);
                py=data[i].z + data[0].x ;
            }
            else if(data[i].y<mx)
            {
               mx=data[i].y;
               cout<<py<<dl;
            }
            else cout<<data[i].z<<dl;
           // cout<<py<<dl;

        }
    }


   



   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 