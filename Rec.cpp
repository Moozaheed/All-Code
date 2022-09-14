//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vs vector<string>
#define ST string
#define F first
#define S Second
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std;
ll int arr[10001];
void solve(ll int n)
{

    if (n == -1) return;
    if(n%2==0)cout<<arr[n]<<' ';
    return solve(n-1);
}
int main()
{

Boost;
#ifndef ONLINE_JUDGE
//Input;
//Output;
Error;
#endif

/*-----------------------START-----------------------*/



int n;
cin>>n;
for(int i=0;i<n;i++)cin>>arr[i];
solve(n-1);


/*------------------------END------------------------*/

time;
return 0;

}
