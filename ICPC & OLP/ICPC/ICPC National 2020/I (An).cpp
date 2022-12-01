#include<bits/stdc++.h>
using namespace std;
long long mod,max2,max1;
long long mo(long long a,long long b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        long long v;
        v=mo(a,b/2);
        v=(v*v)%mod;
        if(b%2==0)
        {
            return v;
        }
        else
        {
            return (v*a)%mod;
        }
    }
}
signed main()
{
    long long x,n,i,y,g,m;
    cin>>x>>n;
    mod=1e9+7;
    max1=1000*1000+1;
    max2=2*max1;
    long long a[max2],b[max2],f[max1];
    a[0]=1;
    b[0]=1;
    b[1]=1;
    a[1]=1;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=1e6;i++)
    {
        a[i]=(a[i-1]*i)%mod;
        b[i]=mo(a[i],mod-2);
        f[i]=(f[i-1]+f[i-2])%mod;
    }
    for(i=1e6+1;i<=2*1e6;i++)
    {
        a[i]=(a[i-1]*i)%mod;
    }
    long long sum;
    sum=0;
    y=x-1;
    for(i=0;i<=n;i++)
    {
        g=(f[i]*a[n+1+y-i-1])%mod;
        g=(g*b[n+1-i-1])%mod;
        g=(g*b[y])%mod;
        sum=(sum+g)%mod;
    }
    for(i=0;i<=y-1;i++)
    {
        m=y-1-i;
        g=(f[i]*a[m+n])%mod;
        g=(g*b[n])%mod;
        g=(g*b[m])%mod;
        sum=(sum+g)%mod;
    }
    g=(a[y+n]*b[y])%mod;
    g=(g*b[n])%mod;
    sum=(sum+g)%mod;
    cout<<sum;
}
