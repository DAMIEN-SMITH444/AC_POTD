#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n+1), pos(n+1);
        
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        int g = 0;
        for (int i = 1; i <= n; i++) {
            int d = abs(pos[i] - i);
            g = gcd(g, d);
        }

        cout << g << "\n";
    }
}
