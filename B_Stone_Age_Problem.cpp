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

    int n,q;
    cin>>n>>q;
    ll int ans=0;
    ll int arr[n+1];
    int cnn[n+1];

    for(int i=1;i<=n;i++)
    {
        cnn[i]=0;
        cin>>arr[i];
        ans+=arr[i];
    }

    vector<ll int>mpp;
    ll int temp=0;
    while(q--)
    {
      ll int t,i,x;
      cin>>t;
      if(t==1)
      {
        cin>>i>>x;
        if(cnn[i])
        {
          ans-= arr[i];
          ans+= x;
          arr[i] = x;
        }
        else
        {
          cnn[i]=1;
          if(temp==0)ans-=arr[i];
          else ans-=temp;

          ans+=x;
          arr[i] = x;
          mpp.pb(i);
        }
      }

      else
      {
        cin>>x;
        for(auto i:mpp)
        {
          cnn[i] = 0;
        }
        mpp.clear();
        temp=x;
        ans=x*n;
      }
      cout<<ans<<dl;
    }
}

int main()
{
    Boost;

    int t=1;      // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}


