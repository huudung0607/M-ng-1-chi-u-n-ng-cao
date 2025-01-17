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
int dx[8] = { -2,-2,-1,-1,1,1,2,2 };
int dy[8] = { -1,1,-2,2,-2,2,-1,1 };
bool cmp(string a, string b)
{
	return a + b > b + a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	for (auto& x : s) {
		if (isalpha(x))
		{
			x = ' ';
		}
	}
	vector<string> v;
	stringstream ss(s);
	string temp;
	while (ss >> temp)
	{
		while (!temp.empty() && temp[0] == '0')
		{
			temp.erase(0, 1);
		}
		if (temp.empty())
		{
			temp = "0";
		}
		v.push_back(temp);
	}
	sort(v.begin(), v.end(),cmp);
	for (auto x : v)
	{
		cout << x;
	}
}
