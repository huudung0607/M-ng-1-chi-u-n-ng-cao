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
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int c0 = 0, c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 0)
		{
			c0++;
		}
		if (a[i] == 1)
		{
			c1++;
		}
		if (a[i] == 2)
		{
			c2++;
		}
	}
	for (int i = 0; i < c0; i++)
	{
		cout << 0 << " ";
	}
	for (int i = 0; i < c1; i++)
	{
		cout << 1 << " ";
	}
	for (int i = 0; i < c2; i++)
	{
		cout << 2 << " ";
	}
}
