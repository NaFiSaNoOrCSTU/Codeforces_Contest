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
        vector<int> v(n);
        int minus=0,zero=0,op=0;
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            if(v[i]==-1) minus++;
            if(v[i]==0) zero++;
        }
        if(minus%2!=0) op+=2;
        op+=zero;
        cout << op << endl;
    }
    return 0;
}