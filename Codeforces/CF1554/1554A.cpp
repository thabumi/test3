#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	int n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	long long maxprdt=v[0]*v[1];
	int i=1;
	while(i<n){
		if(v[i]>v[i-1]&&i<n-1){
			maxprdt=max(maxprdt,max(v[i]*v[i-1],v[i]*v[i+1]));
		}
		if(v[i]>v[i-1]&&i==n-1){
			maxprdt=max(maxprdt,v[i]*v[i-1]);
		}
		i++;
	}
	cout<<maxprdt<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
