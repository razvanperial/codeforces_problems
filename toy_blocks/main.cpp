#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,ans=0,sum=0,k,Max=0;
        long long v[100001];
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]>=Max)
                Max=v[i];
        }
            long long x=(sum+n-2)/(n-1);
            k=max(Max,x);
            cout<<k*(n-1)-sum;
            cout<<'\n';
    }
    return 0;
}
