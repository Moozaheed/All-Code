#include<bits/stdc++.h>
using namespace std;
int main()
{

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);


int a,b;
char s;
cin>>a>>s>>b;

if(s=='>')
{
    if(a>b)cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;
}

if(s=='<')
{
    if(a<b)cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;
}

if(s=='=')
{
    if(a==b)cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;
}



    
}
