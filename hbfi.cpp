#include<bits/stdc++.h>
using namespace std;

int arr[10];
void input(int n)
{
    if(n==0)return;
    input(n-1);
    cin>>arr[n-1];
}

int sum(int n)
{
    if(n==0)return 0;
    return sum(n-1)-arr[n-1];
}

int ssum(int n)
{
    if(n==0)return 0;
    return arr[n-1]-ssum(n-1);
}
int main()
{

int n;
cin>>n;
input(n);
cout<<sum(n)<<endl;

cout<<ssum(n)<<endl;


}

