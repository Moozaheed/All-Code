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
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;

ll bs_sqrt(ll x) {
  ll left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;
      
      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}


void Boom()
{
    //Let's Move

    ll int l,r;
    cin >> l >> r;
    ll sql = bs_sqrt(l), sqr =bs_sqrt(r);
    ll ans=0;
    if (sql == sqr) 
    {
        for (int i = 0; i < 3; i++) 
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r) ans++;
        }
    } 
    else 
    {
        ans = (sqr - sql - 1) * 3;
        for (int i = 0; i < 3; i++) 
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r) ans++;
            if (l <= sqr * (sqr + i) && sqr * (sqr + i) <= r) ans++;
        }
    }
    cout << ans << dl;




}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
