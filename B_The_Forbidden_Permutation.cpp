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

bool fun(int arr[],int m,int d)
{
    return arr[m]<arr[m+1] && arr[m+1]<=arr[m]+d;
}


void Boom()
{
    //Let's Move

    int n,m,d;
    cin>>n>>m>>d;
    int arr[n+10],pos[m+10];
    
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=m;i++)cin>>pos[i];

    int cnt=0;
    for(int i=1;i<=n-1;i++)
    {
        swap(arr[i],arr[i+1]);
        for(int j=1;j<=m;j++)
        {
            if(!fun(arr,pos[j],d))cnt++;
        }
        //swap(arr[i],arr[i+1]);
        
    }

    cout<<cnt<<dl;




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
