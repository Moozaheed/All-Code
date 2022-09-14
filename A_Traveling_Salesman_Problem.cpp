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
#define bb() begin()
#define e() end()
#define cY cout<<"YES\nn"
#define cN cout<<"NO\nn"
#define cy cout<<"Yes\nn"
#define cn cout<<"No\nn"
#define setp(nn) setprecision(nn)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\nn");
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
    

    ll int nn;
    cin>>nn;


    ll int ar[4]={0,0,0,0};

    while(nn--)
    {
       ll int aa,bb;
        cin>>aa>>bb;
        if(!aa)
        {
            if(bb>0)ar[2]=max(ar[2],bb);
            else ar[3]=max(ar[3],abs(bb));
        }
        if(!bb)
        {
            if(aa>0)ar[0]=max(ar[0],aa);
            else ar[1]=max(ar[1],abs(aa));
        }
    }

    ll int k=ar[0]+ar[1]+ar[2]+ar[3];
    cout<<k*2<<dl;



   



   
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