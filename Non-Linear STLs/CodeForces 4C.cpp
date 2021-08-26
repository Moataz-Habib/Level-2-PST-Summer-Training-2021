#include<iostream>
#include<map>
using namespace std;
int main() {
	map <string, int>mp;
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		mp[s]++;
		if (mp[s] == 1)
			cout << "OK" << endl;
		else
			cout << s << mp[s] - 1 << endl;
	}
}