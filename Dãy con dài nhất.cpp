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
	vector<long long>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int index = 0;
	int curL = 1;
	int maxL = 1;
	int curSum = a[0], maxsum = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i -1])
		{
			curL += 1;
			curSum = curSum + a[i];
		}
		else
		{
			curL = 1;
			curSum = a[i];
		}
		if (curL > maxL)
		{
			index = i;
			maxL = curL;
			maxsum = curSum;
		}
		else if (curL == maxL)
		{
			if (curSum > maxsum)
			{
				maxsum = curSum;
				index = i;
			}
		}
	}
	cout << maxL << endl;
	for (int i = index - maxL + 1; i <= index; i++)
	{
		cout << a[i] << " ";
	}
}
