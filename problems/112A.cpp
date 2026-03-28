#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1)
        c = tolower(c);
    for (char &c : s2)
        c = tolower(c);

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            return 0;
        }
        if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}