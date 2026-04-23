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
        vector<int> v(n),v_cpy(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        v_cpy=v;
        sort(v_cpy.begin(),v_cpy.end());
        for(int i=0;i<n-1;++i)
        {
            if((v_cpy[i]+v[i]) == (v_cpy[i+1]+v[i+1])) swap(v_cpy[i],v_cpy[i+1]);
        }
        for(int i=0;i<n;++i)
        {
            cout << v_cpy[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<int> q(n);
        // Construct q as [2, 3, ..., n, 1]
        for (int i = 0; i < n; i++) {
            q[i] = (i + 1) % n + 1;
        }

        for (int i = 0; i < n; i++) {
            cout << q[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
