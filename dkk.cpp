#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mn=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        //-2 -3 -1 -3 -5
        int k;
        cin>>k;
        if(k<mn)mn=k;
    }
    cout<<mn<<endl;

}
