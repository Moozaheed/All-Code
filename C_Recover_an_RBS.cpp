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


bool RBS(string s)
{
    int n=s.size();
    int balance=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')balance++;
        if(s[i]==')')balance--;
        if(balance<0)return false;
    }
    return (balance==0);
}




void Boom()
{
    //Let's Move
    S s;
    cin>>s;
    int n=s.size();
    int extra=0,q=0;
 
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                q++;
            }
            else if(s[i]=='('){
                extra--;
            }
            else{
                extra++;
            }
        }
 
 
        int ope=(extra+q)/2;
        int cls=(q-extra)/2;
 
        if(ope==0 or cls==0)
        {
           // cout<<1<<sp;
            cY;
            
            return;
            //continue;
        }

        int pp;
        int qq=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(ope)
                {
                    s[i]='(';
                    ope--;    
                    pp=i;
                }
                else
                {
                    s[i]=')';
                    if(qq==-1)qq=i;
                }            
            }
          
        }
      // cerr<<s<<dl;
//cerr<<pp<<sp<<qq<<dl;
bool ok=RBS(s);
if(ok==false)
{
   // cout<<2<<sp;
    cN;
    return;
}

swap(s[pp],s[qq]);
//cerr<<s<<dl;
//cout<<3<<sp;
ok=RBS(s);
if(ok)cN;
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