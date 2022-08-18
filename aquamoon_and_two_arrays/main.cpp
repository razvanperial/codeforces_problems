#include <bits/stdc++.h>

using namespace std;
long long t,n,x,s1,s2,m,d,v1[105],v2[105],i,dif[105],j;
int main()
{
    cin>>t;
    while(t--){
        s1=0;
        s2=0;
        d=0;
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>v1[i];
            s1 += v1[i];
        }
        for(i=1; i<=n; i++){
            cin>>v2[i];
            s2 += v2[i];
            if(v1[i] > v2[i])
                d += v1[i] - v2[i];
            dif[i] = v1[i] - v2[i];
        }
        if(s1 != s2)
            cout<<-1<<'\n';
        else{
            cout<<d<<'\n';
            for(i=1; i<=n; i++){
                if(dif[i] < 0){
                    j = i+1;
                    while(dif[i] < 0){
                        if(dif[j] > 0){
                            while(dif[j]!=0 && dif[i] != 0){
                                cout<<j<<" "<<i<<'\n';
                                dif[j]--;
                                dif[i]++;
                            }
                        }
                        j++;
                    }
                }
                else if (dif[i] > 0){
                    j=i+1;
                    while(dif[i] > 0){
                        if(dif[j] < 0){
                            while(dif[j] != 0 && dif[i] != 0){
                                cout<<i<<" "<<j<<'\n';
                                dif[j]++;
                                dif[i]--;
                            }
                        }
                        j++;
                    }
                }
            }
        }
    }
    return 0;
}
