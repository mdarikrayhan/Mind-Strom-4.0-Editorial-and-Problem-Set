#include <bits/stdc++.h> 
using namespace std;
int main()
{
    long long q;
    cin >> q;
    while (q--)
    {
        long long n, m, p;
        cin >> n >> m >> p;
        long long t = m;
        map<long long, long long> pf;
        for (long long i = 2; i <= sqrt(m); i++)
        {
            while (m % i == 0)
            {
                pf[i]++;
                m /= i;
            }
        }
        if (m > 1)
            pf[m]++;
        long long sod = 1, nod = 1;
        long long ck = 0;
        for (auto it = pf.begin(); it != pf.end(); it++)
        {
            long long x = it->first;
            long long y = it->second;
            nod *= (y + 1);
            long long sum = 0, ad = 1;
            for (long long j = 0; j <= y; j++)
            {
                sum += ad;
                ad *= x; 
            }
            if (sum > 2000000000 || sod > 2000000000)
            {
                ck = 1;
            }
            sod *= sum;
        }
        sod -= t;
        nod -= 1;
        if (sod <= p && nod <= n && ck == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
