#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<long long> ans,num;
    while(t--)
    {
        long long int n,d;
        vector<long long> ans,num;
        string s;
        cin >> n >> d;
        for(int i=0;i<factorial(n);++i)
        {
            num.push_back(d);
        }
        for(auto x:num)
        {
            s+=to_string(x);
        }
        long long y=stoi(s);
        for(int i=1;i<=9;i+=2)
        {
            if(y%i==0)
            {
                ans.push_back(i);
            }
        }
        for(auto val:ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
