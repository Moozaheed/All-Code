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
 bool arr[102][102];
 int n,m;
 
 int ceil(int x,int y)
 {
     return (x+(y-1))/y;
 }
void Boom()
{
    //Let's Move
    
    
    cin>>n>>m;

    int k=pow(n,2);
    k=ceil(k,2);
    if(m>k || m==0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                {
                    here
                    arr[i][j]=1;
                    m--;
                    if(m==0)return;
                }
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==1)
                {
                    arr[i][j]=1;
                    m--;
                    if(m==0)return;    
                }
            }
        }
    }



   



   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }
    if(m!=0)cN;
    else{
        cY;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==0)cout<<'S';
                else cout<<'L';
            }
            cout<<dl;
        }
    }

    return 0;

} 