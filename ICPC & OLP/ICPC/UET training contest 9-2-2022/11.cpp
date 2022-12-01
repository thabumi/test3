#include<bits/stdc++.h>
using namespace std;
const int N=2e5+2;
int maxa[N],maxb[N],a[N],b[N],val[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,l;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=n-1;i>-1;i--){
        maxa[i]=max(maxa[i],a[i]);
        maxb[i]=max(maxb[i],b[i]);
        for(j=0;(1<<j)<=n;j++){
            if((i>>j)&1){           //so i co bit j bat, thi dp(i) cap nhat cho cac dp(j) ma j bi thieu 1 bit
                maxa[i^(1<<j)]=max(maxa[i^(1<<j)],maxa[i]);
                maxb[i^(1<<j)]=max(maxb[i^(1<<j)],maxb[i]);
            }
        }
    }
    for(i=0;i<n;i++){
        val[i]=maxa[i]*maxb[i];     //day la max cua 2 phan tu j va k nao do co j&k la mask cha cua i. Lay not suffix cua cai nay la ra dap an
    }
}
