#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp ' '
#define ll long long
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
bool allchararctersame(vi arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=arr[0])
            return false;
        return true;
    }
}
int main()
{
   ll a,b;
   vi arr;
   string s;
   cin>>a>>b>>s;
  // cy;
   //cn;
    for(int i=0,j=b;i<a&&j<s.length();i++,j++)
     {
         if(isdigit(s[i])&& isdigit(s[j]))
            {
                arr.pb(1);
            }
        else
            arr.pb(0);





     }
   if(s.length()==(a+b+1)&& (s[a]=='-'))
   {

    if(allchararctersame(arr))
        cy;
    else
        cn;

   }
   else
    cn;

}