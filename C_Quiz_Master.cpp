#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    int min_diff = INT_MAX;
    for (int i = 0; i < (1 << n); i++) 
    {
        vector<int> team;
        for (int j = 0; j < n; j++) 
        {
            if (i & (1 << j)) 
            {
                team.push_back(a[j]);
            }
        }
        
        bool ok = true;
        for (int t = 1; t <= m; t++) 
        {
            bool prof = false;
            for (int num : team) 
            {
                if (num % t == 0) 
                {
                    prof = true;
                    break;
                }
            }
            if (!prof) 
            {
                ok = false;
                break;
            }
        }
        
        if (ok) 
        {
            sort(team.begin(), team.end());
            int diff = team.back() - team.front();
            min_diff = min(min_diff, diff);
        }
    }
    if(min_diff==INT_MAX)cout<<-1<<endl;
    else cout << min_diff << endl;
    }
    
    return 0;
}