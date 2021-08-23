#include<iostream>
#include<deque>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	bool rev = 0;
	deque<int>dq;
	while (t--)
	{
		string s;
		cin >> s;
		if (s == "toFront") {
			int n;
			cin >> n;
			if (rev == 0)
				dq.push_front(n);
			else
				dq.push_back(n);
		}
		else if (s == "push_back")
		{
			int n;
			cin >> n;
			if (rev == 0)
				dq.push_back(n);
			else
				dq.push_front(n);
		}
		else if (s == "front")
		{
			if (dq.size() == 0)
				cout << "No job for Ada?" << endl;
			else {
				if (rev == 0) {
					cout << dq.front() << endl;
					dq.pop_front();
				}
				else {
					cout << dq.back() << endl;
					dq.pop_back();
				}

			}
		}
		else if (s == "back")
		{
			if (dq.size() == 0)
				cout << "No job for Ada?" << endl;
			else {
				if (rev == 0) {
					cout << dq.back() << endl;
					dq.pop_back();
				}
				else {
					cout << dq.front() << endl;
					dq.pop_front();
				}
			}
		}
		else {
			if (rev == 0)rev = 1;
			else rev = 0;
		}
	}
}