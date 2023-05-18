#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n],brr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Prfix sum

    brr[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        brr[i]=brr[i-1]+arr[i];
    }

    //l=1,r=4; == 16

    // new[r]-new[l-1]; 
    // 18 - 2=== 16


    for(int i=0;i<n;i++)
    {
        cout<< brr[i]<<' ';
    }

}
