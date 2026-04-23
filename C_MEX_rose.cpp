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
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);
//         set<int> s;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }
//         int num=0;
//         int op = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (v[i] == k)
//             {
//                 op++;
//             }
//             if (v[i] < k)
//         {
//                 s.insert(v[i]);
//         }
//         }
//         num = k - s.size();
//         cout << max(num, op) << endl;
//         return 0;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,op=0,num = 0;
        cin >> n >> k;
        vector<int> a(n);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i] == k) op++;
            if(a[i] < k) s.insert(a[i]);
        }
        num = k-s.size();
        cout << max(op,num) << endl;  
    }
}