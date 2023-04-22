#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double x, y, z, s;
    cin >> x >> y >> z;
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        cout << "0" << nl;
    }
    else
    {
        s = (x + y + z) / 2;
        cout << fixed << setprecision(2) << sqrt(s * (s - x) * (s - y) * (s - z)) << nl;
    }
    return 0;
}