#include <bits/stdc++.h>

using namespace std;

void run_case() {
	long long n,p,m,i,j,x,y,c,g,z,t;
	vector<pair<long long,long long>> v;
	vector<vector<long long,long long>> ans;
	pair<long long,long long> o,l;
	vector<long long> s;
	cin>>m>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	if(m==1&&v.size()%2!=0)
	{
		if(n==1)
		{
			cout<<"NO";
		}
		else
		{
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					g=lower_bound(v.begin(),v.end(),{i,j})-v.begin();
					if(g<=v.size()-1&&v[g]=={i,j})
					{
						cout<<
					}
				}
			}
		}
	}
	else
	{
		for(i=1;i<=v.size()/2;i++)
		{
			x=v[2*i-2].first;
			z=v[2*i-1].first;
			y=v[2*i-2].second;
			t=v[2*i-1].second;
			l=x-z;
			g=y-t;
			l=abs(l);
			g=abs(g);
			if(abs(x-z)+abs(y-t)==1)
			{
				s.push_back(x);
				s.push_back(y);
				s.push_back(z);
				s.push_back(t);
			}
			else
			{
				if((l+g)%2==0)
				{
					for(i=0;i<=l;i++)
					{
						if(x<z)
						{
							s.push_back(x+i);
							s.push_back(y);
						}
						else
						{
							s.push_back(x-i);
							s.push_back(y);
						}
					}
					for(i=0;i<=s;i++)
					{
						if(y<t)
						{
							s.push_back(z);
							s.push_back(y+i);
						}
						else
						{
							s.push_back(z);
							s.push_back(y-i);
						}
					}
					ans.push_back(s);
				}
				else
				{
					
				}
			}
		}
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