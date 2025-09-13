#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<char> v;
    while (t--)
    {
        v.clear();
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'p')
                v.push_back('q');
            if (s[i] == 'q')
                v.push_back('p');
            if (s[i] == 'w')
                v.push_back('w');
        }
        reverse(v.begin(), v.end());
        for (auto val : v)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}