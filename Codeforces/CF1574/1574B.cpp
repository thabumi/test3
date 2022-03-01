#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int a,b,c,m;
	cin>>a>>b>>c>>m;
	if(m>a+b+c-3){
		cout<<"NO"<<'\n';
		return;
	}
	else{
		int S=a+b+c;
		int M=max(a,max(b,c));
		if(S%2==0){
			if(2*M<=S){
				cout<<"YES"<<'\n';
				return;
			}
			else{
				if(m<2*M-S-1){
					cout<<"NO"<<'\n';
					return;
				}
				else{
					cout<<"YES"<<'\n';
					return;
				}
			}
		}
		else{
			if(2*M<=S+1){
				cout<<"YES"<<'\n';
				return;
			}
			else{
				if(m<2*M-S-1){
					cout<<"NO"<<'\n';
					return;
				}
				else{
					cout<<"YES"<<'\n';
					return;
				}
			}
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

