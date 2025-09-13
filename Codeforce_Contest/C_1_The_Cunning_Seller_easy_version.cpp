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
        long long n;
        cin >> n;
        double x =log(n)/log(3);
        double cost=pow(3,x+1)+(x*pow(3,x-1));
        cout << cost << endl;
    }
    return 0;
}