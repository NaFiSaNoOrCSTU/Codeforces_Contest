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
        long long n;
        cin >> n;
        vector<long long> ans;
        for (int k = 1; k <= 18; k++)
        {
            long long denominator = 1 + (long long)pow(10LL, k);
            if (denominator > n)
                break;
            if (n % denominator == 0)
            {
                long long x = n / denominator;
                ans.push_back(x);
            }
        }
        if (ans.empty())
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (auto val : ans)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
