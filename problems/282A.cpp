#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    int result = 0;

    while (t--)
    {
        string s;
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            result++;
        }
        else
        {
            result--;
        }
    }

    cout << result << endl;

    return 0;
}