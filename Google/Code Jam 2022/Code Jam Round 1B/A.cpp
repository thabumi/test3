#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	deque<int> d;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		d.push_back(x);
	}
	int mn = 0;
	int cnt = 0;
	while (!d.empty()) {
		if (d.front() < d.back()) {
			if (d.front() >= mn) {
				mn = d.front();
				cnt++;
			}
			d.pop_front();
		}
		else {
			if (d.back() >= mn) {
				mn = d.back();
				cnt++;
			}
			d.pop_back();
		}
	}
	cout << cnt << '\n';
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
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
