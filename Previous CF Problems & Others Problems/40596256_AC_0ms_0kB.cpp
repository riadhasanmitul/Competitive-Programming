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
	int T, a[10];
	bool c;
	cin >> T;
	cout << "Lumberjacks:" << endl;
	while (T--)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		if (a[0] < a[9])
		{
			for (int i = 0; i < 9; i++)
			{
				if (a[i + 1] > a[i])
				{
					c = true;
				}
				else
				{
					c = false;
					break;
				}
			}
			if (c == true)
			{
				cout << "Ordered" << endl;
			} else
			{
				cout << "Unordered" << endl;
			}
		} else
		{
			for (int i = 0; i < 9; i++)
			{
				if (a[i + 1] < a[i])
				{
					c = true;
				}
				else
				{
					c = false;
					break;
				}
			}
			if (c == true)
			{
				cout << "Ordered" << endl;
			} else
			{
				cout << "Unordered" << endl;
			}
		}

	}
	return 0;
}