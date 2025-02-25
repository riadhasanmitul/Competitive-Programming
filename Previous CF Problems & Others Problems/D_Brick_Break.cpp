#include <bits/stdc++.h>
using namespace std;

int n, a, ans;

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if ((a - 1) == ans)
			ans++;
	}
	cout << (ans? n - ans: -1);
}
