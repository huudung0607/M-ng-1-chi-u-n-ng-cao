#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
bool prime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	unordered_map<int, int> mp;
	vector<int> res;
	while (cin >> n)
	{
		if (prime(n) && mp[n] == 0)
		{
			res.push_back(n);
		}
		if (prime(n))
		{
			mp[n]++;
		}
	}
	for (auto x : res)
	{
		cout << x << " " << mp[x] << endl;
	}
}
