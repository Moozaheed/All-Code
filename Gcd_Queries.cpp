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
 
int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

void Boom()
{
    //Let's Move
        int n,q;
        cin>>n>>q;
        int ar[n+3];
        for(int i=1;i<=n;i++)cin>>ar[i];
        int pre[n+2];
        int pos[n+3];
 
        pre[0]=0;
        for(int i=1;i<=n;i++)pre[i]=gcd(pre[i-1],ar[i]);
 
        pos[n+1]=0;
        for(int i=n;i>=1;i--)
        {
            pos[i]=gcd(pos[i+1],ar[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<dl;
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