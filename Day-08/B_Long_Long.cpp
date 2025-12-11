#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += llabs(a[i]);
        }

        int ops = 0;
        bool inNegBlock = false;

        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                if (!inNegBlock) {
                    ops++;
                    inNegBlock = true;
                }
            } else if (a[i] > 0) {
                inNegBlock = false;
            }
        }

        cout << sum << " " << ops << "\n";
    }
    return 0;
}
