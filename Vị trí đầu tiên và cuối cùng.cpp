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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int indexf = -1;
	int indexl = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			indexf = i;
			break;
		}
	}
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i] == x)
		{
			indexl = i;
			break;
		}
	}
	if (indexl != -1)
	{
		cout << indexf + 1 << " " << indexl + 1;
	}
	else
	{
		cout << -1 << " " << -1;
	}

}
