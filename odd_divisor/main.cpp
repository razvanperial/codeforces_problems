#include <bits/stdc++.h>

using namespace std;
long long n,t;
int main()
{   cin>>t;
    while(t--){
        cin>>n;
        if(n%2){
            cout<<"YES"<<'\n';
        }
        else{
            while(n%2 == 0){
                n /= 2;
            }
            if(n>1)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';

        }
    }
    return 0;
}
