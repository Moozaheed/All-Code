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
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 
void Boom()
{
    //Let's Move
   


     ll int n,m;
     cin>>n>>m;
     ll int arr[n+1];
     for(int i=1;i<=n;i++)cin>>arr[i];


     ll int arr2[n];

     arr2[0]=0;
     arr2[1]=0;


     for(int i=2;i<=n;i++)
     {
        if(arr[i]>arr[i-1])arr2[i]=0;
        else arr2[i]=abs(arr[i]-arr[i-1]);
        arr2[i]=arr2[i]+arr2[i-1];

     }

ll int arr3[n];

     arr3[0]=0;
     arr3[1]=0;

     for(int i=2;i<=n;i++)
     {
        if(arr[i]<arr[i-1])arr3[i]=0;
        else arr3[i]=abs(arr[i]-arr[i-1]);
        arr3[i]=arr3[i]+arr3[i-1];

     }






     for(int i=0;i<m;i++)
     {
        ll int p,q;
        cin>>p>>q;
        if(p<q)cout<<arr2[q]-arr2[p]<<dl;
        else
            cout<<arr3[p]-arr3[q]<<dl;
      
     }


   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    //Input;
    //Output;
    #endif


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    //time;
    return 0;

} 