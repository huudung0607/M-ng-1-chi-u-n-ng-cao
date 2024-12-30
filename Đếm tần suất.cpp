#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	unordered_map<int, int> ump;
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
		if (ump[a[i]] == 0)
		{
			res.push_back(a[i]);
		}
		ump[a[i]]++;
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (auto x : res)
	{
		cout << x << " " << ump[x] << endl;
	}
}
