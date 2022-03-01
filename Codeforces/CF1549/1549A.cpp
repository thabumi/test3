#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	int n;
	cin>>n;
	if(n==5){
		cout<<2<<" "<<4<<endl;
	}
	else{
		cout<<2<<" "<<(n-1)/2<<endl;
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
