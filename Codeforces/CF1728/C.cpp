#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	multiset<int> m;
	multiset<int> n;
	map<int> m;
	map<int> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
		m.insert(a[i]);
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		n[b[i]]++;
		n.insert(b[i]);
	}
	auto it = m.begin();
	while (it != m.end()) {
		auto itt = n.find(*it);
		if (itt != n.end()) {
			m.erase(it);
			
		}
	}
}

int main() {
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
