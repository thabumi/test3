#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	long long a, b;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	if (a * 3 <= b) {
		cout << a << '\n';
		return;
	}
	cout << (a + b) / 4 << '\n';
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
