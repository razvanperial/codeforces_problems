#include <bits/stdc++.h>

using namespace std;
long long t,a,b,k,d1,d2,val,d,maxi,mini,i;
long long nrpt(long long n)
{
    long long i,aux=n,k=0;
    if(n==1)
        return 0;
    for(i=2; i*i<=n && aux; i++)
    {
        if(aux%i==0)
        {
            while(aux%i==0)
            {
                k++;
                aux/=i;
            }
        }
    }
    if(aux>1)
        k++;
    if(k)
        return k;
    else
        return 1;
}
long long cmmdc(long long n1, long long n2)
{

    if(n2)
        return cmmdc(n2,n1%n2);
    else
        return n1;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k==1)
        {
            if(a==b)
                cout<<"NO"<<'\n';
            else
            {
                maxi=max(a,b);
                mini=min(a,b);
                if(maxi%mini==0)
                    cout<<"YES"<<'\n';
                else
                    cout<<"NO"<<'\n';
            }
        }
        else
        {
            val=cmmdc(a,b);
            d1=nrpt(a/val);
            d2=nrpt(b/val);
            if(k<=d1+d2)
                cout<<"YES"<<'\n';
            else
            {
                if(val==1)
                    d=0;
                else
                    d=nrpt(val);
                if(a!=b)
                    k-=d1+d2;
                if(k<=d*2)
                    cout<<"YES"<<'\n';
                else
                    cout<<"NO"<<'\n';

            }
        }
    }
    return 0;
}
