#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;

        int ans,dr,dc;
        ans=0;
        dr=dc=1;

        while(rb!=rd && cd!=cb)
        {
            if(rb+dr<=n && rb+dr>0)
            {
                rb= rb+dr;
            }
            else
            {
                dr=-1;
                rb=rb+dr;
            }

            if(cb+dc<=m && cd+dc>0)
            {
                cb=cb+dc;
            }
            else
            {
                dc=-1;
                cb=cb+dc;
            }
            ans++;
        }

        cout<<ans<<endl;
    }
}