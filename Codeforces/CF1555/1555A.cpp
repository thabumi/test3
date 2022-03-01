#include<iostream>
#include<vector>
using namespace std;
void run_case(){
	long long n;
	cin>>n;
	if(n<=6){
		cout<<15<<endl;
	}
	else{
		cout<<((n+1)/2)*5<<endl;
	}
}
int main(){
	long long t;
	cin>>t;
	for(long long i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
