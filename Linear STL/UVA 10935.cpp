#include<iostream>
#include<queue>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n, n)
	{
		queue<int>q;
		for (int i = 1; i <= n; ++i)
			q.push(i);
		cout << "Discarded cards:";
		string s = " ";
		while (q.size() > 1)
		{
			cout << s << q.front();
			s = ", ";
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout << endl << "Remaining card: " << q.front() << '\n';
	}
}