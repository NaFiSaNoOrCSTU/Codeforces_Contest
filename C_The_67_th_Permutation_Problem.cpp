#include <bits/stdc++.h>
using namespace std;
int main() 
{    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(3 * n + 1);
        int l = 3 * n + 1;
        int n1 = n + 1;
        for (int i = 1; i < l; ++i)
        {
            if(i*3 < l) v[i*3] = --n1;
        }
        for (int i = 1, j = 1; i < l; i++, ++j)
        {
            if (i % 3 == 0) 
            {
                --j;
                continue;
            }
            v[i] = n + j;
        }
        for (int i = 1; i < l; ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

}