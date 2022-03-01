#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int q;
	cin >> q;
	long long m = 2e18;
	multiset<long long> s;
	s.insert(-1);
	s.insert(-1);
	s.insert(-1);
	s.insert(-1);
	s.insert(-1);
	s.insert(-1);
	s.insert(m);
	s.insert(m);
	s.insert(m);
	s.insert(m);
	s.insert(m);
	s.insert(m);
//	s.insert(1);
//	s.insert(1);
//	cout << s.size();
//	return;
	for (int i = 0; i < q; i++) {
		int type;
		cin >> type;
		if (type == 1) {
			long long x;
			cin >> x;
			s.insert(x);
		}
		else if (type == 2) {
			long long x;
			int k;
			cin >> x >> k;
//			if (k > s.size()) {
//				cout << -1 << '\n';
//				continue;
//			}
			auto it = s.upper_bound(x);
//			bool notOk = false;
			for (int i = 0; i < k; i++) {
				it--;
			}
			if (*it == m || *it == -1) {
				cout << -1 << '\n';
			}
			else {
				cout << *it << '\n';
			}
			
		}
		else {
			long long x;
			int k;
			cin >> x >> k;
//			if (k > s.size()) {
//				cout << -1 << '\n';
//				continue;
//			}
			auto it = s.lower_bound(x);
			k--;
			for (int i = 0; i < k; i++) {
				it++;
//				
//				if (i < k - 1 && it == it2) {
//					notOk = true;
//					break;
//				}
			}
			if (*it == m || *it == -1) {
				cout << -1 << '\n';
			}
			else {
				cout << *it << '\n';
			}
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
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
