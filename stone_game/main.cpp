#include <bits/stdc++.h>

using namespace std;
int t,n,i,pozmin,pozmax,ans=0,x,difmax;
int main()
{
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>x;
            if(x==1)
                pozmin=i;
            if(x==n)
                pozmax=i;
        }
        if(pozmin>pozmax)
            swap(pozmin,pozmax);
        difmax=n-pozmax+1;
        if(difmax<pozmin){
            ans+=difmax;
            n-=difmax;
            if(pozmin<=n/2)
                ans+=pozmin;
            else
                ans+=n-pozmin+1;
        }
        else{
            ans+=pozmin;
            n-=pozmin;
            pozmax-=pozmin;
            if(pozmax<=n/2)
                ans+=pozmax;
            else
                ans+=n-pozmax+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
