#include <iostream>
#include <bits/stdc++.h>
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
	int n;
	cin >> n;
	int a[n], c = 1, temp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	return 0;
}