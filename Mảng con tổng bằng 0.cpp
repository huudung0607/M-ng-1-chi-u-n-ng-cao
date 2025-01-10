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
	long long sum = 0;
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (mp.count(sum) || sum == 0)
		{
			cout << "1";
			return 0;
		}
		mp[sum] = 1;
	}
	cout << "-1";
}
