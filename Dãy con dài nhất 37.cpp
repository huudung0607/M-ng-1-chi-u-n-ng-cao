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
	map<long long, int>mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	int ans = -1;
	mp[0] = -1;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		int x = (sum % k + k) % k;	
		if (mp.count(x))
		{
			ans = max(ans, i - mp[x]);
		}
		else
		{
			mp[x] = i;
		}
	}
	cout << ans;
}
