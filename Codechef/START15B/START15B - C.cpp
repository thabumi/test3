#include <bits/stdc++.h>

using namespace std;
vector<long long> f;
void run_case(){
	vector<long long> res;
	long long c;
	cin>>c;
	bool b=false;
	int count=0;
	for(int i=61;i>=0;i--){
		if(!b){
			if(c&(1LL<<i)){
				b=true;
				res.push_back(f[i+1]);
				count++;
				continue;
			}
			else{
				continue;
			}
		}
		if((c&(1LL<<i))!=((c&(1LL<<(i+1)))>>1)){
			count++;
			res.push_back(f[i+1]);
		}
	}
	if(!b){
		cout<<2<<'\n';
		cout<<1<<" "<<1<<'\n';
		return;
	}
	cout<<count<<'\n';
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<'\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	f.push_back(0);
	long long dig=1;
	for(int i=1;i<=62;i++){
		f.push_back(f[f.size()-1]+dig);
		dig*=2;
	}
//	cout<<f[61]<<" "<<f[60]<<'\n';
//	for(int i=0;i<10;i++){
//		cout<<f[i]<<'\n';
//	}
//	return 0;
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

