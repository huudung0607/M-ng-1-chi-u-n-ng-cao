#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	cin >> n >> q;
	vector<int>a(n);
	vector<long long> F(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			F[0] = a[0];
		}
		else
		{
			F[i] = F[i - 1] + a[i];
		}
	}
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		--l;
		--r;
		if (l == 0)
		{
			cout << F[r] << endl;
		}
		else
		{
			cout << F[r] - F[l - 1] << endl;
		}
	}
}
