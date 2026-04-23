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
        vector<long long> v(n);
        long long odd=0,even=0;
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            if(v[i]%2==0) even++;
            if(v[i]%2!=0) odd++;
        }
        if(odd==0 || even==0)
        {
            for(int i=0;i<n;++i)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(v.begin(),v.end());
            for(int i=0;i<n;++i)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}