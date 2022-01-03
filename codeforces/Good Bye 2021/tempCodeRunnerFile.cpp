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

        int k;
        k=1;
        string s,ans;
        cin>>s;

        for(int i=1;i<n;i++)
        {
            if(s[i]>s[i-1])
            {
                k = i;
                break;
            }
        }

        ans = s.substr(0,k);
        for(int i=k-1;i>=0;i--)
        {
            ans = ans + s[i];
        }

        cout<<ans<<endl;
    }
}