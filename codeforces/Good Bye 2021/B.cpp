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

        int k,flag;
        k=1;
        flag=0;
        string s,ans;
        cin>>s;

        if(s.length()==1 || s[1]==s[0])
        {
            string temp1;
            temp1 = s[0];
            cout<<temp1+temp1<<endl;
            continue;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(s[i]>s[i-1])
                {
                    k = i;
                    flag=1;
                    break;
                }
            }
        }

        if(flag==0)
        {
            string temp1,temp2;
            temp1 = s;
            temp2 = s;
            reverse(temp2.begin(),temp2.end());
            cout<<temp1+temp2<<endl;
        }
        else
        {
            ans = s.substr(0,k);
            string ans1=ans;
            reverse(ans1.begin(),ans1.end());
            ans = ans.append(ans1);

            cout<<ans<<endl;
        }
    }
}