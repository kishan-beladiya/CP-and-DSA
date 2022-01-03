#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }

    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s,p;
        cin>>s>>p;

        unordered_map<char,int> mp;
        int v,c,maxx,ans;
        char finalChar,tv,tc;
        maxx = INT_MIN;
        v=c=ans=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?' && p[i]!='?')
            {
                mp[p[i]]++;
                if(isVowel(p[i]))
                {
                    tv = p[i];
                    v++;
                }
                else
                {
                    tc = p[i];
                    c++;
                }
            }
            else if(s[i]!='?' && p[i]=='?')
            {
                mp[s[i]]++;
                if(isVowel(s[i]))
                {
                    tv = s[i];
                    v++;
                }
                else
                {
                    tc = s[i];
                    c++;
                }
            }
        }

            if(v==0)
            {
                if(mp.size()>1)
                {
                    finalChar = 'a';
                }
                else
                {
                    finalChar = tc;
                }
                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                    {
                        s[i] = finalChar;
                    }
                    if(p[i]=='?')
                    {
                        p[i] = finalChar;
                    }
                }
            }
            else if(c==0)
            {
                if(mp.size()>1)
                {
                    finalChar = 'b';
                }
                else
                {
                    finalChar = tv;
                }
                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                    {
                        s[i] = finalChar;
                    }
                    if(p[i]=='?')
                    {
                        p[i] = finalChar;
                    }
                }
            }
            else if(v<c)
            {
                for(auto j : mp)
                {
                    if(isVowel(j.first) && j.second>maxx)
                    {
                        maxx = j.second;
                        finalChar = j.first;
                    }
                }

                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                    {
                        s[i] = finalChar;
                    }
                    if(p[i]=='?')
                    {
                        p[i] = finalChar;
                    }
                }
            }
            else if(v>c)
            {
                for(auto j : mp)
                {
                    if(!isVowel(j.first) && j.second>maxx)
                    {
                        maxx = j.second;
                        finalChar = j.first;
                    }
                }

                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                    {
                        s[i] = finalChar;
                    }
                    if(p[i]=='?')
                    {
                        p[i] = finalChar;
                    }
                }
            }
            else if(v==c)
            {
                for(auto j : mp)
                {
                    if(j.second>maxx)
                    {
                        maxx = j.second;
                        finalChar = j.first;
                    }
                }

                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                    {
                        s[i] = finalChar;
                    }
                    if(p[i]=='?')
                    {
                        p[i] = finalChar;
                    }
                }
            }

            for(int i=0;i<s.length();i++)
            {
                if(s[i]!=p[i])
                {
                    if((isVowel(s[i]) && isVowel(p[i])) || (!isVowel(s[i]) && !isVowel(p[i])))
                    {
                        ans = ans+2;
                    }
                    else
                    {
                        ans++;
                    }
                }
            }
            // cout<<p<<endl;
            // cout<<s<<endl;
            cout<<ans<<endl;

    }
}