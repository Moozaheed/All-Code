#include<bits/stdc++.h>
using namespace std;
#define dl "\n"
#define sp ' '
#define ll long long
#define s string
#define pb push_back
#define mp make_pair
#define pob pop_back
#define vi vector<int>
#define vs vector<string>
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool binary(ll a)
{
    s st="";
    while(a!=0)
    {
      ll rem=a%2;
      if(rem==0){
        st =std::to_string((unsigned)rem)+st;
      }
      else
      {st =std::to_string((unsigned)1)+st;}
      // cout<<st<<dl;
        a=a/2;
    }
    s temp=st;
   reverse(temp.begin(),temp.end());
   //437 cout<<temp<<sp<<st<<dl;
    if(st==temp)return true;
    else
        return false;
}
bool odd(ll a)
{
  if(a%2!=0)return true;
  else return false;
}
int main()
{
  ll a;
  cin>>a;
 // binary(a);
  if(odd(a))
  {if(binary(a))cY;
  else
  cN;
  }
  else
    cN;
}