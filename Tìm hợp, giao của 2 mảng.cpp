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
	int n, m;
	cin >> n >> m;
	set<int> a;
	set<int>b;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a.insert(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		b.insert(x);
	}
	vector<int> res;
	set_intersection(a.begin(), a.end(), b.begin(), b.end(),back_inserter(res));
	for (auto x : res)
	{
		cout << x << " ";
	}
	vector<int> hop;
	set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(hop));
	for (auto x : hop)
	{
		cout << x << " ";
	}
}
