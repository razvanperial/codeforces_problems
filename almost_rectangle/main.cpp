#include <iostream>

using namespace std;
char a[400][400];
int main()
{   int t,n,i,j,i1,i2,j1,j2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i1=0;
        i2=0;
        j1=0;
        j2=0;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++){
                cin>>a[i][j];
                if(a[i][j]=='*')
                    if(!i1){
                        i1=i;
                        j1=j;
                    }
                    else{
                        i2=i;
                        j2=j;
                    }
            }
            if(i1==i2){
                if(i1>1){
                    i1--;
                    i2--;
                    a[i1][j1]='*';
                    a[i2][j2]='*';
                }
                else{
                    i1++;
                    i2++;
                    a[i1][j1]='*';
                    a[i2][j2]='*';
                }
            }
            else if(j1==j2){
                if(j1<n){
                    j1++;
                    j2++;
                    a[i1][j1]='*';
                    a[i2][j2]='*';
                }
                else{
                    j1--;
                    j2--;
                    a[i1][j1]='*';
                    a[i2][j2]='*';
                }
            }
            else{
                a[i2][j1]='*';
                a[i1][j2]='*';
            }
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    cout<<a[i][j];
                cout<<'\n';
            }
    }
    return 0;
}
