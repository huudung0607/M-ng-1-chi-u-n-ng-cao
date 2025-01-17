#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
const int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	mp[0] = -1;
	long long sum = 0;
	int index = -1, ans = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (mp.count(sum))
		{
			if (i - mp[sum] > ans)
			{
				ans = i - mp[sum];
				index = i;
			}
		}
		else
		{
			mp[sum] = i;
		}
	}
	if (index == -1)
	{
		cout << "NOT FOUND";
	}
	else
	{
		for (int i = index - ans + 1; i <= index; i++)
		{
			cout << a[i] << " ";
		}
	}
}
