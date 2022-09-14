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




void Boom()
{
    //Let's Move
    
    ll int a,b,c;
    cin>>a>>b>>c;
    ll int arr[a],brr[b],crr[c];

    for(int i=0;i<a;i++)cin>>arr[i];

    reverse(arr,arr+a);
    for(int i=0;i<a;i++)
    {
        if(i)
        {
            arr[i]+=arr[i-1];
        }
    }

    for(int i=0;i<b;i++)cin>>brr[i];
    reverse(brr,brr+b);
    for(int i=0;i<b;i++)
    {
        if(i)
        {
            brr[i]+=brr[i-1];
        }
    }

    for(int i=0;i<c;i++)cin>>crr[i];
    reverse(crr,crr+c);
    for(int i=0;i<c;i++)
    {
        if(i)
        {
            crr[i]+=crr[i-1];
        }
    }

    // for(auto x:arr)cerr<<x<<sp;
    // cerr<<dl;
    
    // for(auto x:brr)cerr<<x<<sp;
    // cerr<<dl;
    
    // for(auto x:crr)cerr<<x<<sp;
    // cerr<<dl;


    for(int i=a-1;i>=0;i--)
    {
        ll int k=arr[i];
        bool ok1=binary_search(brr,brr+b,k);
        bool ok2=binary_search(crr,crr+c,k);
        if(ok1 && ok2)
        {
            cout<<k<<dl;
            return;
        }
    }

    cout<<0<<dl;

}

int main()
{
    Boost;

    int t=1;     // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
