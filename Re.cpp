#include<bits/stdc++.h>
using namespace std;

//Array Input
int coin[10];
int n;
void input(int n)
{
    if(n==0)return;
    input(n-1);
    cin>>coin[n-1];
}

//Array Output
void output(int n)
{
    if(n==0)return;
    output(n-1);
    cout<<coin[n-1]<<" ";
}



//Coin Problem --- Minimum koyta coin lagbe

int coinn(int target)
{
    if(target==0)return 0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(coin[i]>target)continue;
        int baki=target-coin[i];
        ans=min(ans,1+coinn(baki));
    }
}


int main()
{

 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);

  cin>>n;
  input(n);
 // output(n);

 // vector<int>res;
 cout<<coinn(8);

}
