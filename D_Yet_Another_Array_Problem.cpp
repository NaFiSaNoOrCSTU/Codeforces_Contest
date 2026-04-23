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
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        long long x=v[0];
        for(int i=1;i<n;++i)
        {
            x=__gcd(x,v[i]);
        }
        long long res=-1;
        for(long long i=2;i<=1000;++i)
        {
            if(__gcd(x,i) == 1)
            {
                res=i;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> v(n);
//         for(int i = 0;i<n;i++){
//             cin >> v[i];
//         }
//         long long g = v[0];
//         for (int i = 1;i< n;i++){
//             g = __gcd(g, v[i]);
//         }
//         long long ans = -1;
//         for (long long x = 2;x<=100;x++) {
//             if (__gcd(g, x) == 1) {
//                 ans = x;
//                 break;
//             }
//         }

//         cout << ans << endl;
//     }

// }