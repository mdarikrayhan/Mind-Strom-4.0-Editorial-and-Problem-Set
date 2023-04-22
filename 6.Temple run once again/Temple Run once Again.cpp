#include <bits/stdc++.h>
using namespace std;
long long m, n;
long long check(long long a[], long long x)
{
    long long cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        cnt += ((a[i] + x - 1) / x);
    }
    if (cnt <= m)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}

long long l_bound(long long arr[], long long low, long long high)
{
    long long mid;
    while (high - low > 1)
    {
        mid = ((low + high) / 2);
        if ((check(arr, mid)) >= 1)
            high = mid;
        else
            low = mid;
    }
    return low;
}

int main()
{
    cin >> n >> m;
    long long arr[n];
    long long zero = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zero++;
    }
    if (zero == n)
    {
        cout << 0 << endl;
        return 0;
    }
    long long x = l_bound(arr, 0, 1000000002);
    if (x == 1000000001)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x + 1 << endl;
    }
    return 0;
}
