//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;
 
ll int mas[10][10]; 
void Boom()
{
    //Let's Move
    for( int i = 0 ; i < 3 ; i++ )
        for( int j = 0 ; j < 3 ; j++ )
        cin >> mas[i][j];
 
    long long s = (mas[0][1]+mas[0][2]+mas[1][0]+mas[1][2]+mas[2][0]+mas[2][1])/2;
    mas[0][0] = s - mas[0][1]-mas[0][2];
    mas[1][1] = s - mas[1][0]-mas[1][2];
    mas[2][2] = s - mas[2][0]-mas[2][1];
 
    for( int i = 0 ; i < 3 ; i++ )
    for( int j = 0 ; j < 3 ; j++ )
    {
        cout << mas[i][j];
        if( j == 2 )
        cout <<dl;
        else cout << sp;
    }



   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 