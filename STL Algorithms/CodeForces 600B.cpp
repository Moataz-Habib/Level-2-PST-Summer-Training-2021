#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, m;
int main() {
	cin >> n >> m;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		cout << upper_bound(v.begin(), v.end(), x) - v.begin() << " ";
	}
}