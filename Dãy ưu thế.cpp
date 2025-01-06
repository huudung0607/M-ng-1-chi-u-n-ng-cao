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

int main()
{
	int n;
	int chan = 0, le = 0;
	int cnt = 0;
	while (cin >> n)
	{
		cnt++;
		if (n % 2 == 0)
		{
			chan++;
		}
		else
		{
			le++;
		}
	}
	if (chan > le && cnt % 2 == 0)
	{
		cout << "YES";
	}
	else if (le > chan && cnt %2 != 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
