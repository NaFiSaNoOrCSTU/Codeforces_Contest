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
        int a, b, tmp, tmp1;
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a >> b;
            if (i == 0)
            {
                if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
                    cnt = a;
                else
                    cnt = a - 1;
                tmp = a;
                tmp1 = b;
            }
            else
            {
                if ((a - tmp) % 2 != 0 && tmp1 != b)
                    cnt += (a - tmp);
                else if ((a - tmp) % 2 != 0 && tmp1 == b)
                    cnt += (a - tmp) - 1;
                else if ((a - tmp) % 2 == 0 && tmp1 != b)
                    cnt += (a - tmp) - 1;
                else if ((a - tmp) % 2 == 0 && tmp1 == b)
                    cnt += (a - tmp);
                tmp = a;
                tmp1 = b;
            }
        }

         cout << cnt+(m-a) << endl;
    }
    return 0;
}