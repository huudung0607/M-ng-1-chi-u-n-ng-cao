//https://leetcode.com/problems/subarray-sum-equals-k/description/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	map<int, int> mp;
	mp[0] = 1;
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (mp.count(sum - k)) {
			ans += mp[sum - k];
		}
		mp[sum]++;
	}
	cout << ans;
}

