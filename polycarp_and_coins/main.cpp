#include <bits/stdc++.h>

using namespace std;
long long x,t;
int main()
{
    cin>>t;
    while(t--){
        cin>>x;
        if(x%3 == 0)
            cout<<x/3<<" "<<x/3<<'\n';
        else if(x%3 == 1)
            cout<<x/3+1<<" "<<x/3<<'\n';
        else
            cout<<x/3<<" "<<x/3+1<<'\n';
    }
    return 0;
}
