#include <bits/stdc++.h>
//typedef long long ll;
#define int long long
using namespace std;
bool checkprime[3505];
void run_case() {
	long long n,i,j,p,k,q,ans;
 	cin >> n;
 	long long a[n+1];
 	for(i=1;i<=n;i++)
 	{
 		cin>>a[i];
	}
	vector<long long> prime,x;
	long long ma=3500;
	for(i=2;i<=ma;i++)
	{
		if(checkprime[i]==0)
		{
			prime.push_back(i);
			for(j=i;j*i<=ma;j++)
			{
				checkprime[i*j]=1;
			}
		}
	}
//	return;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<prime.size();j++)
		{
			p=prime[j];
			if(a[i]%p==0)
			{
				k=k*p;
			}
			q=p*p;
			while(a[i]%(q)==0)
			{
				a[i]=a[i]/p;
			}                              
		}
	}
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] <<" ";
//	}
//	cout << '\n';
	sort(a+1,a+n+1);
	a[0]=0;
	q=1;
	ans=0;
	
//	return;
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i-1])
		{
			ans=ans+q*(q-1)/2;
			q=1;
		}
		else
		{
			q=q+1;
		}
	}
	ans=ans+q*(q-1)/2;
	cout<<ans;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;
}
