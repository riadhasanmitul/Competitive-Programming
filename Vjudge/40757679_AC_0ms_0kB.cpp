#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputcon.txt", "r", stdin);
	freopen("outputcon.txt", "w", stdout);
#endif
}
int main()
{
	init_code();
	int t;
	ll n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << n / 2 << endl;
	}

	return 0;
}