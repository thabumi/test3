#include <bits/stdc++.h>

using namespace std;
long long dp[51][16][16][16][16][16];
void run_case() {
	long long n,i,j[5][2],k,l,ans,g;
	long long ma[6],mi[6];
	vector <string> v;
	string s;
	v.push_back("dp");
	v.push_back("graph");
	v.push_back("mathgeo");
	v.push_back("ds");
	v.push_back("adhoc");
	sort(v.begin(),v.end());
	cin>>n;
	vector<int> tag[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>k;
		for(g=1;g<=k;g++)
		{
			cin>>s;
			l=lower_bound(v.begin(),v.end(),s)-v.begin();
			tag[i].push_back(l);
		}
		sort(tag[i].begin(),tag[i].end());
	}
	cin>>mi[2]>>ma[2];
	cin>>mi[4]>>ma[4];
	cin>>mi[5]>>ma[5];
	cin>>mi[3]>>ma[3];
	cin>>mi[1]>>ma[1];
	
	ans=0;
	dp[0][0][0][0][0][0]=1;
	
	for(i=1;i<=n;i++)
	{
		for(j[0][0]=0;j[0][0]<=ma[1];j[0][0]++)
		{
			for(j[1][0]=0;j[1][0]<=ma[2];j[1][0]++)
			{
				for(j[2][0]=0;j[2][0]<=ma[3];j[2][0]++)
				{
					for(j[3][0]=0;j[3][0]<=ma[4];j[3][0]++)
					{
						for(j[4][0]=0;j[4][0]<=ma[5];j[4][0]++)
						{
							assert(j[0][0] >= 0 && j[1][0] >= 0 && j[2][0] >= 0 && j[3][0] >= 0 && j[4][0] >= 0);
							dp[i][j[0][0]][j[1][0]][j[2][0]][j[3][0]][j[4][0]]=dp[i-1][j[0][0]][j[1][0]][j[2][0]][j[3][0]][j[4][0]];
							bool c;
							c=0;
							for(k=0;k<=4;k++)
							{
								l=lower_bound(tag[i].begin(),tag[i].end(),k)-tag[i].begin();
								if(l>=tag[i].size()||k!=tag[i][l])
								{
									j[k][1]=j[k][0];
								}
								else
								{
									j[k][1]=j[k][0]-1;
									if(j[k][0]==0)
									{
										c=1;
									}
								}
							}
							if(c==0)
							{
								dp[i][j[0][0]][j[1][0]][j[2][0]][j[3][0]][j[4][0]]+=dp[i-1][j[0][1]][j[1][1]][j[2][1]][j[3][1]][j[4][1]];
							}
						}
					}
				}
			}
		}
	}
	for(i=1;i<=1;i++)
	{
		for(j[0][0]=mi[1];j[0][0]<=ma[1];j[0][0]++)
		{
			for(j[1][0]=mi[2];j[1][0]<=ma[2];j[1][0]++)
			{
				for(j[2][0]=mi[3];j[2][0]<=ma[3];j[2][0]++)
				{
					for(j[3][0]=mi[4];j[3][0]<=ma[4];j[3][0]++)
					{
						for(j[4][0]=mi[5];j[4][0]<=ma[5];j[4][0]++)
						{
							ans=ans+dp[n][j[0][0]][j[1][0]][j[2][0]][j[3][0]][j[4][0]];
						}
					}
				}
			}
		}
	}
	if(mi[1]==0&&mi[2]==0&&mi[3]==0&&mi[4]==0&&mi[5]==0)
	{
		ans=ans-1;
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
