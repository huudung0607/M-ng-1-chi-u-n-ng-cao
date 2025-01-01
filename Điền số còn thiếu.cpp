#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;
int a[1000001];
int main()
{
	int n;
	cin >> n;
	set<int> se;
	set<int> res;
	//
	long long sum_temp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
		sum_temp += a[i];
	}
	//
	int maxnum = INT_MIN;
	int minnum = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		maxnum = max(maxnum, a[i]);
		minnum = min(minnum, a[i]);
	}
	int dem = maxnum - minnum + 1;
	long long sum = (dem * (maxnum + minnum)) / 2;
	//
	long long temp = sum;
	for (int i = minnum; i <= maxnum; i++)
	{
		int num = i;
		if (se.find(num) == se.end())
		{
			temp -= i;
			res.insert(i);
		}
	}
	cout << res.size() << endl;
}
