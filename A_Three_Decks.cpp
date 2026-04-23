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
        int a,b,c;
        cin >> a >> b >> c;
        int r=c-(b-a);
        if(r==(a+(b-a)))
        {
            cout << "YES" << endl;
            continue;
        }
        if((r-2)==(a+r+1) && (r-2)==b+1) 
        {
            cout << "YES" << endl;
            continue;
        }
        else cout << "NO" << endl;
     }
     return 0;
 }