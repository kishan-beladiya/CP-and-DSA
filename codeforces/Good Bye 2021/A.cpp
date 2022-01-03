#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,zero,ans;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        zero=ans=0;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(mp.find(a[i])==mp.end() || mp[a[i]]<2)
                {
                    mp[a[i]]++;
                }
            }
            else if(a[i]<0)
            {
                if(mp.find(abs(a[i]))==mp.end() || mp[abs(a[i])]<2)
                {
                    mp[abs(a[i])]++;
                }
            }
            else
            {
                zero++;
            }
        }

        for(auto i : mp)
        {
            ans = ans + i.second;
        }

        if(zero>0)
        {
            ans++;
        }

        cout<<ans<<endl;
    }
}