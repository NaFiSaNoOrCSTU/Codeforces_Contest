#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1')
            {
                v.push_back(i+1);
            }
        }
        if(v.empty())
        {
            cout << 0 << endl;
            cout << endl;
        }
        else
        {
            cout << v.size() << endl;
            for(auto val:v)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}