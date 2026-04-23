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
        vector<long long> v(n),ans;
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i=i+2)
        {
            ans.push_back(v[i+1]-v[i]);
        }
        sort(ans.rbegin(),ans.rend());
        cout << ans[0] << endl;
        ans.clear();
    }
    return 0;
}