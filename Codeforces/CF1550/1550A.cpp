#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	int n;
	cin>>n;
	int i=1;
	while(i*i<n){
		i++;
	}
	cout<<i<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
