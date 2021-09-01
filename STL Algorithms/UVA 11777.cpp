#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#define endl '\n'
using namespace std;
int main() {
	int t;
	cin >> t;
	char grade;
	for (int i = 1; i <= t; i++)
	{
		vector<int>v(7);
		for (int i = 0; i < v.size(); i++)
		{
			cin >> v[i];
		}
		sort(v.begin() + 4, v.end());
		int total = accumulate(v.begin(), v.end() - 3, 0) + accumulate(v.begin() + 5, v.end(), 0) / 2;
		(total >= 90) ? grade = 'A' : (total >= 80) ? grade = 'B' : (total >= 70) ? grade = 'C' : (total >= 60) ? grade = 'D' : grade = 'F';
		cout << "Case " << i << ": " << grade << endl;
	}
}