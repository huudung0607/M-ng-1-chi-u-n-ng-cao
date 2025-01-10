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
int dx[8] = { -2,-2,-1,-1,1,1,2,2 };
int dy[8] = { -1,1,-2,2,-2,2,-1,1 };
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
	vector<int> minarr;
	vector<int> maxarr;
	k = min(k, n - k);
	for (int i = 0; i < k; i++)
	{
		minarr.push_back(a[i]);
	}
	for (int i = k; i < n; i++)
	{
		maxarr.push_back(a[i]);
	}
	long long summax = 0, summin = 0;
	for (auto x : minarr)
	{
		summin += x;
	}
	for (auto x : maxarr)
	{
		summax += x;
	}
	cout << summax - summin;
}
