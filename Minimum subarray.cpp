#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0;
	long long sum = 0;
	long long ans = mod;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		while (sum >= k)
		{
			if (sum == k)
			{
				ans = min((long long)ans, (long long)i - l + 1);
			}
			sum -= a[l];
			l++;
		}
	}
	if (ans == mod)
	{
		cout << -1;
	}
	else
	{
		cout << ans;
	}
}
