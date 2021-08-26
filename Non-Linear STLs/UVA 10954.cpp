#include<iostream>
#include<set>
#include<stack>
using namespace std;
int main() {
	int n;
	while (cin >> n && n)
	{
		multiset<int>s;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		int res = 0;
		while (s.size() > 1)
		{
			int first = *s.begin();
			s.erase(s.begin());
			int second = *s.begin();
			s.erase(s.begin());
			res += (first + second);
			s.insert(first + second);
		}
		cout << res << endl;
	}
}