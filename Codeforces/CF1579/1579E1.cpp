#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int n;
	cin>>n;
	deque<int> d;
	int x;
	cin>>x;
	d.push_back(x);
	for(int i=0;i<n-1;i++){
		cin>>x;
		if(x>d[0]){
			d.push_back(x);
		}
		else{
			d.push_front(x);
		}
	}
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
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

