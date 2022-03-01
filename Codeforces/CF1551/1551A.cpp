#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	int n;
	cin>>n;
	if(n%3==0){
		cout<<n/3<<" "<<n/3<<endl;
	}
	if(n%3==1){
		cout<<n/3+1<<" "<<n/3<<endl;
	}
	if(n%3==2){
		cout<<n/3<<" "<<n/3+1<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
