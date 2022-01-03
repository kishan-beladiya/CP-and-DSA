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

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        // MIN heap
        priority_queue <int, vector<int>, greater<int>> pq1(a,a+n);

        // max heap
        priority_queue <int> pq2(a,a+n);
        
        int ans,minn,maxx;
        ans = INT_MAX;
        minn = INT_MAX;
        maxx = INT_MIN;

        while(abs(pq2.top()-pq1.top())<ans)
        {
            if(pq2.top()-pq1.top()<ans)
            {
                ans = min(ans,pq2.top()-pq1.top());
                int temp1 = pq1.top();
                int temp2 = pq2.top();

                pq1.pop();
                pq2.pop();

                pq1.push(temp1+1);
                pq2.push(temp2-1);
            }
        }  

        cout<<ans<<endl;
    }
}