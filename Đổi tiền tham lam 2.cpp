#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
int a[10] = { 1000,500,200,100,50,20,10,5,2,1 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin >> n;
	long long cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		cnt += n / a[i];
		n %= a[i];
	}
	cout << cnt;
}
