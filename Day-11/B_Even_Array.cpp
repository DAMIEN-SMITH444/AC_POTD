#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        int wrong_even = 0;
        int wrong_odd  = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {    // mismatch
                if (i % 2 == 0)
                    wrong_even++;
                else
                    wrong_odd++;
            }
        }

        if (wrong_even == wrong_odd)
            cout << wrong_even << "\n";
        else
            cout << -1 << "\n";
    }
}
