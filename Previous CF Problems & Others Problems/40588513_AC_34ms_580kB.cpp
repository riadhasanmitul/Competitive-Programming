#include <iostream>
#include <cmath>
using namespace std;
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input - Copy (2).txt", "r", stdin);
	freopen("output - Copy (2).txt", "w", stdout);
#endif
}
int main()
{
	init_code();
	int T, a[1000], i, j = 0, f = 1;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > -1)
			{
				sum = sum * f + a[i];
			}
		}
		j++;
		if (sum < 0)
		{
			sum = 0;
			cout << "Case " << j << ": " << sum << endl;
		} else
		{
			cout << "Case " << j << ": " << sum << endl;
		}
	}
	return 0;
}