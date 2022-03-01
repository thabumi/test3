#include <bits/stdc++.h>
 
using namespace std;
 
long long MOD = 1e9 + 7;
 
long long Pow(long long c) {
	if (c < 0) {
		return 0LL;
	}
	if (c == 0) {
		return 1LL;
	}
	long long t = Pow(c / 2);
	t = t * t % MOD;
	if (c % 2 == 1) {
		t = t * 2 % MOD;
	}
	return t;
}
 
void run_case(){
	long long n;
	cin >> n;
	int a[n];
	vector<long long> v(35, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int count = 0;
		while(a[i] % 2 == 0) {
			a[i] /= 2;
			count++;
		}
		if (count) {
			v[count]++;
		}
		
	}
	vector<long long> t;
	for (int i = 0; i < v.size(); i++) {
		if (v[i]) {
			t.emplace_back(v[i]);
		}
	}
	vector<long long> Sum(t.size());
	Sum[0] = t[0];
	for (int i = 1; i < t.size(); i++) {
		Sum[i] = Sum[i - 1] + t[i];
	}
//	for (int i = 0; i < t.size(); i++) {
//		cout << t[i] << " " << Sum[i] << '\n';
//	}
//	return;
	long long res2 = 0;
	for (int i = 0; i < t.size(); i++) {
		res2 = res2 + Pow(t[i] - 1 + Sum[t.size() - 1] - Sum[i]);
		res2 %= MOD;
	}
	long long res = Pow(n) - 1;
	res = res - res2;
	res %= MOD;
	if (res < 0) {
		res += MOD;
	}
	cout << res;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
