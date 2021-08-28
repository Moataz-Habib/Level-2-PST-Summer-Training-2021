#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int n;
int main() {
	while (cin >> n)
	{
		stack<int>stk;
		queue<int>q;
		priority_queue<int>pq;
		bool isStack = 1, isQ = 1, isPQ = 1;
		for (int i = 0; i < n; i++) {
			int type, val;
			cin >> type >> val;
			if (type == 1) {
				stk.push(val);
				q.push(val);
				pq.push(val);
			}
			else {
				if (!stk.empty() && stk.top() == val) stk.pop();
				else isStack = 0;
				if (!q.empty() && q.front() == val) q.pop();
				else isQ = 0;
				if (!pq.empty() && pq.top() == val) pq.pop();
				else isPQ = 0;
			}
		}
		if (isStack && !isQ && !isPQ)
			cout << "stack" << endl;
		else if (!isStack && isQ && !isPQ)
			cout << "queue" << endl;
		else if (!isStack && !isQ && isPQ)
			cout << "priority queue" << endl;
		else if (!isStack && !isQ && !isPQ)
			cout << "impossible" << endl;
		else
			cout << "not sure" << endl;

	}
}