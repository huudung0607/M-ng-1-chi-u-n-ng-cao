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
	int n, k;
	cin >> n >> k;
	vector<long long>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long cursum = 0;
	long long maxsum = 0;
	int index = 0;
	for (int i = 0; i < k; i++)
	{
		cursum += a[i];
	}
	maxsum = cursum;
	for (int i = 1; i <= n - k; i++)
	{
		cursum = cursum - a[i - 1] + a[i + k - 1];
		if (cursum > maxsum)
		{
			maxsum = cursum;
			index = i;
		}
	}
	cout << maxsum << endl;
	for (int i = 0; i < k; i++)
	{
		cout << a[index + i] << " ";
	}
}
