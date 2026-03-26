#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> strings;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            string tmp = s[0] + to_string(s.size()-2) + s.back();
            strings.push_back(tmp);
        }
        else
        {
            strings.push_back(s);
        }
    }

    for (const string &s : strings)
    {
        cout << s << endl;
    }

    return 0;
}