#include <bits/stdc++.h>

using namespace std;
long long sum,n,l,r,t,i,mini,maxi,val,i1,i2,ans,x,k=0;
long long v[200005];
long long cautmin(long long v[], long long x, long long a, long long b){
    mini=a;
    maxi=b;
    ans=0;
    while(maxi>=mini){
        val = (maxi+mini)/2;
        if(x+v[val]>=l){
            maxi=val-1;
        }
        else{
            ans = val;
            mini=val+1;
        }
    }
    return ans;
}
long long cautmax(long long v[], long long x, long long a, long long b){
    mini=a;
    maxi=b;
    ans=0;
    while(maxi>=mini){
        val = (maxi+mini)/2;
        if(x+v[val] <= r){
            mini = val+1;
        }
        else{
            ans=val;
            maxi=val-1;
        }
    }
    return ans;
}
int main()
{   cin>>t;
    while(t--){
        k=0;
        cin>>n>>l>>r;
        for(i=1; i<=n; i++)
            cin>>v[i];
        sort(v+1,v+n+1);
        for(i=1; i<n; i++){
            i1=cautmin(v, v[i], i+1, n);
            i2=cautmax(v, v[i], i+1, n);
            if(i1)
                if(i2)
                    k+=i2-i1-1;
                else
                    k+=n-i1;
            else
                if(i2)
                    k+=i2-i-1;
                else
                    k+=n-i;
        }
        cout<<k<<'\n';
    }
    return 0;
}

