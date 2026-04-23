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
        string s;
        cin >> s;
        if (s == "us")
        {
            cout << "i" << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < s.size() - 2; ++i)
            {
                cout << s[i];
            }
            cout << "i" << endl;
        }
    }
    return 0;
}