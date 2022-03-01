#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++){
		if (!(a[i] == b[i] || a[i] + 1 == b[i])) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

