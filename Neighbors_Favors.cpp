
#include<bits/stdc++.h>
using namespace std;

char arr[110][110];

int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
int ROW,COL;
bool isValid(int row, int col)
{
    if (row < 0 || col < 0 || row >= ROW || col >= COL)
        return true;
    if (arr[row][col]=='.')
        return false;
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;
    ROW=n;
    COL=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }

    int a,b;
    cin>>a>>b;
    a--,b--;

    for(int i=0;i<8;i++)
    {
        int p=a+dirx[i];
        int q=b+diry[i];
        
        if(isValid(p,q)==false)
        {
            cout<<"no"<<endl;
            return 0;
        }

        
    }

    cout<<"yes"<<endl;

    

}
