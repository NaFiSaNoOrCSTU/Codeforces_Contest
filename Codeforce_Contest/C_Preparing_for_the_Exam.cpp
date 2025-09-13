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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> ans,v;
        if(n!=m)
        {
            for(int i=0;i<m;++i)
            {
                ans.push_back(0);
            }
            for(auto val:ans)
        {
            cout << val;
        }
        cout << endl;
        continue;
        }
        vector<int> list(m),mono(k);
        for(int i=0;i<m;++i)
        {
            cin >> list[i];
        }
        for(int i=0;i<k;++i)
        {
            cin >> mono[i];
        }
        if(m==k)
        {
            if(list==mono)
            {
                for(int i=0;i<m;++i)
            {
                ans.push_back(1);
            }
            for(auto val:ans)
        {
            cout << val;
        }
        cout << endl;
        continue;
            }
        }
        v=list;
        for(int i=0;i<m;++i)
        {
            v.erase(v.begin()+i);
            // for(auto x:v)
            // {
            //     cout << x;
            // }
            // cout << endl;
            if(v==mono)
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }
            v=list;
        }
        for(auto val:ans)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}