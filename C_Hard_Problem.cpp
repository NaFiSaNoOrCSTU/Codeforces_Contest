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
//         long long m, a, b, c, sum = 0, remain, remain1;
//         cin >> m >> a >> b >> c;
//         if (a <= m)
//         {
//             if (a == m)
//             {
//                 sum += a;
//                 remain = 0;
//             }
//             else
//             {
//                 sum += a;
//                 remain = m - a;
//             }
//         }
//         if (a > m)
//         {
//             sum += m;
//             remain = 0;
//         }
//         if (b <= m)
//         {
//             if (b == m)
//             {
//                 sum += b;
//                 remain1 = 0;
//             }
//             else
//             {
//                 sum += b;
//                 remain1 = m - b;
//                 if (c <= remain1)
//                 {
//                     sum += c;
//                     remain1 = 0;
//                 }
//                 else
//                 {
//                     if ((c - remain1) >= remain)
//                     {
//                         sum += remain;
//                         remain = 0;
//                     }
//                     else
//                     {
//                         sum += (c - remain);
//                         remain -= (c - remain);
//                     }
//                 }
//             }
//         }
//         if (b > m)
//         {
//             sum += m;
//             remain1 = 0;
//         }
//         long long remain_monkey = (b + c) - sum;
//         long long remain_seat = remain + remain1;
//         if (remain_seat >= remain_monkey)
//         {
//             sum += remain_monkey;
//         }
//         else
//         {
//             sum += remain_seat;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
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
        long long int m,a,b,c;
        cin >> m >> a >> b >> c;
        long long sum=0,remain,remain1;
        if(a<=m)
        {
            sum+=a;
            remain=m-a;
        }
        if(a>m)
        {
            sum+=m;
            remain=0;
        }
        if(b<=m)
        {
            sum+=b;
            remain1=m-b;
        }
        if(b>m)
        {
            sum+=m;
            remain1=0;
        }
        long long remain_seat=remain+remain1;
        if(c<=remain_seat)
        {
            sum+=c;
        }
        else
        {
            sum+=remain_seat;
        }
        cout << sum << endl;
    }
    return 0;
}