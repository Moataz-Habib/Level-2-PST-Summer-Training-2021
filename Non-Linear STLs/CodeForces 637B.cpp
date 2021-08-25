#include<iostream>
#include<stack>
#include<map>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<string>st;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		st.push(s);
	}
	map<string, int>mp;
	for (int i = 0; i < n; i++)
	{
		string out = st.top();
		mp[out]++;
		if (mp[out] == 1)
			cout << out << endl;
		st.pop();
	}
}