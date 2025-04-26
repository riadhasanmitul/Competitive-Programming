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
	int a, b;
	a = 8; b = 4;
	cout << (a ^ b) << endl;
	return 0;
}
