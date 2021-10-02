#include<iostream>
using namespace std;
const int mod = 1e9 + 7;
long long Pow(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b % 2 == 1)
			res = ((res % mod) * (a % mod)) % mod;
		b /= 2;
		a = (a * a) % mod;
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << Pow(a, b) << endl;

	}
}