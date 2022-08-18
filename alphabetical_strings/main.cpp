#include <bits/stdc++.h>

using namespace std;
long long t,i,j,v[123],p,x,ok;
char s[27];
int main()
{
    cin>>t;
    while(t--){
        cin>>s;
        p=strchr(s,'a')-s;
        if(p>=0){
            j = p + 1;
            i = p - 1;
            x = 98;
            ok = 1;
            while(ok && (i >= 0 || j < strlen(s))){
                if(i>=0 && s[i] == x){
                    x++;
                    i--;
                }
                else if(j<strlen(s) && s[j] == x){
                    x++;
                    j++;
                }
                else ok=0;
            }
            if(ok)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    return 0;
}
