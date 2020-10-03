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

bool ispersq(ll n)
{
	if (n == 0)
	{
		return false;
	}
	else
	{
		long double x = sqrt(n);
		if (x - floor(x) == 0)
			return true;
		else
			return false;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; int n ;
	ll k;
	int ans;
	int f1, f2;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= sqrt(n); i++)
		{

			if (n % f1 == 0)
			{
				f1 = i;
				f2 = n / f1;
				break;
			}

		}
		cout << f1 << f2 << endl;
		ans = abs(f1 - f2) / 2;
		if (ispersq(pow(ans, 2)) == true)
			cout << ans*ans << endl;
		else
			cout << "-1" << endl;



	}

}