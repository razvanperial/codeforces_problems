#include <bits/stdc++.h>

using namespace std;
long long t,x,k,n,p,c,c2,cop2,cop;
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        k=0;
        if(n<10)
            cout<<n<<'\n';
        else{
            c=0;
            p=1;
            while(p<n){
                p*=10;
                c++;
            }
            if(p==n)
                c++;
            k+=(c-1)*9;
            cop=n;
            while(cop/10)
                cop/=10;
            k+=(cop-1);
            c2=1;
            cop2=cop;
            while(c2<c){
                cop=cop*10+cop2;
                c2++;
            }
            if(cop<=n)
                k++;
            cout<<k<<'\n';

        }
    }
    return 0;
}
