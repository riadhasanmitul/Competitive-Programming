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
		int pieceofbread, days, caneat;
		cin >> pieceofbread >> days >> caneat;
		if ((days * caneat) >= pieceofbread)
		{
			cout << "Yes" << endl;
		} else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}