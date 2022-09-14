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
   vector<ll int> a(n);
   for(int i=0;i<n;i++)  cin>>a[i];

   S s;
   cin>>s;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]<0 && s[i]=='B')
//        {
//            cN;
//            return;
//        }
//        else if(a[i]>n && a[i]=='R')
//        {
//            cN;
//            return;
//        }
//    }
    vector<ll int> blue,red;
    for(int i=0;i<n;i++)
    if(s[i]=='B') blue.pb(a[i]);
    else red.pb(a[i]);
 
    sort(all(blue));
    sort(all(red));
    ll i=0,j=0;
    ll cnt = 1;
    bool ok = false;
    while(i<blue.size() && j<red.size())
    {
        if(blue[i]>=cnt) i++;
        else if(red[j]<=cnt)  j++;
        else
        {
            ok =true;
            break;
        }
        cnt++;
    }
 
    // if(ok)
    // {
    //     cN;
    //     return;
    // }
 
    while(j<red.size())
    {
        if(red[j]>cnt)
        {
            ok = true;
            break;
        }
        cnt++;
        j++;
    }
 
    // if(ok==0){
    //    cN;
    //    return;
    // }
 
    while(i<blue.size())
    {
        if(blue[i]<cnt) 
        {
            ok=true;
            break;
        }
        cnt++;
        i++;
    }
    if(ok) cN;
    else cY;
   



   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 