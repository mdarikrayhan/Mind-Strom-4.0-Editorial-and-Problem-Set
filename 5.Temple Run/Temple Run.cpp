#include <bits/stdc++.h>
using namespace std;

const long long mx = 1000000;
long long phi[mx + 1];
void totient()
{
    for (long long i = 0; i <= mx; i++)
    {
        phi[i] = i;
    }
    for (long long i = 2; i <= mx; i += 2)
    {
        phi[i] /= 2;
    }
    for (long long i = 3; i <= mx; i += 2)
    {
        if (phi[i] == i)
        {
            for (long long j = i; j <= mx; j += i)
            {
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        } 
    }
}
long long sum[mx + 1];
void gcdsum()
{
    totient();
    for (long long i = 0; i <= mx; i++)
    {
        sum[i] = 0; 
    }
    for (long long i = 1; i <= mx; i++)
    {
        for (long long j = 1; j * i <= mx; j++)
        {
            sum[i * j] += (i * phi[j]);
        }
    }
}

int main()
{
    long long t;
    cin >> t;
    gcdsum();
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        if (sum[n] >= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
