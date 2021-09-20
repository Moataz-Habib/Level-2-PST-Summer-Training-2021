#include<iostream>
using namespace std;
const int N = 2e5 + 5;
int arr[N];
int main() {
	int n, k, q;
	cin >> n >> k >> q;
	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		arr[l]++;
		arr[r + 1]--;
	}

	for (int i = 1; i < N; i++)
	{
		arr[i] += arr[i - 1];
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] >= k)arr[i] = 1;
		else arr[i] = 0;
	}
	for (int i = 1; i < N; i++) {
		arr[i] += arr[i - 1];
	}
	while (q--)
	{

		int a, b;
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << endl;
	}
}