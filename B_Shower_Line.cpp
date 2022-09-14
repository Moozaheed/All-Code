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
     int arr[6][6];
void Boom()
{
    //Let's Move

    int a[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
   for(int i=1;i<6;i++)
   {
       for(int j=1;j<6;j++)cin>>arr[i][j];
   }
    ll ans=0;
    do {
        ll int cnt=arr[a[0]][a[1]]+arr[a[1]][a[0]]+arr[a[2]][a[3]]+arr[a[3]][a[2]]+arr[a[2]][a[1]]+arr[a[1]][a[2]]+arr[a[4]][a[3]]+arr[a[3]][a[4]]+arr[a[2]][a[3]]+arr[a[3]][a[2]]+arr[a[3]][a[4]]+arr[a[4]][a[3]];
      //  debug(cnt);
        ans=max(ans,cnt);
    } while (next_permutation(a, a + 5));
 cout<<ans<<dl;



   
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