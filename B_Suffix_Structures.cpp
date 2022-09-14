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
    S str,ttr;
    cin>>str>>ttr;
    map<char,int>data;
    for(int i=0;i<str.size();i++){
        data[str[i]]++;
    }
   
    map<char,int>data1;
    for(int i=0;i<ttr.size();i++){
        data1[ttr[i]]++;
    }

    bool ok=false;
    bool ok2=false;
    for(auto it=data1.begin();it!=data1.end();it++)
    {
        char x=it->fi;
        int k=it->se;
        if(data[x]<k)ok=true;
     //   if(data[x]!=k)ok2=true;
    }
    if(ok)
    {
        cout<<"need tree"<<dl;
        return;
    }
    // if(ok==false){
    //     if(data1.size()==data.size())
    //     {
    //         cout<<"array"<<dl;
    //         return;
    //     }
    // }
    S str1=str,ttr1=ttr;
    sort(all(str1));
    sort(all(ttr1));
     if(str1==ttr1)
        {
            cout<<"array"<<dl;
            return;
         }
  //  cerr<<str<<sp<<ttr;
  int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(j==ttr.size())break;
        if(str[i]==ttr[j])
        {
            j++;
        }
        else ok2=true;
    }
    
    if(j==ttr.size())cout<<"automaton"<<dl;
    else
cout<<"both"<<dl;



   
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