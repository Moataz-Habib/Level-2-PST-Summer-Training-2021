#include<iostream>
#define endl '\n'
using namespace std;
#include<stack>
stack<int>s;
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
			s.push(n);
		}
		else if (x == 2)
		{
			if (!s.empty()) {

				s.pop();

			}
		}
		else
		{
			if (!s.empty())
				cout << s.top() << endl;
			else cout << "Empty!" << endl;
		}
	}
}
