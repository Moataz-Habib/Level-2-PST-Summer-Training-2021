#include<iostream>
using namespace std;
const int  N = 2e3 + 5;
int n, m;
int ans[N];
int frq[N];
int siz;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int l, r;
		cin >> l >> r;
		frq[l]++;
		frq[r + 1]--;
	}
	for (int i = 1; i <= m; i++)
	{
		frq[i] += frq[i - 1];
		if (frq[i] == 0)
		{
			siz++;
			ans[siz] = i;
		}
	}
	cout << siz << endl;
	for (int i = 1; i <= siz; i++)
	{

		cout << ans[i] << " ";
	}
}