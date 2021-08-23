#include<iostream>
#define endl '\n'
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int len, n;
		cin >> len >> n;
		len *= 100;
		queue<int>l, r;
		for (int i = 0; i < n; i++)
		{
			int length;
			string s;
			cin >> length >> s;
			if (s == "right")
			{
				r.push(length);
			}
			else
				l.push(length);
		}

		int res = 0;
		bool f = true;
		while (!l.empty() || !r.empty())
		{
			++res;
			int total = 0;
			if (f)
			{
				while (!l.empty() && total + l.front() <= len)
				{
					total += l.front();
					l.pop();
				}
			}
			else
			{
				while (!r.empty() && total + r.front() <= len)
				{
					total += r.front();
					r.pop();
				}
			}
			f = 1 - f;
		}
		cout << res << endl;
	}
}