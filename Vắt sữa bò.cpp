#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
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
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		int num = a[i];
		int res = num - i;
		if (res < 0)
		{
			res = 0;
		}
		sum += res;
	}
	cout << sum;
}
