#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int i,j,p;
        p=0;
        j=0;
        vector<char> v(n,'.');

        for(i=k;i<n;i++)
        {
            v[i] = s[i];
        }

        j=0;

        for(i=k-1;i>=0 || i>=1;i=i-2)
        {
            v[i] = s[j];
            j++;
        }

        if(i==-2)
        {
            p=1;
        }

        for(i=p;i<k;i=i+2)
        {
            v[i] = s[j];
            j++;
        }

        string ans(v.begin(),v.end());

        cout<<ans<<endl;
    }
}