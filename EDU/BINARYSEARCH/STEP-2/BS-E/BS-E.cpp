#include <bits/stdc++.h>
using namespace std;

int main() {
    double c;
    cin >> c;

    double L = 1, R = 1e10, mid;
    double eps = 1e-6;

    while (R - L > eps) {
        mid = (L + R) / 2;
        double val = mid * mid + sqrt(mid);
        if (abs(val - c) < eps) {
            break;
        } else if (val < c) {
            L = mid;
        } else {
            R = mid;
        }
    }

    cout << fixed << setprecision(6) << mid << endl;
    return 0;
}
