#include <bits/stdc++.h>
 
using namespace std;
int INF = 1e9;
map<int, int> v;
int res(int a, int n) {
	if (n == 1) {
		return 0;
	}
	if (v[n]) {
		return v[n];
	}
	string s = to_string(n);
	int k = s.size();
	s = s + s;
	int Res = INF;
	for (int i = 0; i < k; i++) {
		string t = s.substr(i, k);
		if (t[0] == '0') {
			break;
		}
		int m = stoi(t);
		if (m % a == 0) {
			Res = min(Res, res(a, m / a) + i + 1) ;
		}
	}
	v[n] = Res;
	return Res;
}
void run_case() {
	long long a, n;
	cin >> a >> n;
	if (n == 1) {
		cout << 0;
		return;
	}
	if (a == 1) {
		if (n == 1) {
			cout << 0;
		}
		else {
			cout << -1;
		}
		return;
	}
	int Res = res(a, n);
	if (Res == 1e9) {
		cout << -1;
	}
	else {
		cout << Res;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
