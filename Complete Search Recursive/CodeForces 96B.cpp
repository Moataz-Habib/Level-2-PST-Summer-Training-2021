#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
vector<ll>lucky;
void backtrack(ll num,int cnt4,int cnt7) {
	if (num > 1e10)
		return;
	if (cnt4 == cnt7) {
		lucky.push_back(num);
	}
	backtrack(num * 10 + 4, cnt4 + 1, cnt7);
	backtrack(num * 10 + 7, cnt4, cnt7 + 1);
}
int main() {
	int n;
	cin >> n;
	backtrack(0, 0, 0);
	sort(lucky.begin(), lucky.end());
	cout << *lower_bound(lucky.begin(), lucky.end(), n);
}