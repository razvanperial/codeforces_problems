#include <bits/stdc++.h>

using namespace std;
long long t,k,n1,n2,v1[105],v2[105],i,j,ans[205],l,ok
;
int main()
{
    cin>>t;
    while(t--){
        cin>>k>>n1>>n2;
        for(i = 1; i <= n1; i++){
            cin>>v1[i];
        }
        for(i = 1; i <= n2; i++){
            cin>>v2[i];
        }
        i = 1;
        j = 1;
        l = 0;
        ok=1;
        while((i <= n1 || j <= n2) && ok){
            if(v1[i] == 0 && i <= n1){
                //cout<<v1[i]<<" ";
                k++;
                l++;
                ans[l] = v1[i];
                i++;
            }
            else if (v2[j] == 0 && j <= n2){
                //cout<<v2[j]<<" ";
                k++;
                l++;
                ans[l] = v2[j];
                j++;
            }
            else{
                if(v1[i] <= k && i <= n1){
                    //cout<<v1[i]<<" ";
                    l++;
                    ans[l] = v1[i];
                    i++;
                }
                else if (v2[j] <= k && j <= n2){
                    //cout<<v2[j]<<" ";
                    l++;
                    ans[l] = v2[j];
                    j++;
                }
                else
                    ok = 0;
            }
        }
        if(ok){
            for(i=1;i<=l;i++)
                cout<<ans[i]<<" ";
            cout<<'\n';
        }
        else
            cout<<-1<<'\n';
    }
    return 0;
}
