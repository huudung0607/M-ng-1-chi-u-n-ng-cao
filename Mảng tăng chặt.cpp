#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

const int mod = 1e9 + 7;

#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool tang = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] >= a[i + 1])
		{
			tang = false;
			break;
		}
	}
	if (tang)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
