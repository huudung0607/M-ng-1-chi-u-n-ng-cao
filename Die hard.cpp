#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (a[0] == 50 || a[0] == 100)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		int dem25 = 0;
		int dem50 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 25)
			{
				dem25++;
			}
			else if(a[i] == 50)
			{
				if (dem25 >= 1)
				{
					dem25--;
					dem50++;
				}
				else
				{
					cout << "NO";
					return 0;
				}
			}
			else if (a[i] == 100)
			{
				if (dem25 >= 1 && dem50 >= 1)
				{
					dem25--;
					dem50--;
				}
				else if (dem25 >= 3)
				{
					dem25 -= 3;
				}
				else
				{
					cout << "NO";
					return 0;
				}
			}
		}
		cout << "YES" << endl;
	}
}
