#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long N;
	cin>>N;
	int dig=1;
	long long Pow=10;
	vector<long long> v;
	v.push_back(1);
	while(Pow<=N){
		v.push_back(Pow);
		dig++;
		Pow*=10;
	}
	long long sum[20];
	sum[0]=1;
	for(int i=1;i<(int)(v.size());i++){
		sum[i]=sum[i-1]+v[i];
	}
	
	unsigned long long Sum=0;
	for(int i=1;i<dig;i++){
		Sum+=sum[i-1];
	}
	long long t=v[dig-1];
	while(N>0){
		if(N>=2*t){
			N=2*t-1;
		}
		if(N<t){
			break;
		}
		Sum+=max(N-t+1,0LL);
		N-=t;
		t/=10;
	}
	cout<<Sum;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

