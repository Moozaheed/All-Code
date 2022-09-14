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
 
void Boom()
{
    //Let's Move
    ll int n;
    cin>>n;
   ll int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(auto x:arr)cerr<<x<<sp;
    // cerr<<dl;
   ll int arr2[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr2[i];
    }
    // for(auto x:arr2)cerr<<x<<sp;
    // cerr<<dl;
   ll int arr3[n-2];
    for(int i=0;i<n-2;i++)
    {
        cin>>arr3[i];
    }
    // for(auto x:arr3)cerr<<x<<sp;
    // cerr<<dl;
    sort(arr,arr+n);
    sort(arr2,arr2+n-1);
    sort(arr3,arr3+n-2);
//   for(auto x:arr)cerr<<x<<sp;
//     cerr<<dl;
//       for(auto x:arr2)cerr<<x<<sp;
//     cerr<<dl;
//       for(auto x:arr3)cerr<<x<<sp;
//     cerr<<dl;


    ll int ans=arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr2[i]){ans=arr[i];break;}
    }
    cout<<ans<<dl;
    ans=arr2[n-2];
    for(int i=0;i<n-2;i++)
    {
        if(arr2[i]!=arr3[i]){ans=arr2[i];break;}
    }
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