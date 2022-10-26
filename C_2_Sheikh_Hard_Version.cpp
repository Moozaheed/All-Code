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

    ll int n,q;
    cin>>n>>q;

    ll int arr[n+1]={};
    ll int pre[n+1]={},xo[n+1]={};

    ll int sum=0,x=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i==1)pre[i]=xo[i]=arr[i];
        else pre[i]=pre[i-1]+arr[i],xo[i]=xo[i-1]^arr[i];
    }
   

   // cerr<<mx<<dl;

    


    while(q--)
    {
        ll int l,r;
        cin>>l>>r;

        ll int mx=(pre[r-1]-pre[l-1])-(xo[r-1]^xo[l-1]);

        //ll int l=1,r=n;
    int ansl=l,ansr=r;
    int p=l;
    int q=r;

     while(l<=r)
        {
            int mid=(l+r)/2;
            bool ok=false;

            for(int i=p;i<=q-mid+1;i++)
            {
                if((pre[i+mid-1]-pre[i-1])-(xo[i+mid-1]^xo[i-1])==mx)
                {
                    ansl=i;
                    ansr=i+mid-1;
                    ok=true;
                    break;
                }
            }

            if(ok)r=mid-1;
            else l=mid+1;
        }



        cout<<ansl<<sp<<ansr<<dl;
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
