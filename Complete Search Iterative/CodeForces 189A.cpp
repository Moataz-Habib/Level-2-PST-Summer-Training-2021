#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int Max = 0;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int kc = n - i * a - j * b;
			if (kc >= 0 && kc % c == 0)
				Max = max(Max, i + j + kc / c);
		}
	}
	cout << Max;
}