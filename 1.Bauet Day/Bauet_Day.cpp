#include <iostream>
using namespace std;
const char nl = '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (n == 2001)
    {
        cout << "14-10-2001" << nl;
    }
    else
    {
        cout << "15-02-2015" << nl;
    }
    return 0;
}