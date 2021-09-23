#include<iostream>
using namespace std;
const int N = 2e5 + 5;
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	long long l[N], r[N], d[N], cnt[N], arr[N], add[N], x[N], y[N];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> l[i] >> r[i] >> d[i];
	}
	for (int i = 1; i <= k; ++i) {
		cin >> x[i] >> y[i];
		cnt[x[i]] ++;
		cnt[y[i] + 1]--;
	}
	for (int i = 1; i <= m; i++)
	{
		cnt[i] += cnt[i - 1];
	}
	for (int i = 1; i <= m; i++)
	{
		add[l[i]] += cnt[i] * d[i];
		add[r[i] + 1] -= cnt[i] * d[i];
	}

	for (int i = 1; i <= n; i++)
	{
		add[i] += add[i - 1];
		cout << arr[i] + add[i] << " ";
	}
}