#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int operations = 0;
        if (k == 0) {
            // Remove all 0's
            operations = freq[0];
        } else {
            // Count missing numbers from [0..k-1]
            int missingCount = 0;
            for (int x = 0; x < k; x++) {
                if (freq.find(x) == freq.end()) missingCount++;
            }
            int countK = freq[k];
            operations = max(missingCount, countK);
        }

        cout << operations << "\n";
    }
    return 0;
}
