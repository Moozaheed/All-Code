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

bool fun(int arr[],int n,int mid)
{
    multiset<int>ss;
    for(int i=0;i<n;i++)ss.in(arr[i]);

    //cerr<<mid<<" Mid ";
    for(mid;mid>=1;mid--)
    {

        // for(auto x:ss)cerr<<x<<sp;
        // cerr<<dl;

        if(*ss.b()>mid)return false;

        auto it=upper_bound(all(ss),mid);
        it--;
        
        ss.erase(it);
        if(ss.size()==0)
        {
            mid--;
            break;
        }
        
        int k=*ss.b();
        ss.erase(ss.b());
        ss.in(k+mid);


    }
    if(mid==0)return true;
    return false;
    
}


void Boom()
{
    //Let's Move

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int l=1,r=n;
    int ans=0;
    while(l<=r)
    {
        //cerr<<l<<sp<<r<<dl;
        int mid=(l+r)/2;
        //cerr<<mid<<sp;
        if(fun(arr,n,mid))
        {
            
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;

        
    }

    cout<<ans<<dl;




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

