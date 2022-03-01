#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	long long a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long long Max = a[1];
	for (int i = 2; i <= n; i++) {
		if (Max < a[i] - a[i - 1]) {
			Max = a[i] - a[i - 1];
		}
	}
	cout << Max << '\n';
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

