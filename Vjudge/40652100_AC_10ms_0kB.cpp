#include <iostream>
using namespace std;
#define ll long long
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputcon.txt", "r", stdin);
	freopen("outputcon.txt", "w", stdout);
#endif
}
int main()
{
	init_code();
	int T;
	cin >> T;
	while (T--)
	{
		ll n, ans = 0;
		cin >> n;
		if (n % 10 == 5 || n % 10 == 0) {
			while (n % 10 != 0)
			{
				ans++;
				n *= 2;

			}
			cout << ans << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}