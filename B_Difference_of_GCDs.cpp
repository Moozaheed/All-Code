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



 ll int maxxx(ll int a,ll int b)
 {
    if(a>b)return a;
    return b;
 }

 
 
 ll int ceil(ll int x,ll int y)
{
    return (x+(y-1))/y;
}



void Boom()
{
    //Let's Move


    ll int n,l,r;
    cin>>n>>l>>r;
    
    if(n==1)
    {
        cY;
        cout<<l<<dl;
        return;
    }
    ll int pp=0;
    ll int arr[n+4];
    map<ll int,ll int>mp;
    for(ll int i=n;i>=n/2;i--)
    {
       ll int zz=ceil(l,i);
       //cerr<<zz<<sp;
       ll int tt=zz*i;
       while(mp[tt])
       {
        zz++;
        tt=zz*i;
       }
       zz=tt;

       //cerr<<zz<<sp;

ll int root=sqrt(i);

  for (int ii=1; ii<=root; ii++)
    {

        if (i%ii == 0)
        {
                arr[ii]=zz;
                arr[i/ii]=zz;

        }
    }

    pp=maxxx(pp,zz);

    }


if(pp>r)cN;
else
{
cY;
for(ll int i=1;i<=n;i++)cout<<arr[i]<<sp;
cout<<dl;
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
