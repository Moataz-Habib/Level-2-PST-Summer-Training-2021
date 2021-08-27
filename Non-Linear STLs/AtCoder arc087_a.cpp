#include<iostream>
#include<map>
using namespace std;
int main() {
	map <int, int>mp;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	int ans = 0;
	map <int, int>::iterator it;
	for ( it = mp.begin(); it!=mp.end(); it++)
	{
		int f = it->first;
		int s = it->second;
		if (f > s)
			ans += s;
		else
			ans += s - f;
	}
	cout << ans << endl;
}