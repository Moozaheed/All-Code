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

int arr[3];
void Boom()
{
    //Let's Move   
    char x,y,z;
    int t=3;
    while(t--)
    {
        cin>>x>>y>>z;
        cout<<x<<y<<z<<dl;
        if(y=='>')
        {
            arr[x-'a']++;
            arr[z-'a']--;
        }
        else
        {
            arr[x-'a']--;
            arr[z-'a']++;
        }
    }
    for(auto x:arr)cerr<<x<<sp;
    if(arr[0]==arr[1] || arr[1]==arr[2] || arr[2]==arr[0])
    {
        cout<<"Impossible"<<dl;
        return;
    }
    else
    {
        cout<<min_element(arr,arr+3)-arr+'a';
        int x=min_element(arr,arr+3)-arr;
        arr[x]=INT_MAX;
        cout<<min_element(arr,arr+3)-arr+'a';
        x=min_element(arr,arr+3)-arr;
        arr[x]=INT_MAX;
        cout<<min_element(arr,arr+3)-arr+'a';
        cout<<dl;
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

    return 0;

}   