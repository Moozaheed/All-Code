#include<bits/stdc++.h>
using namespace std;
int main()
{

  //Digit Count
  int n;
  cin>>n;

  int cnt=0;
 
  while(n!=0)
  {
    cnt++;
    n/=10;
  }

  cout<<cnt<<endl;
 

}