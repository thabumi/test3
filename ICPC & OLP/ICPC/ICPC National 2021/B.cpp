#include <bits/stdc++.h>

using namespace std;
void run_case() {
	long long R,C,i,j,k,ans,ca,u;
	cin>>R>>C;
	char A[R+1][C+1],g;
	ans=0;
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		{
			cin>>A[i][j];
		}
	}
	for(i=1;i<=R/2;i++)
	{
		for(j=1;j<=C/2;j++)
		{
			ca=100000;
			for(k=0;k<26;k++)
			{
				g='A'+k;
				u=0;
				u=u+min(abs(g-A[i][j]),26-abs(g-A[i][j]));
				
				u=u+min(abs(g-A[R+1-i][j]),26-abs(g-A[R+1-i][j]));
				
				u=u+min(abs(g-A[i][C+1-j]),26-abs(g-A[i][C+1-j]));
				
				u=u+min(abs(g-A[R+1-i][C+1-j]),26-abs(g-A[R+1-i][C+1-j]));
				ca=min(ca,u);
			}
			ans=ans+ca;
		}
	
	}
	if(R%2==1)
		{
			for(i=1;i<=C/2;i++)
			{
				ca=100000;
				for(k=0;k<26;k++)
				{
					g='A'+k;
					u=0;
					u=u+min(abs(g-A[R/2+1][i]),26-abs(g-A[R/2+1][i]));
					u=u+min(abs(g-A[R/2+1][C+1-i]),26-abs(g-A[R/2+1][C+1-i]));
					ca=min(ca,u);
				}
			ans=ans+ca;
			}
		}
	if(C%2==1)
		{
			for(i=1;i<=R/2;i++)
			{
				ca=10000;
				for(k=0;k<26;k++)
				{
					g='A'+k;
					u=0;
					u=u+min(abs(g-A[i][C/2+1]),26-abs(g-A[i][C/2+1]));
					u=u+min(abs(g-A[R+1-i][C/2+1]),26-abs(g-A[R+1-i][C/2+1]));
					ca=min(ca,u);
				}
				ans=ans+ca;
			}
			
		}
	cout<<ans;
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