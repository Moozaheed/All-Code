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
#define maxx 10000005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;

bool prime[maxx];
vector<int>datt;
map<int,bool>kk;
void pp()
{
prime[0]=prime[1]=true;
for (int p = 2; p * p < maxx; p++)
{
    if (prime[p] == false)
    {
        for (int i = p * p; i <= maxx; i += p)
            prime[i] = true;
    }
}

for(int i=0;i<maxx;i++)
{
    if(!prime[i])
    {
        datt.pb(i);
        kk[i]=true;
    }
}

}
void Boom()
{
    //Let's Move
    
   int n;
   cin>>n;
   if(!prime[n])
   {
       cout<<0<<dl;
       return;
   }
   int cnt=0;
   for(int i=0;datt[i]<=n/2;i++)
   {
       int p=datt[i];
       int q=n-p;
       if(kk[p] && kk[q])
       {
           cnt++;
       }
   }

   cout<<cnt<<dl;



   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    pp();
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        Boom();
    }

    return 0;

} 

 
//__gcd(a,b);

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

 
int lcm(int a, int b) 
{
  return (a / gcd(a, b)) * b;
  
  //return (a / __gcd(a, b)) * b;
}
