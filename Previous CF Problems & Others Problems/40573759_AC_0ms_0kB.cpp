#include <iostream>
using namespace std;
int main()
{
	int T, i, j = 0;
	cin >> T;
	while (T--)
	{
		j++;
		int a, b, sum = 0;
		cin >> a;
		cin >> b;
		for (int i = a; i <= b; i++)
		{
			if (i % 2 != 0)
			{
				sum += i;
			}
		}
		cout << "Case " << j << ": " << sum << endl;
	}
	return 0;
}