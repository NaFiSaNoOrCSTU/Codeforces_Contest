#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n),v1;
        for(long long i=0;i<n;++i)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long l=0,r=n-1,ind=0;
        while(l<=r)
        {
            v1.push_back(v[l]);
            //ind++;
            v1.push_back(v[r]);
            //ind++;
            l++;
            r--;
        }
        long long sum=0;
        for(long long i=0;i<n-1;++i)
        {
            sum+=abs(v1[i]-v1[i+1]);
        }
        sum+=abs(v1[0]-v1[n-1]);
        cout << sum << endl;
    }
    return 0;
}