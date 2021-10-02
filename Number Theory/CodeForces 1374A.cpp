#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, n, res;
		cin >> x >> y >> n;
		res = n / x * x + y;
		if (res > n)res -= x;
		cout << res << endl;
	}
}