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
    
  int t;
  cin>>t;
  while(t--)
  {
     int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];

   string str;
   cin>>str;

   map<int,char>fi;

   bool flag=false;
   for(int i=0;i<n;i++)
   {
    if(fi[arr[i]]==0)
    {
        fi[arr[i]]=str[i];
    }
    else
    {
        if(str[i]!=fi[arr[i]])flag=true;
    }
   }

   if(flag)cN;
   else cY;
  }




   
}

int main() 
{ 
    Boost;

    Boom();
    

    return 0;

} 