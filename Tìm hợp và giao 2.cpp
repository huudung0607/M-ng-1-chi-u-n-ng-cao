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
vector<int> hop(vector<int> a, vector<int> b)
{
	vector<int> res;
	int i = 0, j = 0;
	while (i < a.size() && j < b.size())
	{
		if (a[i] < b[j])
		{
			res.push_back(a[i]);
			i++;
		}
		else if(a[i] > b[j])
		{
			res.push_back(b[j]);
			j++;
		}
		else
		{
			res.push_back(a[i]);
			i++;
			j++;
		}
	}
	while (i < a.size())
	{
		res.push_back(a[i]);
		i++;
	}
	while (j < b.size())
	{
		res.push_back(b[j]);
		j++;
	}
	return res;
}
vector<int> giao(vector<int> a, vector<int> b)
{
	vector<int> res;
	int i = 0, j = 0;
	while (i < a.size() && j <b.size())
	{
		if (a[i] == b[j])
		{
			res.push_back(a[i]);
			i++;
			j++;
		}
		else if (a[i] < b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	vector<int> ans = hop(a, b);
	for (auto x : ans)
	{
		cout << x << " ";
	}
	cout << endl;
	vector<int> res = giao(a, b);
	for (auto x : res)
	{
		cout << x << " ";
	}
}
