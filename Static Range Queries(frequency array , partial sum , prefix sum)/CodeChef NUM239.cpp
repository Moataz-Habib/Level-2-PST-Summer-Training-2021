#include<iostream>
using namespace std;
const int N = 1e5 + 5;
int arr[N];
int main() {
	for (int i = 0; i < N; i++)
	{
		if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
			arr[i] = 1;
	}
	for (int i = 1; i < N; i++)
	{
		arr[i] += arr[i - 1];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		cout << arr[r] - arr[l - 1] << endl;
	}
}