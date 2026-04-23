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
        int n,mx=-1;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        cout << mx << endl;
    }
    return 0;
}