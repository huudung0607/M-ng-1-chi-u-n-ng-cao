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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long cnt = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] <= a[i - 1])
		{
			int res = a[i - 1] - a[i] + 1;
			cnt += res;
			a[i] = a[i] + res;
		}
	}
	cout << cnt << endl;
	
}
