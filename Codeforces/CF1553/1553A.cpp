#include<iostream>
#include<vector>
using namespace std;
long long countin(long long n){
	return (n+1)/10;
}
int main(){
	int t;
	cin>>t;
	vector<long long>v(t);
	for(int i=0;i<t;i++){
		cin>>v[i];
	}
	for(int i=0;i<t;i++){
		cout<<countin(v[i])<<endl;
	}
	return 0;
}
