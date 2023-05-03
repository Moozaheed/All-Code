#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main() 
{ 
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2>r1 || l1>r2)
    {
        cout<<-1<<dl;
    }
    int k=max(l1,l2);
    int kk=min(r1,r2);
    printf("%d %d",min(k,kk),max(k,kk));


    return 0;

} 