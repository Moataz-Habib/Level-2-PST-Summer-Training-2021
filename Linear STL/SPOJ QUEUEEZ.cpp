#include<iostream>
#define endl '\n'
using namespace std;
#include<queue>
queue<int>q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;

		if (x == 1)
		{
			int n;
			cin >> n;
			q.push(n);
		}
		else if (x == 2)
		{
			if (!q.empty()) {

				q.pop();

			}
		}
		else
		{
			if (!q.empty())
				cout << q.front() << endl;
			else cout << "Empty!" << endl;
		}
	}
}
