#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
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
	int i = 0, j = 0;
	int index = 0;
	vector<int> temp(n + m);
	while (i < n && j < m)
	{
		if (a[i] <= b[j])
		{
			temp[index++] = a[i++];
		}
		else
		{
			temp[index++] = b[j++];
		}
	}
	while (i < n)
	{
		temp[index++] = a[i++];
	}
	while (j < m)
	{
		temp[index++] = b[j++];
	}
	for (auto x : temp)
	{
		cout << x << " ";
	}
}
