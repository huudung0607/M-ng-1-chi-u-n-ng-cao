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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long sum1 = 0;
	long long sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum1 = sum1 * 10 + a[i];
		}
		else
		{
			sum2 = sum2 * 10 + a[i];
		}
	}
	cout << sum1 + sum2;
}
