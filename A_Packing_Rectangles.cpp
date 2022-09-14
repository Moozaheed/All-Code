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
ll w, h, n;
 
bool ok(ll x)
{
    return ((((x/w) * (x/h)) >= n));
}
void Boom()
{
    //Let's Move
  
    cin >> w >> h >> n;
 
    ll r = 1;
    ll i = 2;
    while(1){
        if(((r / w) * (r / h)) >= n){
            break;
        }
        else{
            r *= i;
        }
    }   
    //cout << r << endl;
    ll l = 1;
 
    ll mid;
 
    while(r > l + 1){
        mid = (r + l) / 2;
       // cerr <<l << " " << mid << " " << r << endl;
        if(ok(mid)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout << r << endl;
 
   



   
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