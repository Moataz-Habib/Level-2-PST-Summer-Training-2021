#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int main() {
	long long  arr[N], pre[N], presort[N], m;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> arr[i];
		pre[i] = pre[i - 1] + arr[i];
	}
	sort(arr, arr + m + 1);
	for (int i = 1; i <= m; i++)
	{
		presort[i] = presort[i - 1] + arr[i];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n, l, r;
		cin >> n >> l >> r;
		if (n == 1)
			cout << pre[r] - pre[l - 1] << endl;
		else
			cout << presort[r] - presort[l - 1] << endl;
	}
}