#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
 
        if(s.length()%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int i,j,flag;
            i=0;
            flag=0;
            j=s.length()/2;
 
            for(int i=0;i<s.length()/2;i++)
            {
                if(s[i]!=s[j])
                {
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}