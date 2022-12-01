#include <bits/stdc++.h>

using namespace std;

void run_case() {
	long long n,p,m,i,j,x,y,c,g;
	cin>>n;
	
		p=n-1;
		cout<<n*p+1;
		cout<<"\n";
		for(i=0;i<=p-1;i++)
		{
			for(j=0;j<=p-1;j++)
			{
				cout<<i*n+1<<" ";
				for(c=2;c<=p+1;c++)
				{
					g=(j+i*c)%p;
					cout<<g*n+c<<" ";
				}
				cout<<"\n";	
			}
		}
		for(i=0;i<=p;i++)
		{
			cout<<i*n+1<<" ";
		}
		cout<<"\n";
		for(i=2;i<=n;i++)
		{
			cout<<n*(n-1)+1<<" ";
			for(j=0;j<=n-2;j++)
			{
				cout<<j*n+i<<" ";
			}
			cout<<"\n";
		}
}

int main() {
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
