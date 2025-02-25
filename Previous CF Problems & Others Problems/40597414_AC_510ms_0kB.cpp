#include <iostream>
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
	const int n = 2e5;
	int  T1, T2, i;
	long long prefix[n + 1];
	cin >> T1 >> T2;
	for (i = 1; i <= T1; i++)
	{
		cin >> prefix[i];
		prefix[i] = prefix[i - 1] + prefix[i];
	}
	while (T2--)
	{
		int x, y;
		cin >> x >> y;
		cout << prefix[y] - prefix[x - 1] << endl;
	}
	return 0;
}