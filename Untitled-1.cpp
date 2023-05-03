#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c,d;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
  
  
  if(d>a || b<c)printf("-1");

  else
  {
    cout<<max(a,c)<<sp<<min(b,d)<<endl;
  }
}