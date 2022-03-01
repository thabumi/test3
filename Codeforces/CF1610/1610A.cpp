#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n, m;
	cin >> n >> m;
	
	if (n == 1 && m == 1) {
		cout << 0 << '\n';
	}
	else if (n == 1 || m == 1){
		cout << 1 << '\n';
	}
	else {
		cout << 2 << '\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
