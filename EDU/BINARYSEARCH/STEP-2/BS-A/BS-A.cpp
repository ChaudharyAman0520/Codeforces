#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

ll w, h, n;

bool isSideGood(ll x)
{
    return (x / w) * (x / h) >= n;
}
void solve()
{
    cin >> w >> h >> n;

    ll low = 0, high = 1;

    while (!isSideGood(high))
        high *= 2;

    while (high > low + 1)
    {
        ll mid = (low + high) >> 1;

        if (isSideGood(mid))
        {
            high = mid;
        }
        else 
        {
            low = mid;
		}
    }

    cout << high << nline;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    while (T--)
    {
        solve();
    }
}
