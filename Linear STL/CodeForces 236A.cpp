#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
			cnt++;
	}
	if (cnt % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}