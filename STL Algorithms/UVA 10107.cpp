#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n'
using namespace std;
int main() {
	int x;
	vector<int>v;
	while (cin >> x)
	{
		v.push_back(x);
		sort(v.begin(), v.end());
		if (v.size() & 1)cout << v[v.size() / 2] << endl;
		else cout << (v[v.size() / 2 ]+ v[v.size()/2- 1])/2 << endl;
	}
}