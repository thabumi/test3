#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		while(a[i] % 2 == 0) {
			a[i] /= 2;
			count++;
		}
	}
	sort(a, a + n);
	long long sum = 0;
 
	for (int i = 0; i < n - 1; i++) {
		sum += a[i];
	}
	for (int i = 0; i < count; i++) {
		a[n - 1] *= 2;
	}
	sum += a[n - 1];
	cout << sum << '\n';
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
