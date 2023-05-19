//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
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
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 1000005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;

int primes[maxx];
void fn() {
   primes[1] = 1;
   for (int i=2; i<maxx; i++)
      primes[i] = i;
   for (int i=4; i<maxx; i+=2)
      primes[i] = 2;
   for (int i=3; i*i<maxx; i++) {
      if (primes[i] == i) {
         for (int j=i*i; j<maxx; j+=i)
            if (primes[j]==j)
               primes[j] = i;
      }
   }
}
 


void Boom()
{
    //Let's Move
    ll n,m;
    cin>>n>>m;
    if(n==1 || m==1)cY; 
    else if(m>=n)cN;
    else if(n%2==0)cN;
    else
    {
        if(m>=primes[n])cN; 
        else cY;
    }
    




}

int main()
{
    Boost;
    fn();

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}