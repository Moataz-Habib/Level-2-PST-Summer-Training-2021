#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int i, j, k, cnt = 0;
	for (i = 0; i < s.size(); i++)
		for (j = i + 1; j < s.size(); j++)
			for (k = j + 1; k < s.size(); k++)
				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')cnt++;
	cout << cnt;
}

