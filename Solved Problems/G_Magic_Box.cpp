#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        v.emplace_back(i, k);
    }

    while (q--) {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), make_pair(x, 0));

        if (it != v.end() && it->first == x) {
            cout << it->first << endl;
            it->second--;
            if (it->second == 0) {
                v.erase(it);
            }
        } else {
            if (it == v.begin()) {
                cout << 0.5 << endl;
            } else {
                --it;
                cout << it->first << endl;
                it->second--;
                if (it->second == 0) {
                    v.erase(it);
                }
            }
        }
    }
}

int main() {
    fastio
    int test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
