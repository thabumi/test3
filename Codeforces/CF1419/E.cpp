#include <bits/stdc++.h>

using namespace std;

#define int long long

void run_case() {
	int n;
	cin >> n;
	map<int, int> m;
	vector<int> primediv;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			m[i] = 1;
			m[n / i] = 1;
		}
	}
//	for (auto t : m) {
//		cout << t.first << " ";
//	}
//	return;
	int N = n;
	for (int i = 2; i * i <= N; i++) {
		if (N % i == 0) {
			primediv.push_back(i);
			while (N % i == 0) {
				N /= i;
			}
		}
	}
	if (N > 1) {
		primediv.push_back(N);
	}
//	for (auto t : primediv) {
//		cout << t << " ";
//	}
//	return;	
	if (primediv.size() == 2 && primediv[0] * primediv[1] == n) {
		
		cout << n << " " << primediv[0] << " " << primediv[1] << '\n';
		cout << 1 << '\n';
		return;
	}
//	return;
	vector<int> res;
	res.push_back(n);
	for (int i = 0; i < primediv.size() - 1; i++) {
		res.push_back(primediv[i]);
		m.erase(primediv[i]);
		map<int, int> p;
		for (auto t : m) {
			if (t.first % primediv[i] == 0 && t.first != primediv[i] * primediv[i + 1]) {
				res.push_back(t.first);
				p[t.first] = 1;	
//				m.erase(t.first);
			}
		}
		for (auto t : p) {
			m.erase(t.first);
		}
		res.push_back(primediv[i] * primediv[i + 1]);
//		if (m[primediv[i] * primediv[i + 1]]) {
//			m.erase(primediv[i] * primediv[i + 1]);
//		}
		m.erase(primediv[i] * primediv[i + 1]);
	}
//	return;
	for (auto t : m) {
		res.push_back(t.first);
	}
	for (auto t : res) {
		cout << t << " ";
	}
	cout << '\n';
	cout << 0 << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
