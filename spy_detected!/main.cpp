#include <iostream>

using namespace std;
int v[105];
int a[105];
int main()
{   int n,t,x,nr,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fill(v+1,v+101,0);
        nr=-1;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            v[a[i]]++;
            if(v[a[i]]>=2)
                nr=a[i];
        }
        i=1;
        while(a[i]==nr){
            i++;
        }
        cout<<i<<'\n';
    }
    return 0;
}
