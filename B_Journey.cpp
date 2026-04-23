#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long sum = a + b + c;
        int d = n / sum;
        n -= (d * sum);
        int day = d * 3;
        if (n > 0)
        {
            day++;
            n -= a;
        }
        if (n > 0)
        {
            day++;
            n -= b;
        }
        if (n > 0)
        {
            day++;
        }
        cout << day << endl;
    }
    return 0;
}