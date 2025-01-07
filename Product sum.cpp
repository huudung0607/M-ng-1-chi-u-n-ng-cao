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
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long res = (a[i] * i) % mod;
		sum = sum + ((res) % mod) % mod;
		sum %= mod;
	}
	cout << sum;
}
