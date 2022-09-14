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
  S tt="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char,int>alp;
  char pp='?';
  bool ook=false;
    bool fun (S str)
    {
        map<char,int>pp;
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='?'){cnt++;continue;}
            pp[str[i]]++;
            if(pp[str[i]]>1)return false;

        }

        int k=26-pp.size();
        if(k==0 && cnt==0){ook=true;return true;}
        if(cnt==k)return true;
        return false;
    }

    S funn(S str)
    {
        map<char,int>aa;
         vector<char>data;
       for(int i=0;i<str.size();i++)
       {
           aa[str[i]]++;
       } 
       FOR(alp)
       {
           if(aa[it->fi]==0)data.pb(it->fi);
       }
       
      // for(auto x:data)cerr<<x<<sp;
      // cerr<<dl;
        int t=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='?')
            {
                str[i]=data[t];
                t++;
            }
        }
        return str;
        


    }
void Boom()
{
    //Let's Move
    
    S str11;
    cin>>str11;
   if(str11.size()<26)
   {
       cout<<-1<<dl;
       return;
   }
    for(int i=0;i<tt.size();i++)
    {
        alp[tt[i]]++;
    }

  bool pp=0;\

  S dd;
  int qq;
    for(int i=0;i<str11.size()-25;i++)
    {
        S ss=str11.substr(i,26);
        //if(i==str11.size()-24) 
        //cerr<<ss<<dl;
        bool x=fun(ss);
        //cerr<<x<<sp<<ook<<dl;
        if(x)
        {
            if(ook)
            {
               // cout<<<<dl;
            for(int i=0;i<str11.size();i++)
            {
           if(str11[i]=='?')cout<<'A';
           else cout<<str11[i];
            }

            }

            else
            {
                cerr<<i<<dl;
              dd=  funn(ss);
              cerr<<dd<<dl;
              for(int kk=0;kk<=i;kk++)
               { if(str11[kk]=='?')cout<<'A';
                           else
                               cout<<str11[kk];}
                cout<<dd;
            for(int kk=i+26;kk<str11.size();kk++)
                { 
                    if(str11[i]=='?')cout<<'A';
                           else
                               cout<<str11[kk];}
             
            }
           return;
        }
    }


cout<<-1<<dl;

   
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