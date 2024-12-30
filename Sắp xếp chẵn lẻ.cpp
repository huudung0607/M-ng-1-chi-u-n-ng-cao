#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool cmp(int a, int b)
{
	if (a % 2 == 0 && b % 2 != 0)
	{
		return false;
	}
	if (a % 2 != 0 && b % 2 == 0)
	{
		return true;
	}
	if (a % 2 == 0 && b % 2 == 0)
	{
		return a < b;
	}
	if (a % 2 != 0 && b % 2!=0)
	{
		return a > b;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), cmp);
	for (auto x : a)
	{
		cout << x << " ";
	}
}
