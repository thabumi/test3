#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0;
	int r=n-1;
	vector<int> b(n+1,0);
	vector<int> res;
	for (int k = 19; k >= 0; k--) {
		for(int i=l;i<r;i++){
			if (a[i]&(1<<k)){
				b[i]=1;
			}
			else{
				b[i]=0;
			}
		}
		int count=0;
		int Max=0;
		for(int i=0;i<=n;i++){
			if(b[i]==1){
				count++;
			}
			else{
				if(count%2==0){
					Max=max(count,Max);					
				}
				else{
					Max=max(count-1,Max);
				}
				count=0;
			}
		}
		res.push_back(Max);	
	}
	sort(res.begin(),res.end());
	cout<<res[res.size()-1];
//	for (int k = 19; k >= 0; k--) {
//		if (x&(1<<k)) cout << "1";
//		else cout << "0";	
//	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

