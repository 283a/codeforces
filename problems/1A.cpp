#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a;
    cin >> n >> m >> a;

    double n_val,m_val;

    n_val = (n + a-1)/a;
    m_val = (m + a-1)/a;

    long long result = n_val * m_val;

    cout << result << endl;

    return 0;
}