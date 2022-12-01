#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int q;
	cin >> q;
	vector<pair<long long, long long>> v;
	vector<long long> sumballs;
	vector<long long> a;
	vector<long long> sumnumb;
	long long popBefore = 0;
	long long pop = 0;
	for (int i = 0; i < q; i++) {
		int type;
		long long x, c;
		cin >> type;
		if (type == 1) {
			cin >> x >> c;
			v.push_back({c, x});
			a.push_back(c);
			if (sumballs.empty()) {
				sumballs.push_back(c);
			}
			else {
				sumballs.push_back(sumballs.back() + c);
			}
			if (sumnumb.empty()) {
				sumnumb.push_back(c * )
			}
		}
		else {
			cin >> c;
			popBefore += c;
			
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
