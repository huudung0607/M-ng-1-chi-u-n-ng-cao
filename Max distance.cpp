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
	map<int, int> mp;
	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		int x = a[i] + k;
		int y = a[i] - k;
		if (mp.count(x))
		{
			ans = max(ans, i - mp[x]);
		}
		if (mp.count(y))
		{
			ans = max(ans, i - mp[y]);
		}
		if (!mp.count(a[i]))
		{
			mp[a[i]] = i;
		}
	}
	cout << ans;
}
