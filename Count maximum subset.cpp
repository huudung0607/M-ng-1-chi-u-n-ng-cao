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
	sort(a.begin(), a.end());
	int l = 0;
	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		while (a[i] - a[l] > k)
		{
			l++;
		}
		ans = max(ans, i - l + 1);
	}
	cout << ans;
}
