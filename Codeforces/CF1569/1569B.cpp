#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='2'){
			count++;
		}
	}
	if(count==0){
		cout<<"YES"<<'\n';
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j){
					cout<<"X";
				}
				else{
					cout<<"=";
				}
			}
			cout<<'\n';
		}
	}
	else if(count>=1&&count<=2){
		cout<<"NO"<<'\n';
	}
	else{
		cout<<"YES"<<'\n';
		char c[n][n];
		for(int i=0;i<n;i++){
			c[i][i]='X';
			if(s[i]=='1'){
				for(int j=i+1;j<n;j++){
					c[i][j]='=';
				}	
			}
			else{
				int k=n;
				for(int j=0;j<n;j++){
					if(s[j]=='1'){
						c[i][j]='=';
					}
				}
				for(int j=i+1;j<n;j++){
					if(s[j]=='2'){
						c[i][j]='+';
						k=j;
						break;
					}
				}
				for(int j=k+1;j<n;j++){
					if(s[j]=='2'){
						c[i][j]='-';
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(c[j][i]=='X'){
					c[i][j]='X';
				}
				else if(c[j][i]=='+'){
					c[i][j]='-';
				}
				else if(c[j][i]=='-'){
					c[i][j]='+';
				}
				else if(c[j][i]=='='){
					c[i][j]='=';
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<c[i][j];
			}
			cout<<'\n';
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
