//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long ;
#define ll long long ;
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>;
#define vs vector<string>;
#define pii pair<int,int>;
#define psi pair<string,int>;
#define pis pair<int,string>;
#define mii map<int,int>;
#define msi map<string,int>;
#define mis map<int,string>;
#define S string
#define fi first
#define se second
#define sp " "
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define DDD fprintf(stderr, "====TESTING====\n")
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define EPS 1e-9;
#define PI acos(-1);


int main()
{

int n,k;
cin>>n>>k;

   int arr[n][k];
       int p=1;
        int q=2;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    int s=k;
                    int j=0;
                    while(s--)
                    {
                        arr[i][j]=p;
                        p+=2;
                        j++;
                    }
                }
                else{
                    int ss=k;
                    int j=0;
                    while(ss--)
                    {
                        arr[i][j]=q;
                        q+=2;
                        j++;
                    }
                }
            }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
       {
cout<<arr[j][i]<<sp;
       }
       cout<<dl;
    }




}
