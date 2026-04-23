// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, k, x;
//         cin >> n >> k >> x;
//         vector<long long> v(n), ans;
//         sort(v.begin(), v.end());
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }
//         for (int i = 0; i < n - 1; ++i)
//         {
//             if ((v[i] + 1) != v[i + 1])
//             {
//                 long long x1 = (v[i] + v[i + 1]) / 2;
//                 ans.push_back(x1);
//             }
//         }
//         if (ans.empty())
//         {
//             for (int i = 0; i <= x; ++i)
//             {
//                 ans.push_back(i);
//             }
//             for(int i=0;i<k;++i)
//             {
//                 cout << ans[i] << " ";
//             }
//             cout << endl;
//         }
//         else if(ans.size()>=k)
//         {
//              for(int i=0;i<k;++i)
//             {
//                 cout << ans[i] << " ";
//             }
//             cout << endl;
//         }
//         else if(ans.size()<k)
//         {
//             long long p=k-ans.size();
//             for(int i=n-1;i>=p;--i)
//             {
//                 ans.push_back(v[i]);
//             }
//             for(int i=0;i<k;++i)
//             {
//                 cout << ans[i] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> v(n), ans;

        for (int i = 0; i < n; ++i) cin >> v[i];
        sort(v.begin(), v.end());

        for (int i = 0; i < n - 1; ++i) {
            if ((v[i] + 1) != v[i + 1]) {
                long long x1 = (v[i] + v[i + 1]) / 2;
                ans.push_back(x1);
            }
        }

        if (ans.empty()) {
            for (int i = 0; i <= x && (int)ans.size() < k; ++i) {
                ans.push_back(i);
            }
        } else if ((int)ans.size() < k) {
            int rem = k - ans.size();
            for (int i = n - 1; i >= 0 && rem > 0; --i) {
                ans.push_back(v[i]);
                rem--;
            }
        }

        for (int i = 0; i < min((int)ans.size(), (int)k); ++i)
            cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}
