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

        int a[n];
        int minn,maxx,mid;
        minn = INT_MAX;
        maxx = INT_MIN;
        mid = INT_MIN;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]<minn)
            {
                minn = a[i];
            }

            if(a[i]>=maxx)
            {
                mid = maxx;
                maxx = a[i];
            }
            else if(a[i]>mid)
            {
                mid = a[i];
            }
        }

        long long int ans,ans1,ans2;

        ans1 = maxx*(mid-minn);
        ans2 = mid*(maxx-minn);

        ans = max(ans1,ans2);

        cout<<fixed<<ans<<endl;
    }
}