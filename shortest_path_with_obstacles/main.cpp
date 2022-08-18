#include <bits/stdc++.h>

using namespace std;
long long t,xa,ya,xb,yb,xf,yf,maxi,mini,s;
int main()
{
    cin>>t;
    while(t--){
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if(xa==xb && xb==xf){
            maxi=max(ya,yb);
            mini=min(ya,yb);
            if(yf > mini && yf < maxi)
                cout<<maxi-mini+2<<'\n';
            else
                cout<<maxi-mini<<'\n';
        }
        else if (ya==yb && yb==yf){
            maxi=max(xa,xb);
            mini=min(xa,xb);
            if(xf > mini && xf < maxi)
                cout<<maxi-mini+2<<'\n';
            else
                cout<<maxi-mini<<'\n';
        }
        else{
            s=0;
            maxi=max(xa,xb);
            mini=min(xa,xb);
            s+=maxi-mini;
            maxi=max(ya,yb);
            mini=min(ya,yb);
            cout<<s+maxi-mini<<'\n';
        }
    }
    return 0;
}
