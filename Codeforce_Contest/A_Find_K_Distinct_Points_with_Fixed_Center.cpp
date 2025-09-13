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
        int x,y,k;
        cin >> x >> y >> k;
        if(k%2==0)
        {
            for(int i=k/2;i>0;--i)
            {
                cout << x << " " << y+i << endl;
                cout << x << " " << y-i << endl;
            }
        }
        else
        {
            k-=1;
            for(int i=k/2;i>0;--i)
            {
                cout << x << " " << y+i << endl;
                cout << x << " " << y-i << endl;
            }
            cout << x << " " << y << endl;
        }
    }
    return 0;
}