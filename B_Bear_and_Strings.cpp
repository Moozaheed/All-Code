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
 
void Boom()
{
    //Let's Move
    
   



   
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

// A Simple C++ program to count anagrams of a
// pattern in a text.
#include<bits/stdc++.h>
using namespace std;

// Function to find if two strings are equal
bool areAnagram(string s1, string s2)
{
	map<char, int> m;
	for(int i = 0; i < s1.length(); i++)
		m[s1[i]]++;
		
	for(int i = 0; i < s2.length(); i++)
		m[s2[i]]--;
		
	for(auto it = m.begin(); it != m.end(); it++)
		if(it -> second != 0)
			return false;
			
		return true;
}

int countAnagrams(string text, string word)
{
	
	// Initialize result
	int res = 0;
	for(int i = 0;i < text.length() - word.length() + 1;i++)
	{
		
		// Check if the word and substring are
		// anagram of each other.
		if (areAnagram(text.substr(i, word.length()),word))
			res++;
	}
	return res;
}

// Driver Code
int main()
{
	string text = "forxxorfxdofr";
	string word = "for";
	
	cout << countAnagrams(text, word);
	
	return 0;
}

// This code is contributed by probinsah
