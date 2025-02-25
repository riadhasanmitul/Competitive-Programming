#include <iostream>
#include <cmath>
using namespace std;
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputcon.txt", "r", stdin);
	freopen("outputcon.txt", "w", stdout);
#endif
}
int main()
{
	init_code();
	int l1, r1, l2, r2;
	cin >> l1  >> r1 >>  l2 >> r2;
	if ((l2 > r1 && r2 > r1) || (l2 < l1 && r2 < l1))
	{
		cout << 0 << endl;
	} else
	{
		int x, y;
		x = max(l1, l2);
		y = min(r1, r2);
		cout << y - x << endl;
	}
	return 0;
}