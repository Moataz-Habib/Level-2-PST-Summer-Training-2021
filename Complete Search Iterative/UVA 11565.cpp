#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		bool valid = false;
		for (int i = -100; i <= 100 && !valid; i++)
		{
			for (int j = -100; j <= 100 && !valid; j++)
			{
				for (int k = -100; k <= 100 && !valid; k++)
				{

					if (i != j && i != k && j != k && i + j + k == a && i * j * k == b && (i * i + j * j + k * k) == c) {
						cout << i << " " << j << " " << k << endl;
						valid = true;
					}

				}
			}
		}
		if (!valid)cout << "No solution." << endl;
	}
}