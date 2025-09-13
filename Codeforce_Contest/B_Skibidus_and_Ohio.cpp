// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         map<char,int> mp;
//         for(char ch:s)
//         {
//             mp[ch]++;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int minAchievableLength(string s) {
    int n = s.length();
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            s.erase(i + 1, 1);
            --i; // Move back to check previous character again
            --n; // Reduce the length of the string
        }
    }
    return s.length();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minAchievableLength(s) << "\n";
    }
    return 0;
}
