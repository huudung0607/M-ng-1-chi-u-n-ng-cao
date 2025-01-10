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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	multiset<int>se;
	for (int i = 0; i < k; i++)
	{
		se.insert(a[i]);
	}
	cout << *se.begin() << " " << *se.rbegin() << endl;
	for (int i = k; i < n; i++)
	{
		se.insert(a[i]);
		se.erase(se.find(a[i] - k));
		cout << *se.begin() << " " << *se.rbegin() << endl;
	}	
}
