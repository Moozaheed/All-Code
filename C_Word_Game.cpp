//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define maa make_pair
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
    
    int n;
    cin>>n;
    vs str1,str2,str3;
    map<string,int> maa;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        str1.pb(str);
        maa[str]++;
    }
    
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        str2.pb(str);
        maa[str]++;
    }
    
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        str3.pb(str);
        maa[str]++;
    }

    int sum1=0;

    for(int i=0;i<n;i++)
    {
        if(maa[str1[i]]==1)sum1+=3;
        if(maa[str1[i]]==2)sum1+=1;
    }

    cout<<sum1<<sp;
    int sum2=0;

    for(int i=0;i<n;i++)
    {
        if(maa[str2[i]]==1)sum2+=3;
        if(maa[str2[i]]==2)sum2+=1;
    }
    
    cout<<sum2<<sp;
    int sum3=0;
    for(int i=0;i<n;i++)
    {
        if(maa[str3[i]]==1)sum3+=3;
        if(maa[str3[i]]==2)sum3+=1;
    }
    
    cout<<sum3<<dl; 




}

int main()
{
    Boost;

    int t=1;      cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
