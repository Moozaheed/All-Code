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

    ll int n;
    cin>>n;

    ll int arr[n];
    ll int cnt3=0;
    ll int k=0;
    ll int x=-1;
    ll int y=-1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]==1)k++;
        else cnt3+=k;

        if(arr[i]==1)y=i;
        if(x==-1 && arr[i]==0)x=i;
    }

    ll int cnt=0;
    ll int j=0;
    if(y!=-1)
    {
        arr[y]=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)j++;
            else cnt+=j;
        }
        arr[y]=1;
    }

    ll int cnt2=0;
    j=0;
    if(x!=-1)
    {
        arr[x]=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)j++;
            else cnt2+=j;
        }
    }

    ///cerr<<cnt<<sp<<cnt2<<dl;

    cout<<max({cnt3,cnt2,cnt})<<dl;


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




ll n,flag=0;
  cin>>n;
    if(n==1)cN;
    else if(n==2)cY;
    else if(n%2==0)cN;
    else{
        for(int i=3;i*i<=n;i++)
  {
      if(n%i==0){
            flag=1;break;}
  }
  if(flag==0)cY;

  else
    cN;
    }