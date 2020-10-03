#include <bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
#define ll long long int
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, p, h;
	cin >> t;
	while (t--)
	{
		cin >> h >> p;
		while (p >= 0)
		{
			h = h - p;
			p = p / 2;
			if (h <= 0)
			{
				cout << "1" << endl;
				break;
			}
			else if (p == 0)
			{
				cout << "0" << endl;
				break;
			}
		}
	}
	/*if (p > 0 && h <= 0)
		cout << "1" << endl;
	if (p == 0)
		cout << "0" << endl;*/

}

