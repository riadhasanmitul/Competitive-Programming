#include <iostream>
using namespace std;
int main()
{
	int T, a[1000], i, j = 0;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		j++;
		n = n / 2;
		cout << "Case " << j << ": " << a[n] << endl;
	}
	return 0;
}