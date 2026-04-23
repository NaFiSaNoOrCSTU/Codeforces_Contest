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
        string s,t;
        cin >> s >> t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(s[i]!=t[i])
            {
                cnt=1;
                break;
            }
        }
        (cnt) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}