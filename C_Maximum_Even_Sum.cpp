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
        long long a,b;
        cin >> a >> b;
        if(b%2==0)
        {
            long long k;
            k=b/2;
            __int128 sum=(__int128)(k*a)+(b/k);
            if(sum%2==0) cout << (long long)sum << endl;
            else cout << -1 << endl;
        }
        else
        {
            __int128 s=(b*a)+1;
            if(s%2==0) cout << (long long)s << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}