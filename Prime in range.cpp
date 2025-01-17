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
using namespace std;
const int mod = 1e9 + 7;
int prime[1000001];
int F[1000001];

void seive() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(1000001); i++)
	{
		if (prime[i] == 0)
		{
			for (int j = i * i; j < 1000001; j+= i)
			{
				prime[j] = 1;
			}
		}
	}
	F[0] = F[1] = 0;
	for (int i = 2; i < 1000001; i++)
	{
		if (prime[i] == 0)
		{
			F[i] = F[i - 1] + 1;
		}
		else
		{
			F[i] = F[i - 1];
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q; cin >> q;
	seive();
	while (q--) {
		int l, r; cin >> l >> r;
		cout << F[r] - F[l - 1] << endl;
	}
}
