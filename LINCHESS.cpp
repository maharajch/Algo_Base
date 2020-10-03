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

	int t, k, x;
	short int n;
	vector<int>p;
	int min;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int ans = 0, player = 0;
		min = INT_MAX;
		for0(i, n)
		{
			cin >> x;

			if (k % x == 0)
			{
				ans = k / x;
				if (ans < min)
				{
					min = ans;
					player = x;
				}
			}
		}
		if (player > 0)
			cout << player << endl;
		else
			cout << "-1" << endl;
	}
}