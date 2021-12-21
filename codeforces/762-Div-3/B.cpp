#include<bits/stdc++.h>
using namespace std;
 
// bool isSR(int n)
// {
//     double td = n;
//     int ti = n;
 
//     td = sqrtl(td);
//     ti = sqrtl(ti);
 
//     return td==ti;
// }
 
// bool isCR(int n)
// {
//     double td = n;
//     int ti = n;
 
//     td = cbrtl(td);
//     ti = cbrtl(ti);
 
//     return td==ti;
// }
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
 
        set<int> s;
 
        for(int i=1;i*i<=n;i++)
        {
            s.insert(i*i);
        }
 
        for(int i=1;i*i*i<=n;i++)
        {
            s.insert(i*i*i);
        }
 
        cout<<s.size()<<endl;
    }
}