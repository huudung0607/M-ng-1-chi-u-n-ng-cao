//https://leetcode.com/problems/find-subarrays-with-equal-sum/description/
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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	set<int>se;
	for (int i = 0; i < n - 1; i++)
	{
		sum = (a[i] + a[i + 1]);
		if (se.count(sum)) {
			cout << "YES";
			return 0;
		}
		se.insert(sum);
	}
	cout << "NO";
}

