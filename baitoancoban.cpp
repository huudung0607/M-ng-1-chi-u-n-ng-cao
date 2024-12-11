#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

const int mod = 1e9 + 7;

#define ll long long
using namespace std;

int prime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxval = INT_MIN;
	int minval = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		maxval = max(maxval, a[i]);
		minval = min(minval, a[i]);
	}
	int indexmin = -1, indexmax = -1;
	for (int i = 0; i < n; i++)
	{
		if (maxval == a[i])
		{
			indexmax = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (minval == a[i])
		{
			indexmin = i;
			break;
		}
	}
	cout << maxval << " " << indexmax << endl;
	cout << minval << " " << indexmin << endl;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (prime(a[i]))
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	int l = 0, r = n - 1;
	bool dx = true;
	while (l <= r)
	{
		if (a[l] != a[r])
		{
			dx = false;
		}
		l++;
		r--;
	}
	sort(a, a + n);
	int max_val2 = a[n - 2];
	int min_val2 = a[1];
	cout << max(maxval * max_val2, minval * min_val2) << endl;
	if (dx)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	long long ans = 1;
	for (int i = 0; i < n; i++)
	{
		ans *= a[i] % mod;
		ans %= mod;
	}
	cout << ans << endl;
	delete[] a;
}
