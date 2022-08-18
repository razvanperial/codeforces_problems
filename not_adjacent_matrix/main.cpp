#include <iostream>

using namespace std;
long long a[105][105];
long long n,t,i,j,val;
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        if(n==2)
            cout<<-1<<'\n';
        else{
            j=1;
            val=1;
            for(i=1;i<=n;i++){
                while(j<=n){
                    a[i][j]=val;
                    val++;
                    j+=2;
                }
                if(j==n+2)
                    j=2;
                else
                    j=1;
            }
            j=2;
            for(i=1;i<=n;i++){
                while(j<=n){
                    a[i][j]=val;
                    val++;
                    j+=2;
                }
                if(j==n+2)
                    j=2;
                else
                    j=1;
            }
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    cout<<a[i][j]<<" ";
                cout<<'\n';
            }
        }
    }
    return 0;
}
