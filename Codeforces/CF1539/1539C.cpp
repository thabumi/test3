#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	long long k,x;
	cin>>k>>x;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long count=1;
	vector <long long> b;
	for(int i=0;i<n-1;i++){
		if(a[i]+x<a[i+1]){
			count++;
			b.push_back((a[i+1]-a[i]-1)/x);
		}
	}
	if(count==1){
		cout<<1<<'\n';
		return;
	}
	sort(b.begin(),b.end());
	int i=0;
	while(k>=b[i]&&i<b.size()){
		k-=b[i];
		i++;
		count--;
	}
	cout<<count<<'\n';
}
int main(){
	run_case();
	return 0;	
}
