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

        int a[n],minn,sum;

        sum=0;
        minn = INT_MAX;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
            minn = min(minn,a[i]);
        }

        cout<<sum-minn<<endl;
    }
}