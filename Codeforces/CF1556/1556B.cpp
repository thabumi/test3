#include <bits/stdc++.h>

using namespace std;
void run_case(){
	long long n;
	cin>>n;
	long long o=0;
	long long e=0;
	vector <long long> o1;
	vector <long long> e1;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			e++;
			e1.push_back(i);
		}
		else{
			o++;
			o1.push_back(i);
		}
	}
	if(abs(o-e)>1){
		cout<<-1<<'\n';
	}
	else{
		if(o==e){
			long long sum1=0;
			long long sum2=0;
			for(long long i=0;i<n;i+=2){
				sum1+=abs(o1[i/2]-i);
			}
			for(long long i=1;i<n;i+=2){
				sum2+=abs(o1[i/2]-i);
			}
			cout<<min(sum1,sum2)<<'\n';
		}
		else if(o>e){
			long long sum1=0;
			for(long long i=0;i<n;i+=2){
				sum1+=abs(o1[i/2]-i);
			}
			cout<<sum1<<'\n';
		}
		else{
			long long sum2=0;
			for(long long i=0;i<n;i+=2){
				sum2+=abs(e1[i/2]-i);
			}
			cout<<sum2<<'\n';
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
