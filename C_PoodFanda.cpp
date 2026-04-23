#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, del;
        cin >> n;
        vector<long long> f(4), s(4), t(4), fo(4), fi(4), d;
        vector<vector<long long>> v(n);
        for (int i = 0; i < 4; ++i)
        {
            cin >> f[i];
        }
        for (int i = 0; i < 4; ++i)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 4; ++i)
        {
            cin >> t[i];
        }
        for (int i = 0; i < 4; ++i)
        {
            cin >> fo[i];
        }
        for (int i = 0; i < 4; ++i)
        {
            cin >> fi[i];
        }
        // long long ind = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> del;
            d.push_back(del);
            for (int i = 0; i < 20; ++i)
            {
                long long x;
                cin >> x;
                v[j].push_back(x);
            }
            // ind++;
        }
        vector<long long> first,second,third,forth,fifth;
        __int128 s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
        __int128 sum = 0;
        for (int i = 0; i < n; ++i)
        {
            s1=0;
            for (int j = 0; j < 4; ++j)
            {
                s1 += v[i][f[j] - 1];
            }
            first.push_back(s1);
            //s1 = min(s1, tmp);
           // tmp = s1;
        }
        sort(first.begin(),first.end());
        sum += first[0];
        for (int i = 0; i < n; ++i)
        {
            s2=0;
            //long long tmp = -1;
            for (int j = 0; j < 4; ++j)
            {
                s2 += v[i][s[j] - 1];
            }
            second.push_back(s2);
            // s2 = min(s2, tmp);
            // tmp = s2;
        }
         sort(second.begin(),second.end());
        sum += second[0];
        
        for (int i = 0; i < n; ++i)
        {
            s3=0;
            for (int j = 0; j < 4; ++j)
            {
                s3 += v[i][t[j] - 1];
            }
            third.push_back(s3);
            // s3 = min(s3, tmp);
            // tmp = s3;
        }
         sort(third.begin(),third.end());
        sum += third[0];
    
        for (int i = 0; i < n; ++i)
        {
            s4=0;
           // long long tmp = -1;
            for (int j = 0; j < 4; ++j)
            {
                s4 += v[i][fo[j] - 1];
            }
            forth.push_back(s4);
            // s4 = min(s4, tmp);
            // tmp = s4;
        }
         sort(forth.begin(),forth.end());
        sum += forth[0];

        for (int i = 0; i < n; ++i)
        {
            s5=0;
           // long long tmp = -1;
            for (int j = 0; j < 4; ++j)
            {
                s5 += v[i][fi[j] - 1];
            }
            fifth.push_back(s5);
            // s5 = min(s5, tmp);
            // tmp = s5;
        }
         sort(fifth.begin(),fifth.end());
        sum += fifth[0];
        sort(d.rbegin(), d.rend());
        sum += d[0];
        cout << (long long)sum << endl;
    }
    return 0;
}