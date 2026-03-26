#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    int result = ((n / 2) * m) + (n % 2) * (m / 2);

    cout << result << endl;

    return 0;
}