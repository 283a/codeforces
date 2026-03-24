#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 6;
    int m = 6;

    int result;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            int tmp;
            cin >> tmp;

            if (tmp == 1)
            {
                result = abs(3 - i) + abs(3 - j);
            }
        }
    }

    cout << result << endl;
    return 0;
}