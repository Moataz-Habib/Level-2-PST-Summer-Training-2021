#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int beg = 0, end = n - 1;
	while (beg < end)
	{
		cout << v[beg] << " " << v[end] << " ";
		beg++, end--;
	}
	if (n % 2 == 1)cout << v[beg];
}