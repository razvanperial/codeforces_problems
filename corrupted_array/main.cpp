#include<bits/stdc++.h>
using namespace std;
long long t,n,a[200010],ans,i;
int solve()
{   long long sum=0;
    for(i=1; i<=n+1; i++)
        sum+=a[i];
    if(sum==2*a[n+1])
        return  n+1;
    for(i=1;i<=n+1;i++)
        if(sum==a[i]+a[n+2])
            return i;
    return 0;

}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n+2;i++)
            cin>>a[i];
        sort(a+1,a+n+3);
        ans=solve();
        if(ans){
        for(i=1; i<=n+1; i++)
            if(i!=ans)
                cout<<a[i]<<" ";
        }
        else
            cout<<-1;
        cout<<'\n';
    }
}
