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
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b,c;
        cin >> b >> c;
        deque<char> dq;
        for(auto val:a)
        {
            dq.push_back(val);
        }
        int ind=0;
        for(auto val:c)
        {
            if(val == 'D')
            {
                dq.push_back(b[ind]);
            }
            if(val == 'V')
            {
                dq.push_front(b[ind]);
            }
            ind++;
        }
        for(auto val:dq)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}