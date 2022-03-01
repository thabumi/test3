#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	vector<vector<short>> v;
	vector<short> t(n);
	vector<short> count(2001,0);
	for (int i=0;i<n;i++){
		cin>>t[i];
		count[t[i]]++;
	}
//	for (int i=0;i<2001;i++){
//		cout<<count[i]<<" ";
//	}
//	return;
	v.push_back(t);
	bool b=true;
	int j=0;
	while(b){
		bool d=true;
		for (int i=0;i<n;i++){
			if(v[j][i]!=count[v[j][i]]){
				d=false;
				break;
			}		
		}
		if(d){
			break;
		}
		
		vector<short> r(n);
		for(int i=0;i<n;i++){
			r[i]=count[v[j][i]];
		}
		for(int i=0;i<2001;i++){
			count[i]=0;
		}
		for(int i=0;i<n;i++){
			count[r[i]]++;
		}
		v.push_back(r);
		j++;
	}
//	for (int i=0;i<v.size();i++){
//		for(int k=0;k<n;k++){
//			cout<<v[i][k]<<" ";
//		}
//		cout <<'\n';
//	}
	int s=v.size()-1;
	int q;
	cin>>q;
	int x,y;
	for(int i=0;i<q;i++){
		cin>>x>>y;
		if(y>s){
			cout<<v[s][x-1]<<'\n';
		}
		else{
			cout<<v[y][x-1]<<'\n';
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

