#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
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
	sort(a.begin(), a.end());
	int minindex = 0, maxindex = 0;
	if (abs(a[0] - a[1]) > abs(a[0] - a[n - 1]))
	{
		minindex = abs(a[0] - a[n - 1]);
		maxindex = abs(a[0] - a[1]);
	}
	else
	{
		minindex = abs(a[0] - a[1]);
		maxindex = abs(a[0] - a[n - 1]);
	}
	cout << minindex << " " << maxindex << endl;
	for (int i = 1; i < n - 1; i++)
	{
		int mini = 0, maxi = 0;
		if (abs(a[i] - a[i -1]) > abs(a[i] - a[i + 1]))
		{
			mini = abs(a[i] - a[i + 1]);
		}
		else
		{
			mini = abs(a[i] - a[i - 1]);
		}
		if (abs(a[i] - a[0]) > abs(a[i] - a[n - 1]))
		{
			maxi = abs(a[i] - a[0]);
		}
		else
		{
			maxi = abs(a[i] - a[n - 1]);
		}
		cout << mini << " " << maxi << endl;
	}
	minindex = 0, maxindex = 0;
	if (abs(a[n - 1] - a[n - 2]) > abs(a[n - 1] - a[0]))
	{
		minindex = abs(a[n - 1] - a[0]);
		maxindex = abs(a[n - 1] - a[n - 2]);
	}
	else
	{
		minindex = abs(a[n - 1] - a[n - 2]);
		maxindex = abs(a[n - 1] - a[0]);
	}
	cout << minindex << " " << maxindex << endl;
}
