#include <bits/stdc++.h>

using namespace std;
long long t,v[125],i,x,ans;
char s[55];
int main()
{   cin>>t;
    for(int j=1; j <= t; j++){
        cin>>s;
        ans = 0;
        fill(v+97, v+125, 0);
        for(i = 0; i < strlen(s); i++){
            x = s[i];
            v[x]++;
            if(v[x] == 1)
                ans++;
        }
        if(strlen(s) == 1)
            cout<<0<<'\n';
        else
            cout<<ans<<'\n';
    }
    return 0;
}
