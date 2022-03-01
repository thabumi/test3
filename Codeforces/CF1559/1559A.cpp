#include<iostream>
#include<vector>
using namespace std;
int lastnum(int n, vector<int> v){
	int max=v[0];
	for(int i=1;i<n;i++){
		max&=v[i];
	}
	return max;
}
int main(){
	int t;
	cin>>t;
	vector<int> v1(t);
	vector < vector <int> > v2(t);
	for(int i=0;i<t;i++){
		cin>>v1[i];
		v2[i].resize(v1[i]);
		for(int j=0;j<v1[i];j++){
			cin>>v2[i][j];
		}
	}
	for(int i=0;i<t;i++){
		cout<<lastnum(v1[i],v2[i])<<endl;
	}
	return 0;
}

