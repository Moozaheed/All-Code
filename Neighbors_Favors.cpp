#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, n;
    cin >> n1 >> n2 >> n;

    int lcm = (n1 * n2) / __gcd(n1, n2);
    int minutes = (lcm * n + n1 - 1) / n1;
    int hours = minutes / 60;
    minutes %= 60;
    int next_hour = (n + hours) % 24;

    cout << next_hour << " Clock " << minutes << " minute" << endl;

    return 0;
}