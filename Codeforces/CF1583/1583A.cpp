#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	bool All=false;
	for(int i=2;i<=sqrt(sum);i++){
		if(sum%i==0){
			All=true;
			break;
		}
	}
	if(All){
		cout<<n<<'\n';
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
	}
	else{
		int ind;
		int M=201;
		for(int i=0;i<n;i++){
			if(a[i]%2==1&&M>a[i]){
				ind=i+1;
				M=a[i];
				break;
			}
		}
		cout<<n-1<<'\n';
		for(int i=1;i<=n;i++){
			if(i==ind){
				continue;
			}
			cout<<i<<" ";
		}
	}
	cout<<'\n';
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

