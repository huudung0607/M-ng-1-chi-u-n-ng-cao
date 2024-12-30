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
	long long n;
	cin >> n;
	// 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
	if (n == 1 || n == 2 || n == 5 || n == 10|| 
		n == 20 || n == 50 || n == 100 || n == 200|| 
		n == 500 || n == 1000)
	{
		cout << 1 << endl;
		return 0;
	}
	//3 = 1 + 2
	//4 = 2 + 2
	//6 = 5 + 1
	//7 = 5 + 2
	//8 = 5 + 2 + 1
	//9 = 5 + 2 + 2
	long long k1000 = n / 1000;
	long long k500 = (n % 1000) / 500;
	long long k200 = ((n % 1000) % 500) / 200;
	long long k100 = ((((n % 1000) % 500) % 200)) / 100;
	long long k50 = ((((n % 1000) % 500) % 200) % 100) / 50;
	long long k20 = (((((n % 1000) % 500) % 200) % 100) % 50) / 20;
	long long k10 = ((((((n % 1000) % 500) % 200) % 100) % 50) % 20) / 10;
	long long k5 = (((((((n % 1000) % 500) % 200) % 100) % 50) % 20) % 10) / 5;
	long long k2 = ((((((((n % 1000) % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2;
	long long k1 = (((((((((n % 1000) % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1;
	long long ans = k1000 + k500 + k200 + k100 + k50 + k20 + k10 + k5 + k2 + k1;
	cout << ans << endl;
}
