#include <bits/stdc++.h>

using namespace std;
long long t,n,s,v[200005],i,ans,val;
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        s=0;
        for(i=1;i<=n;i++){
            cin>>v[i];
            s+=v[i];
        }
        if(s%n)
            cout<<-1<<'\n';
        else{
            val=s/n;
            for(i=1;i<=n;i++)
                if(v[i]>val)
                    ans++;
            cout<<ans<<'\n';
        }

    }
    return 0;
}
