#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int arr[N];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int mn = 1e9, idx = 0;
	for (int i = k; i <= n; i++)
	{
		if (mn > arr[i] - arr[i - k])
		{
			mn = arr[i] - arr[i - k];
			idx = i;
		}
	}
	cout << idx - k + 1;
}