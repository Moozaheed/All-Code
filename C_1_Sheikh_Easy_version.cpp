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


int sum(ll int a)
{
    return (a+a)-(a^a);

}

int sum1(ll int a,ll int b)
{
    return (a+b)-(a^b);

}


int sum2(ll int a,ll int b,ll int c)
{
    return (a+b+c)-(a^b^c);

}


void Boom()
{
    //Let's Move

    ll int n,q;
    cin>>n>>q;

    ll int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    while(q--)
    {
        int s,t;
        int a,b;
        cin>>a>>b;
        a--,b--;
        
        ll int mx=0;
        for(int i=a;i<=b;i++)
        {
            ll int p=sum(arr[i]);
            if(p>mx)
            {
                mx=p;
                s=i+1;
                t=i+1;
            }
        }

        for(int i=a;i+1<=b;i++)
        {
            ll int p=sum1(arr[i],arr[i+1]);
            if(p>mx)
            {
                mx=p;
                s=i+1;
                t=i+2;
            }
        }

        for(int i=a;i+2<=b;i++)
        {
            ll int p=sum2(arr[i],arr[i+1],arr[i+2]);
            if(p>mx)
            {
                mx=p;
                s=i+1;
                t=i+3;
            }
        }
        cout<<s<<sp<<t<<dl;



    }



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
