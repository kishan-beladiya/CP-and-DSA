#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int one,zero;
        one=zero=0; 

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int ans = 0;

        ans = min(one,zero)-1;

        if(ans<=0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}