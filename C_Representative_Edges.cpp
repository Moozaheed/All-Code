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

bool doublepre(double a,double b)
{
//#define EPS 1e-10;
return (abs(a-b)<EPS);
}


void Boom()
{
    //Let's Move
     int n;
        cin>>n;
        double ar[n];
        for(int i=0; i<n; i++)cin>>ar[i];
        int mx=0;
        int c=2;
        if(n<=2)
        {
            cout<<0<<endl;
            return;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==i)continue;
                else
                {
                    double d=(ar[j]-ar[i])/(j-i);
                    double a=ar[i]-(i*d);
                    for(int k=0; k<n; k++)
                    {
                        if(k==i||k==j)continue;
                        if(doublepre(ar[k],a+(k*d)))c++;
                        //if(abs(ar[k]-a+(k*d))<0.00000001)c++;
                    }
                    //cout<<c<<" ";
                    mx=max(mx,c);
                    c=2;
                }
            }
        }
        cout<<n-mx<<endl;

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
