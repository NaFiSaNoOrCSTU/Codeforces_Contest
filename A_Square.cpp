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
        int cnt=0;
        vector<int> v(4);
        for(int i=0;i<4;++i)
        {
            cin >> v[i];
        }
        for(int i=1;i<4;++i)
        {
            if(v[i]!=v[0]) 
            {
                cnt=1;
                break;
            }
        }
        (cnt) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}