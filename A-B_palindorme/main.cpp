#include <bits/stdc++.h>

using namespace std;
int v[20005];
int main()
{
    int t,a,b,oka,okb,i,l,p=0,k;
    char s[20005];
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>s;
        fill(v+1,v+10005,0);
        oka=1;
        okb=1;
        k=0;
        p=0;
        l=strlen(s)/2-1;
        if(l==-1)
        {
            if(s[0]=='?'){
                if(a==1 && b==0)
                    cout<<0<<'\n';
                else if (b==1 && a==0)
                    cout<<1<<'\n';
                else
                    cout<<-1<<'\n';
            }
            else if (s[0]=='0' && a==1 && b==0)
                cout<<0<<'\n';
            else if (s[0]=='1' && a==0 && b==1)
                cout<<1<<'\n';
            else
                cout<<-1<<'\n';
        }
        else
        {
            for(i=0;i<=l && oka && okb;i++){
                if(s[i]=='?'){
                    if(s[strlen(s)-i-1]!='?'){
                        if(s[strlen(s)-i-1]=='0'){
                            s[i]='0';
                            a-=2;
                            if(a<0)
                                oka=0;
                        }
                        else{
                            s[i]='1';
                            b-=2;
                            if(b<0)
                                okb=0;
                        }
                    }
                    else{
                        k+=2;
                        p++;
                        v[p]=i;
                    }
                }
                else if(s[strlen(s)-i-1]=='?'){
                    if(s[i]=='0'){
                        s[strlen(s)-i-1]='0';
                        a-=2;
                        if(a<0)
                            oka=0;
                    }
                    else{
                        s[strlen(s)-i-1]='1';
                        b-=2;
                        if(b<0)
                            okb=0;
                    }
                }
                else{
                    if(s[i]!=s[strlen(s)-i-1]){
                        oka=0;
                    }
                    else if (s[i]=='0')
                        a-=2;
                    else
                        b-=2;
                }
            }
            if (oka && okb){
                int cnt=0;
                if(strlen(s)%2){
                    if(s[strlen(s)/2]=='?'){
                        k++;
                        cnt=1;
                    }
                    else if(s[strlen(s)/2]=='1')
                        b--;
                    else
                        a--;
                }
                //cout<<k<<" "<<a<<" "<<b<<" "<<s<<" "<<p<<" ";
                if(k){
                    if(a+b==k && ((a%2==0 && b%2==0 && cnt==0) || (cnt==1 && ((a%2==0 && b%2) || (a%2 && b%2==0)))))
                    {
                        for(i=1;i<=p;i++)
                        {
                            if(a>1){
                                s[v[i]]='0';
                                s[strlen(s)-v[i]-1]='0';
                                a-=2;
                            }
                            else{
                                s[v[i]]='1';
                                s[strlen(s)-v[i]-1]='1';
                                b-=2;
                            }
                        }
                        if(cnt)
                        {
                            if(b)
                                s[strlen(s)/2]='1';
                            else
                                s[strlen(s)/2]='0';
                        }
                        cout<<s<<'\n';
                    }
                    else
                        cout<<-1<<'\n';
                }
                else if (a==0 && b==0)
                    cout<<s<<'\n';
                else
                    cout<<-1<<'\n';
            }
            else
                cout<<-1<<'\n';
        }
    }
    return 0;
}
