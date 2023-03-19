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
#define cY cout<<"Peaceful\n"
#define cN cout<<"Fight\n"
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

    ll int a,b,c,k;
    cin>>a>>b>>c>>k;

    ll int sum=a+b+c;
    ll int tt=sum/3;

    if(a==b && b==c)
    {
        cY;
        return;
    }

    if(sum%3==0 && abs(a-b)%k==0 && abs(b-c)%k==0 && abs(a-c)%k==0 && sum!=max({a,b,c}))
    {
        if(abs(a-tt)%k==0 && abs(b-tt)%k==0 &&abs(c-tt)%k==0)cY;
        else cN;
    }
    else cN;






}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        Boom();
    }

    return 0;

}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
    long long a,b,c,k;
    cin>>a>>b>>c>>k;

    long long s=a+b+c;
    long long kk=s/3;

    if(a==b && b==c)
    {
        cout<<"Case "<<i++<<": "<<"Peaceful"<<endl;
        return 0;
    }

    if(s%3==0 && abs(a-b)%k==0 && abs(b-c)%k==0 && abs(a-c)%k==0 && s!=max(a,max(b,c)))
    {
        if(abs(a-kk)%k==0 && abs(b-kk)%k==0 &&abs(c-kk)%k==0)  cout<<"Case "<<i++<<": "<<"Peaceful"<<endl;
        else cout<<"Case "<<i++<<": "<<"Fight"<<endl;
    }
    else   cout<<"Case "<<i++<<": "<<"Fight"<<endl;
    }

}