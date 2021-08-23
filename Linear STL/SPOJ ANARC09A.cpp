#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
int main()
{
    int i, l, t = 0;
    char s[2001];
    while (1)
    {
        cin >> s;
        if (s[0] == '-')
            break;
        int l = strlen(s);
        int st = 0, rv = 0;
        for (i = 0; i < l; i++)
        {
            if (s[i] == '{')
                st++;
            if (s[i] == '}' && st > 0)
                st--;
            else if (s[i] == '}' && st <= 0)
            {
                rv++; st++;
            }
        }
        rv = rv + ceilf(st / 2.00);
        cout << ++t << "." << " " << rv << endl;
    }
}