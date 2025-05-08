
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
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long ans = a[0];
	long long sum = a[0];
	for (int i = 1; i < n; i++) {
		sum = max(sum + a[i], a[i]);
		ans = max(ans, sum);
	}
	cout << ans;
	
}

