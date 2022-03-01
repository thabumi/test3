#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	long long n;
	cin >> n;
	vector<pair<long long, int>> a(n);
	for (long long i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a.begin(), a.end(), greater<pair<long long,int>>());
	long long sum = 0;
	vector<long long> res(n + 5);
	res[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			res[a[i - 1].second] = (i + 1) / 2;
		}
		else {
			res[a[i - 1].second] = -i / 2;
		}
		sum += 2 * a[i - 1].first * ((i + 1) / 2);
	}
	cout << sum << '\n';
	for (int i = 0; i <= n; i++) {
		cout << res[i] << " ";
	}
	cout << '\n';
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
