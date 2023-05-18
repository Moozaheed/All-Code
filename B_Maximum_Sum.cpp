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

ll int ans=0;

ll int fun(ll int arr[],ll int l,ll int r,ll int k,ll int sum)
{
    if(k==0)
    {
        ans=max(ans,sum);
        return ans;
    }

    ll int p=arr[l]+arr[l+1];

    fun(arr,l+2,r,k-1,sum-p);
    fun(arr,l,r-1,k-1,sum-arr[r]);

}


void Boom()
{
    //Let's Move

    ll int n,k;
    ans=0;
    cin>>n>>k;
    ll int arr[n],sum=0;

    for(ll int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];

    sort(arr,arr+n);

    

   
   for(int i=1;i<n;i++)
   {
        arr[i]+=arr[i-1];
   }

//    for(auto x:arr) cerr<<x<<sp;
//     cerr<<dl;

   ll int mx=0;
   for(int i=0;i<=k;i++)
   {
    ll int p=i*2;
    ll int q=n-(k-i);
    q--;

    //cerr<<p<<sp<<q<<sp;
    if(p==0)ans=arr[q];
    else ans=arr[q]-arr[p-1];

   // cerr<<ans<<dl;
    mx=max(ans,mx);
   }

   cout<<mx<<dl;



    //cout<<fun(arr,0,n-1,k,sum)<<dl;




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
