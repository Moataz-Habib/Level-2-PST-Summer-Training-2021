#include <iostream>
#include <algorithm>
using namespace std;
int num[5];
bool solve(int n, int index)
{
    if (index == 5)
        return n == 23;
    return solve(n + num[index], index + 1)
        || solve(n - num[index], index + 1)
        || solve(n * num[index], index + 1);
}
int main()
{
    while (cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4]) {
        if (!num[0] && !num[1] && !num[2] && !num[3] && !num[4])
            break;
        sort(num, num + 5);
        bool valid = false;
        do {
            valid = solve(num[0], 1);
            if (valid)
                break;
        } while (next_permutation(num, num + 5));

        if (valid)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}