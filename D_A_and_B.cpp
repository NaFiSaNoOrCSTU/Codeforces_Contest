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
        string s;
        cin >> s;
        int aa=0,bb=0,a1=0,b1=0,ans=0,x,y;
        if(n==2 || n==1) 
        {
            cout << 0 << endl;
            continue;
        }
        else if(n%2==0 && n!=2 && n!=1)
        {
           int mid=n/2;
            for(int i=mid-1;i>=0;--i)
            {
                if(s[i]=='b')
                {
                    bb=i;
                }
                x=mid-bb;
            }
            for(int i=mid+1;i<n;++i)
            {
                if(s[i]=='b')
                {
                    b1=i;
                }
                y=b1-mid;
            }
            if((x+y)%2==0)
            {
                ans=(x+y)/2;
            } 
            else
            {
                int val=x+y;
                ans=(val+1)/2;
            }   
        }
       else if(n%2!=0 && n!=2 && n!=1)
        {
            int mid=(n-1)/2;
            for(int i=mid-1;i>=0;--i)
            {
                if(s[i]=='b')
                {
                    bb=i;
                }
                x=mid-bb;
            }
            for(int i=mid+1;i<n;++i)
            {
                if(s[i]=='b')
                {
                    b1=i;
                }
                y=b1-mid;
            }
            if((x+y)%2==0)
            {
                ans=(x+y)/2;
            } 
            else
            {
                int val=x+y;
                ans=(val+1)/2;
            }   
        }
        cout << ans << endl;
    }
    return 0;
}