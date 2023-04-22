#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
 
bool Check(int N, int pos) { return (bool)(N & (1 << pos)); }
int Set(int N, int pos) { return N = N | (1 << pos); }
 
const int mx = 100000000;
int N = mx;
int status[(mx / 32) + 2];
vector<int> primes;
void sieve()
{
    int i, j, sqrtN, cnt = 1;
    sqrtN = int(sqrt(N));
    for (i = 3; i <= sqrtN; i += 2)
    {
        if (Check(status[i >> 5], i & 31) == 0)
        {
            cnt++;
            for (j = i * i; j <= N; j += (i << 1))
            {
                status[j >> 5] = Set(status[j >> 5], j & 31);
            }
        }
    }
    primes.push_back(2);
 
    for (i = 3; i <= N; i += 2)
    {
        if (Check(status[i >> 5], i & 31) == 0)
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve();
    for (int i = 0; i < n; i++)
    {
        cout << primes[primes[i] - 1] << " ";
    }
}
// n(max)=397557, Used: 529 ms, 61516 KB